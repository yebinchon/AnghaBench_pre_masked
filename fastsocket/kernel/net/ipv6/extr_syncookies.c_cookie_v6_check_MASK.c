
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tcp_opt ;
struct tcphdr {int seq; int dest; int source; int ack; int ack_seq; } ;
struct tcp_sock {scalar_t__ window_clamp; } ;
struct tcp_request_sock {void* snt_isn; void* rcv_isn; int snt_synack; } ;
struct in6_addr {int dummy; } ;
struct tcp_options_received {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; scalar_t__ oif; struct in6_addr fl6_src; int proto; int rcv_tsecr; scalar_t__ saw_tstamp; int rcv_tsval; int wscale_ok; int sack_ok; int rcv_wscale; int snd_wscale; } ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {int users; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct request_sock {int mss; unsigned long expires; int window_clamp; int rcv_wnd; int ts_recent; scalar_t__ retrans; } ;
struct TYPE_6__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct ipv6_pinfo {TYPE_3__* opt; TYPE_2__ rxopt; } ;
struct inet_request_sock {int rcv_wscale; int wscale_ok; int rmt_port; scalar_t__ tstamp_ok; int sack_ok; int snd_wscale; scalar_t__ ecn_ok; int loc_port; } ;
struct inet6_request_sock {struct in6_addr loc_addr; struct in6_addr rmt_addr; scalar_t__ iif; struct sk_buff* pktopts; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; scalar_t__ oif; struct in6_addr fl6_src; int proto; int rcv_tsecr; scalar_t__ saw_tstamp; int rcv_tsval; int wscale_ok; int sack_ok; int rcv_wscale; int snd_wscale; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
typedef int __u8 ;
typedef void* __u32 ;
struct TYPE_10__ {int sport; } ;
struct TYPE_9__ {struct in6_addr daddr; struct in6_addr saddr; } ;
struct TYPE_8__ {scalar_t__ srcrt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct tcp_options_received*) ;
 int FUNC_4 (struct dst_entry*,int ) ;
 struct sock* FUNC_5 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct request_sock* FUNC_7 (int *) ;
 struct inet6_request_sock* FUNC_8 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_9 (struct sock*) ;
 struct inet_request_sock* FUNC_10 (struct request_sock*) ;
 TYPE_5__* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*,struct dst_entry**,struct tcp_options_received*) ;
 int FUNC_13 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_14 (struct in6_addr*) ;
 TYPE_4__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sock*,struct sk_buff*) ;
 int FUNC_17 (struct tcp_options_received*,int ,int) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (struct request_sock*) ;
 scalar_t__ FUNC_20 (struct sock*,struct sk_buff*,struct request_sock*) ;
 int FUNC_21 (struct request_sock*,struct tcp_options_received*) ;
 int FUNC_22 (struct sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_23 (struct sock*) ;
 struct tcphdr* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,struct tcp_options_received*,int ) ;
 struct tcp_request_sock* FUNC_26 (struct request_sock*) ;
 int FUNC_27 (int ,int,int *,int *,int ,int *,int ) ;
 struct tcp_sock* FUNC_28 (struct sock*) ;
 scalar_t__ FUNC_29 (struct sock*) ;
 scalar_t__ FUNC_30 (int ,struct dst_entry**,struct tcp_options_received*,struct sock*,int ) ;

struct sock *FUNC_31(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct inet_request_sock *VAR_10;
 struct inet6_request_sock *VAR_11;
 struct tcp_request_sock *VAR_12;
 struct ipv6_pinfo *VAR_13 = FUNC_9(VAR_8);
 struct tcp_sock *VAR_14 = FUNC_28(VAR_8);
 const struct tcphdr *VAR_15 = FUNC_24(VAR_9);
 __u32 VAR_16 = FUNC_18(VAR_15->ack_seq) - 1;
 struct sock *VAR_17 = VAR_8;
 struct request_sock *VAR_18;
 int VAR_19;
 struct dst_entry *VAR_20;
 __u8 VAR_21;
 struct tcp_options_received VAR_22;

 if (!VAR_6 || !VAR_15->ack)
  goto out;

 if (FUNC_29(VAR_8) ||
  (VAR_19 = FUNC_2(VAR_9, VAR_16)) == 0) {
  FUNC_0(FUNC_22(VAR_8), VAR_2);
  goto out;
 }

 FUNC_0(FUNC_22(VAR_8), VAR_3);


 FUNC_17(&VAR_22, 0, sizeof(VAR_22));
 FUNC_25(VAR_9, &VAR_22, 0);

 if (VAR_22.saw_tstamp)
  FUNC_3(&VAR_22);

 VAR_17 = ((void*)0);
 VAR_18 = FUNC_7(&VAR_7);
 if (!VAR_18)
  goto out;

 VAR_10 = FUNC_10(VAR_18);
 VAR_11 = FUNC_8(VAR_18);
 VAR_12 = FUNC_26(VAR_18);

 if (FUNC_20(VAR_8, VAR_9, VAR_18))
  goto out_free;

 VAR_18->mss = VAR_19;
 VAR_10->rmt_port = VAR_15->source;
 VAR_10->loc_port = VAR_15->dest;
 FUNC_13(&VAR_11->rmt_addr, &FUNC_15(VAR_9)->saddr);
 FUNC_13(&VAR_11->loc_addr, &FUNC_15(VAR_9)->daddr);
 if (FUNC_16(VAR_8, VAR_9) ||
     VAR_13->rxopt.bits.rxinfo || VAR_13->rxopt.bits.rxoinfo ||
     VAR_13->rxopt.bits.rxhlim || VAR_13->rxopt.bits.rxohlim) {
  FUNC_1(&VAR_9->users);
  VAR_11->pktopts = VAR_9;
 }

 VAR_11->iif = VAR_8->sk_bound_dev_if;

 if (!VAR_8->sk_bound_dev_if &&
     FUNC_14(&VAR_11->rmt_addr) & VAR_1)
  VAR_11->iif = FUNC_6(VAR_9);

 VAR_18->expires = 0UL;
 VAR_18->retrans = 0;
 VAR_10->ecn_ok = 0;
 VAR_10->snd_wscale = VAR_22.snd_wscale;
 VAR_10->rcv_wscale = VAR_22.rcv_wscale;
 VAR_10->sack_ok = VAR_22.sack_ok;
 VAR_10->wscale_ok = VAR_22.wscale_ok;
 VAR_10->tstamp_ok = VAR_22.saw_tstamp;
 VAR_18->ts_recent = VAR_22.saw_tstamp ? VAR_22.rcv_tsval : 0;
 VAR_12->snt_synack = VAR_22.saw_tstamp ? VAR_22.rcv_tsecr : 0;
 VAR_12->rcv_isn = FUNC_18(VAR_15->seq) - 1;
 VAR_12->snt_isn = VAR_16;






 {
  struct in6_addr *VAR_23 = ((void*)0), VAR_24;
  struct flowi VAR_25;
  FUNC_17(&VAR_25, 0, sizeof(VAR_25));
  VAR_25.proto = VAR_0;
  FUNC_13(&VAR_25.fl6_dst, &VAR_11->rmt_addr);
  if (VAR_13->opt && VAR_13->opt->srcrt) {
   struct rt0_hdr *VAR_26 = (struct rt0_hdr *) VAR_13->opt->srcrt;
   FUNC_13(&VAR_24, &VAR_25.fl6_dst);
   FUNC_13(&VAR_25.fl6_dst, VAR_26->addr);
   VAR_23 = &VAR_24;
  }
  FUNC_13(&VAR_25.fl6_src, &VAR_11->loc_addr);
  VAR_25.oif = VAR_8->sk_bound_dev_if;
  VAR_25.fl_ip_dport = FUNC_10(VAR_18)->rmt_port;
  VAR_25.fl_ip_sport = FUNC_11(VAR_8)->sport;
  FUNC_21(VAR_18, &VAR_25);
  if (FUNC_12(VAR_8, &VAR_20, &VAR_25))
   goto out_free;

  if (VAR_23)
   FUNC_13(&VAR_25.fl6_dst, VAR_23);
  if ((FUNC_30(FUNC_22(VAR_8), &VAR_20, &VAR_25, VAR_8, 0)) < 0)
   goto out_free;
 }

 VAR_18->window_clamp = VAR_14->window_clamp ? :FUNC_4(VAR_20, VAR_5);
 FUNC_27(FUNC_23(VAR_8), VAR_18->mss,
      &VAR_18->rcv_wnd, &VAR_18->window_clamp,
      VAR_10->wscale_ok, &VAR_21,
      FUNC_4(VAR_20, VAR_4));

 VAR_10->rcv_wscale = VAR_21;

 VAR_17 = FUNC_5(VAR_8, VAR_9, VAR_18, VAR_20);
out:
 return VAR_17;
out_free:
 FUNC_19(VAR_18);
 return ((void*)0);
}
