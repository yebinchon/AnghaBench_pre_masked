
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_7__ {int user_mss; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct tcp_options_received {int mss_clamp; scalar_t__ tstamp_ok; scalar_t__ saw_tstamp; int user_mss; } ;
struct sock {int sk_bound_dev_if; } ;
struct sk_buff {scalar_t__ protocol; int users; } ;
struct request_sock {scalar_t__ cookie_ts; int mss; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_9__ {TYPE_2__ bits; } ;
struct ipv6_pinfo {TYPE_3__ rxopt; } ;
struct inet6_request_sock {struct sk_buff* pktopts; int iif; int rmt_addr; int loc_addr; } ;
typedef scalar_t__ __u32 ;
struct TYPE_12__ {scalar_t__ when; } ;
struct TYPE_11__ {int daddr; int saddr; } ;
struct TYPE_10__ {int snt_synack; scalar_t__ snt_isn; int * af_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_sock*,int ) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*,struct request_sock*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct request_sock* FUNC_7 (int *) ;
 struct inet6_request_sock* FUNC_8 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 TYPE_5__* FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sock*,struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (struct request_sock*) ;
 int FUNC_19 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_22 (struct tcp_options_received*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct request_sock*,struct tcp_options_received*,struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,struct tcp_options_received*,int ) ;
 int VAR_6 ;
 TYPE_4__* FUNC_26 (struct request_sock*) ;
 struct tcp_sock* FUNC_27 (struct sock*) ;
 int VAR_7 ;
 int FUNC_28 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (struct sock*,struct request_sock*) ;

__attribute__((used)) static int FUNC_31(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct inet6_request_sock *VAR_10;
 struct ipv6_pinfo *VAR_11 = FUNC_9(VAR_8);
 struct tcp_options_received VAR_12;
 struct tcp_sock *VAR_13 = FUNC_27(VAR_8);
 struct request_sock *VAR_14 = ((void*)0);
 __u32 VAR_15 = FUNC_1(VAR_9)->when;






 if (VAR_9->protocol == FUNC_4(VAR_0))
  return FUNC_28(VAR_8, VAR_9);

 if (!FUNC_16(VAR_9))
  goto drop;

 if (FUNC_10(VAR_8) && !VAR_15) {
  if (FUNC_17())
   FUNC_21(VAR_9);





  goto drop;
 }

 if (FUNC_20(VAR_8) && FUNC_11(VAR_8) > 1)
  goto drop;

 VAR_14 = FUNC_7(&VAR_5);
 if (VAR_14 == ((void*)0))
  goto drop;





 FUNC_22(&VAR_12);
 VAR_12.mss_clamp = VAR_2 - sizeof(struct tcphdr) - sizeof(struct ipv6hdr);
 VAR_12.user_mss = VAR_13->rx_opt.user_mss;

 FUNC_25(VAR_9, &VAR_12, 0);

 if (0 && !VAR_12.saw_tstamp)
  FUNC_22(&VAR_12);

 VAR_12.tstamp_ok = VAR_12.saw_tstamp;
 FUNC_24(VAR_14, &VAR_12, VAR_9);

 VAR_10 = FUNC_8(VAR_14);
 FUNC_12(&VAR_10->rmt_addr, &FUNC_14(VAR_9)->saddr);
 FUNC_12(&VAR_10->loc_addr, &FUNC_14(VAR_9)->daddr);
 if (!0)
  FUNC_0(VAR_14, FUNC_23(VAR_9));

 VAR_10->iif = VAR_8->sk_bound_dev_if;


 if (!VAR_8->sk_bound_dev_if &&
     FUNC_13(&VAR_10->rmt_addr) & VAR_1)
  VAR_10->iif = FUNC_6(VAR_9);

 if (0) {
  VAR_15 = FUNC_3(VAR_8, VAR_9, &VAR_14->mss);
  VAR_14->cookie_ts = VAR_12.tstamp_ok;
 } else if (!VAR_15) {
  if (FUNC_15(VAR_8, VAR_9) ||
      VAR_11->rxopt.bits.rxinfo || VAR_11->rxopt.bits.rxoinfo ||
      VAR_11->rxopt.bits.rxhlim || VAR_11->rxopt.bits.rxohlim) {
   FUNC_2(&VAR_9->users);
   VAR_10->pktopts = VAR_9;
  }

  VAR_15 = FUNC_29(VAR_9);
 }

 FUNC_26(VAR_14)->snt_isn = VAR_15;
 FUNC_26(VAR_14)->snt_synack = VAR_7;

 FUNC_19(VAR_8, VAR_9, VAR_14);

 if (FUNC_30(VAR_8, VAR_14))
  goto drop;

 if (!0) {
  FUNC_5(VAR_8, VAR_14, VAR_3);
  return 0;
 }

drop:
 if (VAR_14)
  FUNC_18(VAR_14);

 return 0;
}
