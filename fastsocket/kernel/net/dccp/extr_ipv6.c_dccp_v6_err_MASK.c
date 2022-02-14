
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {int sk_state; int sk_err_soft; int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_bound_dev_if; } ;
struct sk_buff {int len; int dev; scalar_t__ data; } ;
struct request_sock {int * sk; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ipv6_pinfo {scalar_t__ recverr; int saddr; int daddr; int dst_cookie; } ;
struct inet_sock {int sport; int dport; } ;
struct inet6_skb_parm {int dummy; } ;
struct flowi {int fl_ip_sport; int fl_ip_dport; int oif; int fl6_src; int fl6_dst; int proto; } ;
struct dst_entry {int dummy; } ;
struct dccp_sock {int dccps_awh; int dccps_awl; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;
typedef int fl ;
typedef int __u64 ;
typedef int __be32 ;
struct TYPE_4__ {int dreq_iss; } ;
struct TYPE_3__ {scalar_t__ icsk_pmtu_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

 int VAR_4 ;


 int VAR_5 ;
 int FUNC_1 (struct net*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dccp_hdr const*) ;
 int FUNC_5 (int ) ;
 struct dst_entry* FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int VAR_11 ;
 int FUNC_11 (struct dccp_hdr const*) ;
 TYPE_2__* FUNC_12 (struct request_sock*) ;
 struct dccp_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,scalar_t__) ;
 struct net* FUNC_15 (int ) ;
 int FUNC_16 (struct dst_entry*) ;
 scalar_t__ FUNC_17 (struct dst_entry*) ;
 int FUNC_18 (struct dst_entry*) ;
 int FUNC_19 (scalar_t__,scalar_t__,int*) ;
 struct request_sock* FUNC_20 (struct sock*,struct request_sock***,int ,int *,int *,int ) ;
 int FUNC_21 (struct sk_buff*) ;
 struct sock* FUNC_22 (struct net*,int *,int *,int ,int *,int ,int ) ;
 struct ipv6_pinfo* FUNC_23 (struct sock*) ;
 TYPE_1__* FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*,struct request_sock*,struct request_sock**) ;
 struct inet_sock* FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_30 (int *,int *) ;
 int FUNC_31 (struct flowi*,int ,int) ;
 int FUNC_32 (struct sock*,struct flowi*) ;
 scalar_t__ FUNC_33 (struct sock*) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (struct sock*) ;
 int FUNC_36 (struct sock*) ;
 int FUNC_37 (struct net*,struct dst_entry**,struct flowi*,struct sock*,int ) ;

__attribute__((used)) static void FUNC_38(struct sk_buff *VAR_12, struct inet6_skb_parm *VAR_13,
   u8 VAR_14, u8 VAR_15, int VAR_16, __be32 VAR_17)
{
 struct ipv6hdr *VAR_18 = (struct ipv6hdr *)VAR_12->data;
 const struct dccp_hdr *VAR_19 = (struct dccp_hdr *)(VAR_12->data + VAR_16);
 struct dccp_sock *VAR_20;
 struct ipv6_pinfo *VAR_21;
 struct sock *VAR_22;
 int VAR_23;
 __u64 VAR_24;
 struct net *VAR_25 = FUNC_15(VAR_12->dev);

 if (VAR_12->len < VAR_16 + sizeof(*VAR_19) ||
     VAR_12->len < VAR_16 + FUNC_4(VAR_19)) {
  FUNC_1(VAR_25, FUNC_5(VAR_12->dev),
       VAR_6);
  return;
 }

 VAR_22 = FUNC_22(VAR_25, &VAR_11,
   &VAR_18->daddr, VAR_19->dccph_dport,
   &VAR_18->saddr, VAR_19->dccph_sport, FUNC_21(VAR_12));

 if (VAR_22 == ((void*)0)) {
  FUNC_1(VAR_25, FUNC_5(VAR_12->dev),
       VAR_6);
  return;
 }

 if (VAR_22->sk_state == VAR_5) {
  FUNC_28(FUNC_27(VAR_22));
  return;
 }

 FUNC_8(VAR_22);
 if (FUNC_33(VAR_22))
  FUNC_2(VAR_25, VAR_9);

 if (VAR_22->sk_state == VAR_3)
  goto out;

 VAR_20 = FUNC_13(VAR_22);
 VAR_24 = FUNC_11(VAR_19);
 if ((1 << VAR_22->sk_state) & ~(VAR_2 | VAR_1) &&
     !FUNC_7(VAR_24, VAR_20->dccps_awl, VAR_20->dccps_awh)) {
  FUNC_2(VAR_25, VAR_10);
  goto out;
 }

 VAR_21 = FUNC_23(VAR_22);

 if (VAR_14 == VAR_7) {
  struct dst_entry *VAR_26 = ((void*)0);

  if (FUNC_33(VAR_22))
   goto out;
  if ((1 << VAR_22->sk_state) & (VAR_1 | VAR_0))
   goto out;


  VAR_26 = FUNC_6(VAR_22, VAR_21->dst_cookie);
  if (VAR_26 == ((void*)0)) {
   struct inet_sock *VAR_27 = FUNC_26(VAR_22);
   struct flowi VAR_28;





   FUNC_31(&VAR_28, 0, sizeof(VAR_28));
   VAR_28.proto = VAR_8;
   FUNC_30(&VAR_28.fl6_dst, &VAR_21->daddr);
   FUNC_30(&VAR_28.fl6_src, &VAR_21->saddr);
   VAR_28.oif = VAR_22->sk_bound_dev_if;
   VAR_28.fl_ip_dport = VAR_27->dport;
   VAR_28.fl_ip_sport = VAR_27->sport;
   FUNC_32(VAR_22, &VAR_28);

   VAR_23 = FUNC_29(VAR_22, &VAR_26, &VAR_28);
   if (VAR_23) {
    VAR_22->sk_err_soft = -VAR_23;
    goto out;
   }

   VAR_23 = FUNC_37(VAR_25, &VAR_26, &VAR_28, VAR_22, 0);
   if (VAR_23 < 0) {
    VAR_22->sk_err_soft = -VAR_23;
    goto out;
   }
  } else
   FUNC_16(VAR_26);

  if (FUNC_24(VAR_22)->icsk_pmtu_cookie > FUNC_17(VAR_26)) {
   FUNC_14(VAR_22, FUNC_17(VAR_26));
  }
  FUNC_18(VAR_26);
  goto out;
 }

 FUNC_19(VAR_14, VAR_15, &VAR_23);


 switch (VAR_22->sk_state) {
  struct request_sock *VAR_29, **VAR_30;
 case 130:
  if (FUNC_33(VAR_22))
   goto out;

  VAR_29 = FUNC_20(VAR_22, &VAR_30, VAR_19->dccph_dport,
        &VAR_18->daddr, &VAR_18->saddr,
        FUNC_21(VAR_12));
  if (VAR_29 == ((void*)0))
   goto out;





  FUNC_3(VAR_29->sk != ((void*)0));

  if (VAR_24 != FUNC_12(VAR_29)->dreq_iss) {
   FUNC_2(VAR_25, VAR_10);
   goto out;
  }

  FUNC_25(VAR_22, VAR_29, VAR_30);
  goto out;

 case 129:
 case 128:

  if (!FUNC_33(VAR_22)) {
   FUNC_0(VAR_4);
   VAR_22->sk_err = VAR_23;




   VAR_22->sk_error_report(VAR_22);
   FUNC_10(VAR_22);
  } else
   VAR_22->sk_err_soft = VAR_23;
  goto out;
 }

 if (!FUNC_33(VAR_22) && VAR_21->recverr) {
  VAR_22->sk_err = VAR_23;
  VAR_22->sk_error_report(VAR_22);
 } else
  VAR_22->sk_err_soft = VAR_23;

out:
 FUNC_9(VAR_22);
 FUNC_34(VAR_22);
}
