
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct pingpong_dest {int lid; int qpn; int psn; int gid; } ;
struct TYPE_4__ {int lid; } ;
struct pingpong_context {int rx_depth; int pending; struct ibv_cq* cq; int channel; int context; TYPE_1__* qp; TYPE_2__ portinfo; } ;
struct option {char* name; int has_arg; char val; } ;
struct ibv_wc {scalar_t__ status; scalar_t__ wr_id; } ;
struct ibv_device {int dummy; } ;
struct ibv_cq {int dummy; } ;
struct TYPE_3__ {int qp_num; } ;


 int AF_INET6 ;
 scalar_t__ IBV_WC_SUCCESS ;


 int _SC_PAGESIZE ;
 int fprintf (int ,char*,...) ;
 int free (struct pingpong_dest*) ;
 int getopt_long (int,char**,char*,struct option*,int *) ;
 int getpid () ;
 scalar_t__ gettimeofday (struct timeval*,int *) ;
 int ibv_ack_cq_events (struct ibv_cq*,int) ;
 int ibv_free_device_list (struct ibv_device**) ;
 scalar_t__ ibv_get_cq_event (int ,struct ibv_cq**,void**) ;
 struct ibv_device** ibv_get_device_list (int *) ;
 int ibv_get_device_name (struct ibv_device*) ;
 int ibv_poll_cq (struct ibv_cq*,int,struct ibv_wc*) ;
 scalar_t__ ibv_query_gid (int ,int,int,int *) ;
 scalar_t__ ibv_req_notify_cq (struct ibv_cq*,int ) ;
 char* ibv_wc_status_str (scalar_t__) ;
 int inet_ntop (int ,int *,char*,int) ;
 int lrand48 () ;
 int memset (int *,int ,int) ;
 char* optarg ;
 int optind ;
 int page_size ;
 int perror (char*) ;
 struct pingpong_dest* pp_client_exch_dest (char*,unsigned int,struct pingpong_dest*) ;
 scalar_t__ pp_close_ctx (struct pingpong_context*) ;
 scalar_t__ pp_connect_ctx (struct pingpong_context*,int,int,int,struct pingpong_dest*,int) ;
 scalar_t__ pp_get_port_info (int ,int,TYPE_2__*) ;
 struct pingpong_context* pp_init_ctx (struct ibv_device*,unsigned int,unsigned int,int,int) ;
 int pp_post_recv (struct pingpong_context*,int) ;
 scalar_t__ pp_post_send (struct pingpong_context*,int) ;
 struct pingpong_dest* pp_server_exch_dest (struct pingpong_context*,int,unsigned int,int,struct pingpong_dest*,int) ;
 int printf (char*,unsigned int,float,float,...) ;
 int srand48 (int) ;
 int stderr ;
 int strcmp (int ,char*) ;
 char* strdupa (char*) ;
 void* strtol (char*,int *,int ) ;
 unsigned int strtoul (char*,int *,int ) ;
 int sysconf (int ) ;
 int time (int *) ;
 int usage (char*) ;

int main(int argc, char *argv[])
{
 struct ibv_device **dev_list;
 struct ibv_device *ib_dev;
 struct pingpong_context *ctx;
 struct pingpong_dest my_dest;
 struct pingpong_dest *rem_dest;
 struct timeval start, end;
 char *ib_devname = ((void*)0);
 char *servername = ((void*)0);
 unsigned int port = 18515;
 int ib_port = 1;
 unsigned int size = 2048;
 unsigned int rx_depth = 500;
 unsigned int iters = 1000;
 int use_event = 0;
 int routs;
 int rcnt, scnt;
 int num_cq_events = 0;
 int sl = 0;
 int gidx = -1;
 char gid[33];

 srand48(getpid() * time(((void*)0)));

 while (1) {
  int c;

  static struct option long_options[] = {
   { .name = "port", .has_arg = 1, .val = 'p' },
   { .name = "ib-dev", .has_arg = 1, .val = 'd' },
   { .name = "ib-port", .has_arg = 1, .val = 'i' },
   { .name = "size", .has_arg = 1, .val = 's' },
   { .name = "rx-depth", .has_arg = 1, .val = 'r' },
   { .name = "iters", .has_arg = 1, .val = 'n' },
   { .name = "sl", .has_arg = 1, .val = 'l' },
   { .name = "events", .has_arg = 0, .val = 'e' },
   { .name = "gid-idx", .has_arg = 1, .val = 'g' },
   {}
  };

  c = getopt_long(argc, argv, "p:d:i:s:r:n:l:eg:",
       long_options, ((void*)0));
  if (c == -1)
   break;

  switch (c) {
  case 'p':
   port = strtol(optarg, ((void*)0), 0);
   if (port > 65535) {
    usage(argv[0]);
    return 1;
   }
   break;

  case 'd':
   ib_devname = strdupa(optarg);
   break;

  case 'i':
   ib_port = strtol(optarg, ((void*)0), 0);
   if (ib_port < 1) {
    usage(argv[0]);
    return 1;
   }
   break;

  case 's':
   size = strtoul(optarg, ((void*)0), 0);
   break;

  case 'r':
   rx_depth = strtoul(optarg, ((void*)0), 0);
   break;

  case 'n':
   iters = strtoul(optarg, ((void*)0), 0);
   break;

  case 'l':
   sl = strtol(optarg, ((void*)0), 0);
   break;

  case 'e':
   ++use_event;
   break;

  case 'g':
   gidx = strtol(optarg, ((void*)0), 0);
   break;

  default:
   usage(argv[0]);
   return 1;
  }
 }

 if (optind == argc - 1)
  servername = strdupa(argv[optind]);
 else if (optind < argc) {
  usage(argv[0]);
  return 1;
 }

 page_size = sysconf(_SC_PAGESIZE);

 dev_list = ibv_get_device_list(((void*)0));
 if (!dev_list) {
  perror("Failed to get IB devices list");
  return 1;
 }

 if (!ib_devname) {
  ib_dev = *dev_list;
  if (!ib_dev) {
   fprintf(stderr, "No IB devices found\n");
   return 1;
  }
 } else {
  int i;
  for (i = 0; dev_list[i]; ++i)
   if (!strcmp(ibv_get_device_name(dev_list[i]), ib_devname))
    break;
  ib_dev = dev_list[i];
  if (!ib_dev) {
   fprintf(stderr, "IB device %s not found\n", ib_devname);
   return 1;
  }
 }

 ctx = pp_init_ctx(ib_dev, size, rx_depth, ib_port, use_event);
 if (!ctx)
  return 1;

 routs = pp_post_recv(ctx, ctx->rx_depth);
 if (routs < ctx->rx_depth) {
  fprintf(stderr, "Couldn't post receive (%d)\n", routs);
  return 1;
 }

 if (use_event)
  if (ibv_req_notify_cq(ctx->cq, 0)) {
   fprintf(stderr, "Couldn't request CQ notification\n");
   return 1;
  }

 if (pp_get_port_info(ctx->context, ib_port, &ctx->portinfo)) {
  fprintf(stderr, "Couldn't get port info\n");
  return 1;
 }
 my_dest.lid = ctx->portinfo.lid;

 my_dest.qpn = ctx->qp->qp_num;
 my_dest.psn = lrand48() & 0xffffff;

 if (gidx >= 0) {
  if (ibv_query_gid(ctx->context, ib_port, gidx, &my_dest.gid)) {
   fprintf(stderr, "Could not get local gid for gid index "
        "%d\n", gidx);
   return 1;
  }
 } else
  memset(&my_dest.gid, 0, sizeof my_dest.gid);

 inet_ntop(AF_INET6, &my_dest.gid, gid, sizeof gid);
 printf("  local address:  LID 0x%04x, QPN 0x%06x, PSN 0x%06x: GID %s\n",
        my_dest.lid, my_dest.qpn, my_dest.psn, gid);

 if (servername)
  rem_dest = pp_client_exch_dest(servername, port, &my_dest);
 else
  rem_dest = pp_server_exch_dest(ctx, ib_port, port, sl,
       &my_dest, gidx);

 if (!rem_dest)
  return 1;

 inet_ntop(AF_INET6, &rem_dest->gid, gid, sizeof gid);
 printf("  remote address: LID 0x%04x, QPN 0x%06x, PSN 0x%06x, GID %s\n",
        rem_dest->lid, rem_dest->qpn, rem_dest->psn, gid);

 if (servername)
  if (pp_connect_ctx(ctx, ib_port, my_dest.psn, sl, rem_dest,
         gidx))
   return 1;

 ctx->pending = 129;

 if (servername) {
  if (pp_post_send(ctx, rem_dest->qpn)) {
   fprintf(stderr, "Couldn't post send\n");
   return 1;
  }
  ctx->pending |= 128;
 }

 if (gettimeofday(&start, ((void*)0))) {
  perror("gettimeofday");
  return 1;
 }

 rcnt = scnt = 0;
 while (rcnt < iters || scnt < iters) {
  if (use_event) {
   struct ibv_cq *ev_cq;
   void *ev_ctx;

   if (ibv_get_cq_event(ctx->channel, &ev_cq, &ev_ctx)) {
    fprintf(stderr, "Failed to get cq_event\n");
    return 1;
   }

   ++num_cq_events;

   if (ev_cq != ctx->cq) {
    fprintf(stderr, "CQ event for unknown CQ %p\n", ev_cq);
    return 1;
   }

   if (ibv_req_notify_cq(ctx->cq, 0)) {
    fprintf(stderr, "Couldn't request CQ notification\n");
    return 1;
   }
  }

  {
   struct ibv_wc wc[2];
   int ne, i;

   do {
    ne = ibv_poll_cq(ctx->cq, 2, wc);
    if (ne < 0) {
     fprintf(stderr, "poll CQ failed %d\n", ne);
     return 1;
    }
   } while (!use_event && ne < 1);

   for (i = 0; i < ne; ++i) {
    if (wc[i].status != IBV_WC_SUCCESS) {
     fprintf(stderr, "Failed status %s (%d) for wr_id %d\n",
      ibv_wc_status_str(wc[i].status),
      wc[i].status, (int) wc[i].wr_id);
     return 1;
    }

    switch ((int) wc[i].wr_id) {
    case 128:
     ++scnt;
     break;

    case 129:
     if (--routs <= 1) {
      routs += pp_post_recv(ctx, ctx->rx_depth - routs);
      if (routs < ctx->rx_depth) {
       fprintf(stderr,
        "Couldn't post receive (%d)\n",
        routs);
       return 1;
      }
     }

     ++rcnt;
     break;

    default:
     fprintf(stderr, "Completion for unknown wr_id %d\n",
      (int) wc[i].wr_id);
     return 1;
    }

    ctx->pending &= ~(int) wc[i].wr_id;
    if (scnt < iters && !ctx->pending) {
     if (pp_post_send(ctx, rem_dest->qpn)) {
      fprintf(stderr, "Couldn't post send\n");
      return 1;
     }
     ctx->pending = 129 |
             128;
    }
   }
  }
 }

 if (gettimeofday(&end, ((void*)0))) {
  perror("gettimeofday");
  return 1;
 }

 {
  float usec = (end.tv_sec - start.tv_sec) * 1000000 +
   (end.tv_usec - start.tv_usec);
  long long bytes = (long long) size * iters * 2;

  printf("%lld bytes in %.2f seconds = %.2f Mbit/sec\n",
         bytes, usec / 1000000., bytes * 8. / usec);
  printf("%d iters in %.2f seconds = %.2f usec/iter\n",
         iters, usec / 1000000., usec / iters);
 }

 ibv_ack_cq_events(ctx->cq, num_cq_events);

 if (pp_close_ctx(ctx))
  return 1;

 ibv_free_device_list(dev_list);
 free(rem_dest);

 return 0;
}
