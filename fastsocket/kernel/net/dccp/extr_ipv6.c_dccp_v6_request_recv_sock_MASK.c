
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_route_caps; int sk_bound_dev_if; int sk_backlog_rcv; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {int tot_len; scalar_t__ opt_flen; scalar_t__ opt_nflen; int * srcrt; } ;
struct TYPE_6__ {int all; } ;
struct in6_addr {int dummy; } ;
struct ipv6_pinfo {struct ipv6_txoptions* opt; int mcast_hops; void* mcast_oif; int * pktoptions; TYPE_1__ rxopt; struct in6_addr rcv_saddr; struct in6_addr saddr; struct in6_addr daddr; } ;
struct inet_sock {int rcv_saddr; int saddr; int daddr; int * opt; int * pinet6; } ;
struct inet6_request_sock {int * pktopts; int iif; struct in6_addr loc_addr; struct in6_addr rmt_addr; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int oif; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {TYPE_2__* dev; } ;
struct dccp_sock {int dummy; } ;
struct dccp6_sock {int inet6; } ;
typedef int fl ;
struct TYPE_10__ {scalar_t__ icsk_ext_hdr_len; int icsk_pmtu_cookie; int * icsk_af_ops; } ;
struct TYPE_9__ {int loc_port; int rmt_port; } ;
struct TYPE_8__ {int hop_limit; } ;
struct TYPE_7__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sock*) ;
 int FUNC_3 (struct sock*,struct dst_entry*,int *,int *) ;
 struct sock* FUNC_4 (struct sock*,struct request_sock*,struct sk_buff*) ;
 int VAR_8 ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_9 ;
 struct sock* FUNC_7 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*) ;
 int FUNC_8 (struct dst_entry*) ;
 int FUNC_9 (struct dst_entry*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 void* FUNC_12 (struct sk_buff*) ;
 struct inet6_request_sock* FUNC_13 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_14 (struct sock*) ;
 TYPE_5__* FUNC_15 (struct sock*) ;
 TYPE_4__* FUNC_16 (struct request_sock*) ;
 struct inet_sock* FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_19 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_20 (struct in6_addr*,int ,int ,int ,int ) ;
 struct ipv6_txoptions* FUNC_21 (struct sock*,struct ipv6_txoptions*) ;
 TYPE_3__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct ipv6_pinfo*,struct ipv6_pinfo*,int) ;
 int FUNC_25 (struct flowi*,int ,int) ;
 int FUNC_26 (struct sock*,struct flowi*) ;
 scalar_t__ FUNC_27 (struct sock*) ;
 int * FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,struct sock*) ;
 int FUNC_30 (struct sock*,struct ipv6_txoptions*,int ) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*) ;
 scalar_t__ FUNC_33 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static struct sock *FUNC_34(struct sock *VAR_10,
           struct sk_buff *VAR_11,
           struct request_sock *VAR_12,
           struct dst_entry *VAR_13)
{
 struct inet6_request_sock *VAR_14 = FUNC_13(VAR_12);
 struct ipv6_pinfo *VAR_15, *VAR_16 = FUNC_14(VAR_10);
 struct inet_sock *VAR_17;
 struct dccp_sock *VAR_18;
 struct dccp6_sock *VAR_19;
 struct sock *VAR_20;
 struct ipv6_txoptions *VAR_21;

 if (VAR_11->protocol == FUNC_11(VAR_0)) {



  VAR_20 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13);
  if (VAR_20 == ((void*)0))
   return ((void*)0);

  VAR_19 = (struct dccp6_sock *)VAR_20;
  VAR_18 = FUNC_5(VAR_20);
  VAR_17 = FUNC_17(VAR_20);
  VAR_17->pinet6 = &VAR_19->inet6;
  VAR_15 = FUNC_14(VAR_20);

  FUNC_24(VAR_15, VAR_16, sizeof(struct ipv6_pinfo));

  FUNC_20(&VAR_15->daddr, 0, 0, FUNC_10(0x0000FFFF),
         VAR_17->daddr);

  FUNC_20(&VAR_15->saddr, 0, 0, FUNC_10(0x0000FFFF),
         VAR_17->saddr);

  FUNC_19(&VAR_15->rcv_saddr, &VAR_15->saddr);

  FUNC_15(VAR_20)->icsk_af_ops = &VAR_8;
  VAR_20->sk_backlog_rcv = VAR_9;
  VAR_15->pktoptions = ((void*)0);
  VAR_15->opt = ((void*)0);
  VAR_15->mcast_oif = FUNC_12(VAR_11);
  VAR_15->mcast_hops = FUNC_22(VAR_11)->hop_limit;
  FUNC_6(VAR_20, FUNC_15(VAR_20)->icsk_pmtu_cookie);

  return VAR_20;
 }

 VAR_21 = VAR_16->opt;

 if (FUNC_27(VAR_10))
  goto out_overflow;

 if (VAR_13 == ((void*)0)) {
  struct in6_addr *VAR_22 = ((void*)0), VAR_23;
  struct flowi VAR_24;

  FUNC_25(&VAR_24, 0, sizeof(VAR_24));
  VAR_24.proto = VAR_2;
  FUNC_19(&VAR_24.fl6_dst, &VAR_14->rmt_addr);
  if (VAR_21 != ((void*)0) && VAR_21->srcrt != ((void*)0)) {
   const struct rt0_hdr *VAR_25 = (struct rt0_hdr *)VAR_21->srcrt;

   FUNC_19(&VAR_23, &VAR_24.fl6_dst);
   FUNC_19(&VAR_24.fl6_dst, VAR_25->addr);
   VAR_22 = &VAR_23;
  }
  FUNC_19(&VAR_24.fl6_src, &VAR_14->loc_addr);
  VAR_24.oif = VAR_10->sk_bound_dev_if;
  VAR_24.fl_ip_dport = FUNC_16(VAR_12)->rmt_port;
  VAR_24.fl_ip_sport = FUNC_16(VAR_12)->loc_port;
  FUNC_26(VAR_10, &VAR_24);

  if (FUNC_18(VAR_10, &VAR_13, &VAR_24))
   goto out;

  if (VAR_22)
   FUNC_19(&VAR_24.fl6_dst, VAR_22);

  if ((FUNC_33(FUNC_31(VAR_10), &VAR_13, &VAR_24, VAR_10, 0)) < 0)
   goto out;
 }

 VAR_20 = FUNC_4(VAR_10, VAR_12, VAR_11);
 if (VAR_20 == ((void*)0))
  goto out_nonewsk;







 FUNC_3(VAR_20, VAR_13, ((void*)0), ((void*)0));
 VAR_20->sk_route_caps = VAR_13->dev->features & ~(VAR_6 |
            VAR_7);
 VAR_19 = (struct dccp6_sock *)VAR_20;
 VAR_17 = FUNC_17(VAR_20);
 VAR_17->pinet6 = &VAR_19->inet6;
 VAR_18 = FUNC_5(VAR_20);
 VAR_15 = FUNC_14(VAR_20);

 FUNC_24(VAR_15, VAR_16, sizeof(struct ipv6_pinfo));

 FUNC_19(&VAR_15->daddr, &VAR_14->rmt_addr);
 FUNC_19(&VAR_15->saddr, &VAR_14->loc_addr);
 FUNC_19(&VAR_15->rcv_saddr, &VAR_14->loc_addr);
 VAR_20->sk_bound_dev_if = VAR_14->iif;





 VAR_17->opt = ((void*)0);


 VAR_15->rxopt.all = VAR_16->rxopt.all;


 VAR_15->pktoptions = ((void*)0);
 if (VAR_14->pktopts != ((void*)0)) {
  VAR_15->pktoptions = FUNC_28(VAR_14->pktopts, VAR_1);
  FUNC_23(VAR_14->pktopts);
  VAR_14->pktopts = ((void*)0);
  if (VAR_15->pktoptions)
   FUNC_29(VAR_15->pktoptions, VAR_20);
 }
 VAR_15->opt = ((void*)0);
 VAR_15->mcast_oif = FUNC_12(VAR_11);
 VAR_15->mcast_hops = FUNC_22(VAR_11)->hop_limit;







 if (VAR_21 != ((void*)0)) {
  VAR_15->opt = FUNC_21(VAR_20, VAR_21);
  if (VAR_21 != VAR_16->opt)
   FUNC_30(VAR_10, VAR_21, VAR_21->tot_len);
 }

 FUNC_15(VAR_20)->icsk_ext_hdr_len = 0;
 if (VAR_15->opt != ((void*)0))
  FUNC_15(VAR_20)->icsk_ext_hdr_len = (VAR_15->opt->opt_nflen +
           VAR_15->opt->opt_flen);

 FUNC_6(VAR_20, FUNC_8(VAR_13));

 VAR_17->daddr = VAR_17->saddr = VAR_17->rcv_saddr = VAR_5;

 if (FUNC_2(VAR_10, VAR_20) < 0) {
  FUNC_32(VAR_20);
  goto out;
 }
 FUNC_1(VAR_20);

 return VAR_20;

out_overflow:
 FUNC_0(FUNC_31(VAR_10), VAR_4);
out_nonewsk:
 FUNC_9(VAR_13);
out:
 FUNC_0(FUNC_31(VAR_10), VAR_3);
 if (VAR_21 != ((void*)0) && VAR_21 != VAR_16->opt)
  FUNC_30(VAR_10, VAR_21, VAR_21->tot_len);
 return ((void*)0);
}
