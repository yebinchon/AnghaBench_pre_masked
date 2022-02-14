
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ts_recent_stamp; int mss_clamp; scalar_t__ ts_recent; } ;
struct tcp_sock {int write_seq; TYPE_2__ rx_opt; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_route_caps; int sk_gso_type; int sk_bound_dev_if; } ;
struct TYPE_9__ {int dst; } ;
struct rtable {int rt_flags; scalar_t__ rt_dst; TYPE_3__ u; scalar_t__ rt_src; } ;
struct ip_options {scalar_t__ faddr; scalar_t__ optlen; scalar_t__ srr; } ;
struct inet_sock {scalar_t__ daddr; int id; scalar_t__ dport; int sport; scalar_t__ saddr; scalar_t__ rcv_saddr; int opt; } ;
struct inet_peer {scalar_t__ tcp_ts_stamp; scalar_t__ tcp_ts; } ;
typedef scalar_t__ __be32 ;
struct TYPE_11__ {scalar_t__ icsk_ext_hdr_len; } ;
struct TYPE_10__ {scalar_t__ sysctl_tw_recycle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 () ;
 TYPE_6__* FUNC_3 (struct sock*) ;
 int FUNC_4 (TYPE_4__*,struct sock*) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct rtable**,scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,struct sock*,int) ;
 int FUNC_7 (struct rtable**,int ,int ,scalar_t__,struct sock*) ;
 int FUNC_8 (struct rtable*) ;
 int VAR_12 ;
 struct ip_options* FUNC_9 (int ) ;
 struct inet_peer* FUNC_10 (struct rtable*) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_12 (struct sock*,int *) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 TYPE_4__ VAR_13 ;
 int FUNC_15 (struct sock*,int ) ;
 struct tcp_sock* FUNC_16 (struct sock*) ;

int FUNC_17(struct sock *VAR_14, struct sockaddr *VAR_15, int VAR_16)
{
 struct inet_sock *VAR_17 = FUNC_5(VAR_14);
 struct tcp_sock *VAR_18 = FUNC_16(VAR_14);
 struct sockaddr_in *VAR_19 = (struct sockaddr_in *)VAR_15;
 struct rtable *VAR_20;
 __be32 VAR_21, VAR_22;
 int VAR_23;
 int VAR_24;
 struct ip_options *VAR_25;

 if (VAR_16 < sizeof(struct sockaddr_in))
  return -VAR_2;

 if (VAR_19->sin_family != VAR_0)
  return -VAR_1;

 VAR_22 = VAR_21 = VAR_19->sin_addr.s_addr;
 VAR_25 = FUNC_9(VAR_17->opt);
 if (VAR_25 && VAR_25->srr) {
  if (!VAR_21)
   return -VAR_2;
  VAR_22 = VAR_25->faddr;
 }

 VAR_23 = FUNC_6(&VAR_20, VAR_22, VAR_17->saddr,
          FUNC_1(VAR_14), VAR_14->sk_bound_dev_if,
          VAR_4,
          VAR_17->sport, VAR_19->sin_port, VAR_14, 1);
 if (VAR_23 < 0) {
  if (VAR_23 == -VAR_3)
   FUNC_0(FUNC_13(VAR_14), VAR_5);
  return VAR_23;
 }

 if (VAR_20->rt_flags & (VAR_7 | VAR_6)) {
  FUNC_8(VAR_20);
  return -VAR_3;
 }

 if (!VAR_25 || !VAR_25->srr)
  VAR_21 = VAR_20->rt_dst;

 if (!VAR_17->saddr)
  VAR_17->saddr = VAR_20->rt_src;
 VAR_17->rcv_saddr = VAR_17->saddr;

 if (VAR_18->rx_opt.ts_recent_stamp && VAR_17->daddr != VAR_21) {

  VAR_18->rx_opt.ts_recent = 0;
  VAR_18->rx_opt.ts_recent_stamp = 0;
  VAR_18->write_seq = 0;
 }

 if (VAR_13.sysctl_tw_recycle &&
     !VAR_18->rx_opt.ts_recent_stamp && VAR_20->rt_dst == VAR_21) {
  struct inet_peer *VAR_26 = FUNC_10(VAR_20);






  if (VAR_26 != ((void*)0) &&
      VAR_26->tcp_ts_stamp + VAR_10 >= FUNC_2()) {
   VAR_18->rx_opt.ts_recent_stamp = VAR_26->tcp_ts_stamp;
   VAR_18->rx_opt.ts_recent = VAR_26->tcp_ts;
  }
 }

 VAR_17->dport = VAR_19->sin_port;
 VAR_17->daddr = VAR_21;

 FUNC_3(VAR_14)->icsk_ext_hdr_len = 0;
 if (VAR_25)
  FUNC_3(VAR_14)->icsk_ext_hdr_len = VAR_25->optlen;

 VAR_18->rx_opt.mss_clamp = 536;






 FUNC_15(VAR_14, VAR_11);
 VAR_24 = FUNC_4(&VAR_13, VAR_14);
 if (VAR_24)
  goto failure;

 VAR_24 = FUNC_7(&VAR_20, VAR_4,
    VAR_17->sport, VAR_17->dport, VAR_14);
 if (VAR_24)
  goto failure;


 VAR_14->sk_gso_type = VAR_8;
 FUNC_12(VAR_14, &VAR_20->u.dst);

 if (!VAR_18->write_seq)
  VAR_18->write_seq = FUNC_11(VAR_17->saddr,
          VAR_17->daddr,
          VAR_17->sport,
          VAR_19->sin_port);

 VAR_17->id = VAR_18->write_seq ^ VAR_12;

 VAR_24 = FUNC_14(VAR_14);
 VAR_20 = ((void*)0);
 if (VAR_24)
  goto failure;

 return 0;

failure:




 FUNC_15(VAR_14, VAR_9);
 FUNC_8(VAR_20);
 VAR_14->sk_route_caps = 0;
 VAR_17->dport = 0;
 return VAR_24;
}
