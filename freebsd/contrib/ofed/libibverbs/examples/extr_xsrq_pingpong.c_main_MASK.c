
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct option {char* name; int has_arg; char val; } ;
struct ibv_wc {int status; int qp_num; } ;
struct TYPE_4__ {int num_clients; int num_tests; int use_event; int recv_cq; int send_cq; TYPE_1__* rem_dest; void* gidx; void* sl; int mtu; void* size; void* ib_port; } ;
struct TYPE_3__ {int pp_cnt; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char**,char*,struct option*,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,struct ibv_wc*) ;
 int FUNC_6 () ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (char*) ;
 int VAR_5 ;
 char* FUNC_17 (char*) ;
 void* FUNC_18 (char*,int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;

int FUNC_21(int VAR_6, char *VAR_7[])
{
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 int VAR_10 = 18515;
 int VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16 = 0;
 struct ibv_wc VAR_17;

 FUNC_6();
 while (1) {
  int VAR_18;

  static struct option VAR_19[] = {
   { .name = "port", .has_arg = 1, .val = 'p' },
   { .name = "ib-dev", .has_arg = 1, .val = 'd' },
   { .name = "ib-port", .has_arg = 1, .val = 'i' },
   { .name = "size", .has_arg = 1, .val = 's' },
   { .name = "mtu", .has_arg = 1, .val = 'm' },
   { .name = "clients", .has_arg = 1, .val = 'c' },
   { .name = "num_tests", .has_arg = 1, .val = 'n' },
   { .name = "sl", .has_arg = 1, .val = 'l' },
   { .name = "events", .has_arg = 0, .val = 'e' },
   { .name = "gid-idx", .has_arg = 1, .val = 'g' },
   {}
  };

  VAR_18 = FUNC_3(VAR_6, VAR_7, "p:d:i:s:m:c:n:l:eg:", VAR_19,
    ((void*)0));
  if (VAR_18 == -1)
   break;

  switch (VAR_18) {
  case 'p':
   VAR_10 = FUNC_18(VAR_2, ((void*)0), 0);
   if (VAR_10 < 0 || VAR_10 > 65535) {
    FUNC_20(VAR_7[0]);
    return 1;
   }
   break;
  case 'd':
   VAR_8 = FUNC_17(VAR_2);
   break;
  case 'i':
   VAR_1.ib_port = FUNC_18(VAR_2, ((void*)0), 0);
   if (VAR_1.ib_port < 0) {
    FUNC_20(VAR_7[0]);
    return 1;
   }
   break;
  case 's':
   VAR_1.size = FUNC_18(VAR_2, ((void*)0), 0);
   break;
  case 'm':
   VAR_1.mtu = FUNC_11(FUNC_18(VAR_2, ((void*)0), 0));
   if (VAR_1.mtu == 0) {
    FUNC_20(VAR_7[0]);
    return 1;
   }
   break;
  case 'c':
   VAR_1.num_clients = FUNC_18(VAR_2, ((void*)0), 0);
   break;
  case 'n':
   VAR_1.num_tests = FUNC_18(VAR_2, ((void*)0), 0);
   break;
  case 'l':
   VAR_1.sl = FUNC_18(VAR_2, ((void*)0), 0);
   break;
  case 'g':
   VAR_1.gidx = FUNC_18(VAR_2, ((void*)0), 0);
   break;
  case 'e':
   VAR_1.use_event = 1;
   break;
  default:
   FUNC_20(VAR_7[0]);
   return 1;
  }
 }

 if (VAR_3 == VAR_6 - 1) {
  VAR_9 = FUNC_17(VAR_7[VAR_3]);
  VAR_1.num_clients = 1;
 } else if (VAR_3 < VAR_6) {
  FUNC_20(VAR_7[0]);
  return 1;
 }

 VAR_4 = FUNC_19(VAR_0);

 if (FUNC_10(VAR_8))
  return 1;

 if (FUNC_12(VAR_1.num_clients)) {
  FUNC_1(VAR_5, "Couldn't post receives\n");
  return 1;
 }

 if (VAR_9) {
  if (FUNC_7(VAR_9, VAR_10))
   return 1;
 } else {
  if (FUNC_14(VAR_10))
   return 1;

  for (VAR_11 = 0; VAR_11 < VAR_1.num_clients; VAR_11++)
   FUNC_13(VAR_11);
 }

 VAR_12 = VAR_1.num_clients * VAR_1.num_tests;
 while (VAR_13 < VAR_12) {
  if (VAR_1.use_event) {
   if (FUNC_2())
    return 1;

   ++VAR_16;
  }

  do {
   VAR_14 = FUNC_5(VAR_1.recv_cq, 1, &VAR_17);
   if (VAR_14 < 0) {
    FUNC_1(VAR_5, "Error polling cq %d\n", VAR_14);
    return 1;
   } else if (VAR_14 == 0) {
    break;
   }

   if (VAR_17.status) {
    FUNC_1(VAR_5, "Work completion error %d\n", VAR_17.status);
    return 1;
   }

   FUNC_12(VAR_14);
   VAR_15 = FUNC_0(VAR_17.qp_num);
   if (VAR_1.rem_dest[VAR_15].pp_cnt < VAR_1.num_tests)
    FUNC_13(VAR_15);
   VAR_13 += VAR_14;
  } while (VAR_14 > 0);
 }

 for (VAR_13 = 0; VAR_13 < VAR_1.num_clients; VAR_13 += VAR_14) {
  VAR_14 = FUNC_5(VAR_1.send_cq, 1, &VAR_17);
  if (VAR_14 < 0) {
   FUNC_1(VAR_5, "Error polling cq %d\n", VAR_14);
   return 1;
  }
 }

 if (VAR_1.use_event)
  FUNC_4(VAR_1.recv_cq, VAR_16);







 if (VAR_9) {
  if (FUNC_8())
   return 1;
 } else if (FUNC_15()) {
  return 1;
 }

 if (FUNC_9())
  return 1;

 FUNC_16("success\n");
 return 0;
}
