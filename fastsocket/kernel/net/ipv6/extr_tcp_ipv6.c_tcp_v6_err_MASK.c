
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tcphdr {int dest; int seq; int source; } ;
struct tcp_sock {int snd_nxt; int snd_una; } ;
struct sock {int sk_state; int sk_err_soft; int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_bound_dev_if; } ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct request_sock {int * sk; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ipv6_pinfo {scalar_t__ recverr; int saddr; int daddr; int dst_cookie; } ;
struct inet_sock {int sport; int dport; } ;
struct inet6_skb_parm {int dummy; } ;
struct flowi {int fl_ip_sport; int fl_ip_dport; int oif; int fl6_src; int fl6_dst; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_9__ {int ifindex; } ;
struct TYPE_8__ {scalar_t__ icsk_pmtu_cookie; } ;
struct TYPE_7__ {scalar_t__ hop_limit; } ;
struct TYPE_6__ {int snt_isn; } ;


 int FUNC_0 (struct net*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 struct dst_entry* FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct net* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct dst_entry*) ;
 scalar_t__ FUNC_10 (struct dst_entry*) ;
 int FUNC_11 (struct dst_entry*) ;
 int FUNC_12 (scalar_t__,scalar_t__,int*) ;
 struct request_sock* FUNC_13 (struct sock*,struct request_sock***,int ,int *,int *,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 struct sock* FUNC_15 (struct net*,int *,int *,int ,int *,int ,int ) ;
 struct ipv6_pinfo* FUNC_16 (struct sock*) ;
 TYPE_3__* FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,struct request_sock*,struct request_sock**) ;
 struct inet_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_23 (int *,int *) ;
 TYPE_2__* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct flowi*,int ,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct sk_buff*,struct flowi*) ;
 scalar_t__ FUNC_28 (struct sock*) ;
 scalar_t__ FUNC_29 (struct sock*) ;
 int FUNC_30 (struct sock*) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*) ;
 int FUNC_33 (struct sock*) ;
 int VAR_10 ;
 TYPE_1__* FUNC_34 (struct request_sock*) ;
 int FUNC_35 (struct sock*) ;
 struct tcp_sock* FUNC_36 (struct sock*) ;
 int FUNC_37 (struct sock*,scalar_t__) ;
 int FUNC_38 (struct net*,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static void FUNC_39(struct sk_buff *VAR_11, struct inet6_skb_parm *VAR_12,
  u8 VAR_13, u8 VAR_14, int VAR_15, __be32 VAR_16)
{
 struct ipv6hdr *VAR_17 = (struct ipv6hdr*)VAR_11->data;
 const struct tcphdr *VAR_18 = (struct tcphdr *)(VAR_11->data+VAR_15);
 struct ipv6_pinfo *VAR_19;
 struct sock *VAR_20;
 int VAR_21;
 struct tcp_sock *VAR_22;
 __u32 VAR_23;
 struct net *VAR_24 = FUNC_8(VAR_11->dev);

 VAR_20 = FUNC_15(VAR_24, &VAR_10, &VAR_17->daddr,
   VAR_18->dest, &VAR_17->saddr, VAR_18->source, VAR_11->dev->ifindex);

 if (VAR_20 == ((void*)0)) {
  FUNC_0(VAR_24, FUNC_3(VAR_11->dev),
       VAR_0);
  return;
 }

 if (VAR_20->sk_state == VAR_9) {
  FUNC_21(FUNC_20(VAR_20));
  return;
 }

 FUNC_6(VAR_20);
 if (FUNC_29(VAR_20))
  FUNC_1(VAR_24, VAR_3);

 if (VAR_20->sk_state == VAR_8)
  goto out;

 if (FUNC_24(VAR_11)->hop_limit < FUNC_28(VAR_20)) {
  FUNC_1(VAR_24, VAR_5);
  goto out;
 }

 VAR_22 = FUNC_36(VAR_20);
 VAR_23 = FUNC_26(VAR_18->seq);
 if (VAR_20->sk_state != 130 &&
     !FUNC_5(VAR_23, VAR_22->snd_una, VAR_22->snd_nxt)) {
  FUNC_1(VAR_24, VAR_4);
  goto out;
 }

 VAR_19 = FUNC_16(VAR_20);

 if (VAR_13 == VAR_1) {
  struct dst_entry *VAR_25 = ((void*)0);

  if (FUNC_29(VAR_20))
   goto out;
  if ((1 << VAR_20->sk_state) & (VAR_7 | VAR_6))
   goto out;


  VAR_25 = FUNC_4(VAR_20, VAR_19->dst_cookie);

  if (VAR_25 == ((void*)0)) {
   struct inet_sock *VAR_26 = FUNC_19(VAR_20);
   struct flowi VAR_27;





   FUNC_25(&VAR_27, 0, sizeof(VAR_27));
   VAR_27.proto = VAR_2;
   FUNC_23(&VAR_27.fl6_dst, &VAR_19->daddr);
   FUNC_23(&VAR_27.fl6_src, &VAR_19->saddr);
   VAR_27.oif = VAR_20->sk_bound_dev_if;
   VAR_27.fl_ip_dport = VAR_26->dport;
   VAR_27.fl_ip_sport = VAR_26->sport;
   FUNC_27(VAR_11, &VAR_27);

   if ((VAR_21 = FUNC_22(VAR_20, &VAR_25, &VAR_27))) {
    VAR_20->sk_err_soft = -VAR_21;
    goto out;
   }

   if ((VAR_21 = FUNC_38(VAR_24, &VAR_25, &VAR_27, VAR_20, 0)) < 0) {
    VAR_20->sk_err_soft = -VAR_21;
    goto out;
   }

  } else
   FUNC_9(VAR_25);

  if (FUNC_17(VAR_20)->icsk_pmtu_cookie > FUNC_10(VAR_25)) {
   FUNC_37(VAR_20, FUNC_10(VAR_25));
   FUNC_35(VAR_20);
  }
  FUNC_11(VAR_25);
  goto out;
 }

 FUNC_12(VAR_13, VAR_14, &VAR_21);


 switch (VAR_20->sk_state) {
  struct request_sock *VAR_28, **VAR_29;
 case 130:
  if (FUNC_29(VAR_20))
   goto out;

  VAR_28 = FUNC_13(VAR_20, &VAR_29, VAR_18->dest, &VAR_17->daddr,
        &VAR_17->saddr, FUNC_14(VAR_11));
  if (!VAR_28)
   goto out;




  FUNC_2(VAR_28->sk != ((void*)0));

  if (VAR_23 != FUNC_34(VAR_28)->snt_isn) {
   FUNC_1(VAR_24, VAR_4);
   goto out;
  }

  FUNC_18(VAR_20, VAR_28, VAR_29);
  goto out;

 case 128:
 case 129:

  if (!FUNC_29(VAR_20)) {
   VAR_20->sk_err = VAR_21;
   VAR_20->sk_error_report(VAR_20);

   FUNC_33(VAR_20);
  } else
   VAR_20->sk_err_soft = VAR_21;
  goto out;
 }

 if (!FUNC_29(VAR_20) && VAR_19->recverr) {
  VAR_20->sk_err = VAR_21;
  VAR_20->sk_error_report(VAR_20);
 } else
  VAR_20->sk_err_soft = VAR_21;

out:
 FUNC_7(VAR_20);
 FUNC_30(VAR_20);
}
