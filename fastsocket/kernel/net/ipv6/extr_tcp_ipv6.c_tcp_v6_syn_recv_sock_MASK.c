
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tcp_sock {int total_retrans; int advmss; int * af_specific; } ;
struct tcp_md5sig_key {int keylen; int key; } ;
struct tcp6_sock {int inet6; } ;
struct sock {int sk_bound_dev_if; int sk_gso_type; int sk_backlog_rcv; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct request_sock {int retrans; } ;
struct ipv6_txoptions {int tot_len; scalar_t__ opt_flen; scalar_t__ opt_nflen; scalar_t__ srcrt; } ;
struct in6_addr {int dummy; } ;
struct TYPE_8__ {int all; } ;
struct ipv6_pinfo {struct ipv6_txoptions* opt; struct in6_addr daddr; int mcast_hops; void* mcast_oif; int * pktoptions; TYPE_1__ rxopt; int * ipv6_fl_list; struct in6_addr rcv_saddr; struct in6_addr saddr; } ;
struct inet_sock {int rcv_saddr; int saddr; int daddr; int * opt; int * pinet6; } ;
struct inet6_request_sock {int * pktopts; int iif; struct in6_addr loc_addr; struct in6_addr rmt_addr; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int oif; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_13__ {scalar_t__ icsk_ext_hdr_len; int icsk_pmtu_cookie; int * icsk_af_ops; } ;
struct TYPE_12__ {int loc_port; int rmt_port; } ;
struct TYPE_11__ {int hop_limit; } ;
struct TYPE_10__ {void* rcv_tos; } ;
struct TYPE_9__ {scalar_t__ snt_synack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sock*) ;
 int FUNC_3 (struct sock*,struct dst_entry*,int *,int *) ;
 int FUNC_4 (struct dst_entry*,int ) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct dst_entry*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 void* FUNC_9 (struct sk_buff*) ;
 struct inet6_request_sock* FUNC_10 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_11 (struct sock*) ;
 TYPE_7__* FUNC_12 (struct sock*) ;
 TYPE_6__* FUNC_13 (struct request_sock*) ;
 struct inet_sock* FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_16 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_17 (struct in6_addr*,int ,int ,int ,int ) ;
 struct ipv6_txoptions* FUNC_18 (struct sock*,struct ipv6_txoptions*) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 int VAR_8 ;
 void* FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int *) ;
 char* FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (struct ipv6_pinfo*,struct ipv6_pinfo*,int) ;
 int FUNC_24 (struct flowi*,int ,int) ;
 int FUNC_25 (struct request_sock*,struct flowi*) ;
 scalar_t__ FUNC_26 (struct sock*) ;
 TYPE_3__* FUNC_27 (struct sock*) ;
 int * FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,struct sock*) ;
 int FUNC_30 (struct sock*,struct ipv6_txoptions*,int ) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*) ;
 struct sock* FUNC_33 (struct sock*,struct request_sock*,struct sk_buff*) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (struct sock*) ;
 TYPE_2__* FUNC_36 (struct request_sock*) ;
 struct tcp_sock* FUNC_37 (struct sock*) ;
 int VAR_9 ;
 int FUNC_38 (struct sock*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct sock* FUNC_39 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*) ;
 int FUNC_40 (struct sock*,struct in6_addr*,char*,int ) ;
 struct tcp_md5sig_key* FUNC_41 (struct sock*,struct in6_addr*) ;
 int FUNC_42 (struct sock*,scalar_t__) ;
 scalar_t__ FUNC_43 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static struct sock * FUNC_44(struct sock *VAR_12, struct sk_buff *VAR_13,
       struct request_sock *VAR_14,
       struct dst_entry *VAR_15)
{
 struct inet6_request_sock *VAR_16;
 struct ipv6_pinfo *VAR_17, *VAR_18 = FUNC_11(VAR_12);
 struct tcp6_sock *VAR_19;
 struct inet_sock *VAR_20;
 struct tcp_sock *VAR_21;
 struct sock *VAR_22;
 struct ipv6_txoptions *VAR_23;




 if (VAR_13->protocol == FUNC_8(VAR_0)) {




  VAR_22 = FUNC_39(VAR_12, VAR_13, VAR_14, VAR_15);

  if (VAR_22 == ((void*)0))
   return ((void*)0);

  VAR_19 = (struct tcp6_sock *)VAR_22;
  FUNC_14(VAR_22)->pinet6 = &VAR_19->inet6;

  VAR_20 = FUNC_14(VAR_22);
  VAR_17 = FUNC_11(VAR_22);
  VAR_21 = FUNC_37(VAR_22);

  FUNC_23(VAR_17, VAR_18, sizeof(struct ipv6_pinfo));

  FUNC_17(&VAR_17->daddr, 0, 0, FUNC_7(0x0000FFFF),
         VAR_20->daddr);

  FUNC_17(&VAR_17->saddr, 0, 0, FUNC_7(0x0000FFFF),
         VAR_20->saddr);

  FUNC_16(&VAR_17->rcv_saddr, &VAR_17->saddr);

  FUNC_12(VAR_22)->icsk_af_ops = &VAR_8;
  VAR_22->sk_backlog_rcv = VAR_11;




  VAR_17->pktoptions = ((void*)0);
  VAR_17->opt = ((void*)0);
  VAR_17->mcast_oif = FUNC_9(VAR_13);
  VAR_17->mcast_hops = FUNC_19(VAR_13)->hop_limit;
  FUNC_27(VAR_22)->rcv_tos = FUNC_20(FUNC_19(VAR_13));
  FUNC_38(VAR_22, FUNC_12(VAR_22)->icsk_pmtu_cookie);

  return VAR_22;
 }

 VAR_16 = FUNC_10(VAR_14);
 VAR_23 = VAR_18->opt;

 if (FUNC_26(VAR_12))
  goto out_overflow;

 if (VAR_15 == ((void*)0)) {
  struct in6_addr *VAR_24 = ((void*)0), VAR_25;
  struct flowi VAR_26;

  FUNC_24(&VAR_26, 0, sizeof(VAR_26));
  VAR_26.proto = VAR_2;
  FUNC_16(&VAR_26.fl6_dst, &VAR_16->rmt_addr);
  if (VAR_23 && VAR_23->srcrt) {
   struct rt0_hdr *VAR_27 = (struct rt0_hdr *) VAR_23->srcrt;
   FUNC_16(&VAR_25, &VAR_26.fl6_dst);
   FUNC_16(&VAR_26.fl6_dst, VAR_27->addr);
   VAR_24 = &VAR_25;
  }
  FUNC_16(&VAR_26.fl6_src, &VAR_16->loc_addr);
  VAR_26.oif = VAR_12->sk_bound_dev_if;
  VAR_26.fl_ip_dport = FUNC_13(VAR_14)->rmt_port;
  VAR_26.fl_ip_sport = FUNC_13(VAR_14)->loc_port;
  FUNC_25(VAR_14, &VAR_26);

  if (FUNC_15(VAR_12, &VAR_15, &VAR_26))
   goto out;

  if (VAR_24)
   FUNC_16(&VAR_26.fl6_dst, VAR_24);

  if ((FUNC_43(FUNC_31(VAR_12), &VAR_15, &VAR_26, VAR_12, 0)) < 0)
   goto out;
 }

 VAR_22 = FUNC_33(VAR_12, VAR_14, VAR_13);
 if (VAR_22 == ((void*)0))
  goto out_nonewsk;







 VAR_22->sk_gso_type = VAR_7;
 FUNC_3(VAR_22, VAR_15, ((void*)0), ((void*)0));

 VAR_19 = (struct tcp6_sock *)VAR_22;
 FUNC_14(VAR_22)->pinet6 = &VAR_19->inet6;

 VAR_21 = FUNC_37(VAR_22);
 VAR_20 = FUNC_14(VAR_22);
 VAR_17 = FUNC_11(VAR_22);

 FUNC_23(VAR_17, VAR_18, sizeof(struct ipv6_pinfo));

 FUNC_16(&VAR_17->daddr, &VAR_16->rmt_addr);
 FUNC_16(&VAR_17->saddr, &VAR_16->loc_addr);
 FUNC_16(&VAR_17->rcv_saddr, &VAR_16->loc_addr);
 VAR_22->sk_bound_dev_if = VAR_16->iif;





 VAR_20->opt = ((void*)0);
 VAR_17->ipv6_fl_list = ((void*)0);


 VAR_17->rxopt.all = VAR_18->rxopt.all;


 VAR_17->pktoptions = ((void*)0);
 if (VAR_16->pktopts != ((void*)0)) {
  VAR_17->pktoptions = FUNC_28(VAR_16->pktopts, VAR_1);
  FUNC_21(VAR_16->pktopts);
  VAR_16->pktopts = ((void*)0);
  if (VAR_17->pktoptions)
   FUNC_29(VAR_17->pktoptions, VAR_22);
 }
 VAR_17->opt = ((void*)0);
 VAR_17->mcast_oif = FUNC_9(VAR_13);
 VAR_17->mcast_hops = FUNC_19(VAR_13)->hop_limit;
 FUNC_27(VAR_22)->rcv_tos = FUNC_20(FUNC_19(VAR_13));







 if (VAR_23) {
  VAR_17->opt = FUNC_18(VAR_22, VAR_23);
  if (VAR_23 != VAR_18->opt)
   FUNC_30(VAR_12, VAR_23, VAR_23->tot_len);
 }

 FUNC_12(VAR_22)->icsk_ext_hdr_len = 0;
 if (VAR_17->opt)
  FUNC_12(VAR_22)->icsk_ext_hdr_len = (VAR_17->opt->opt_nflen +
           VAR_17->opt->opt_flen);

 FUNC_35(VAR_22);
 FUNC_38(VAR_22, FUNC_5(VAR_15));
 VAR_21->advmss = FUNC_4(VAR_15, VAR_6);
 FUNC_34(VAR_22);
 if (FUNC_36(VAR_14)->snt_synack)
  FUNC_42(VAR_22,
      VAR_10 - FUNC_36(VAR_14)->snt_synack);
 VAR_21->total_retrans = VAR_14->retrans;

 VAR_20->daddr = VAR_20->saddr = VAR_20->rcv_saddr = VAR_5;
 if (FUNC_2(VAR_12, VAR_22) < 0) {
  FUNC_32(VAR_22);
  goto out;
 }
 FUNC_1(VAR_22);

 return VAR_22;

out_overflow:
 FUNC_0(FUNC_31(VAR_12), VAR_4);
out_nonewsk:
 if (VAR_23 && VAR_23 != VAR_18->opt)
  FUNC_30(VAR_12, VAR_23, VAR_23->tot_len);
 FUNC_6(VAR_15);
out:
 FUNC_0(FUNC_31(VAR_12), VAR_3);
 return ((void*)0);
}
