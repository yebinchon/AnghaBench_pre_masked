
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct sk_buff {scalar_t__ protocol; int users; } ;
struct request_sock {int dummy; } ;
struct TYPE_5__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct ipv6_pinfo {TYPE_2__ rxopt; } ;
struct inet6_request_sock {int iif; int rmt_addr; struct sk_buff* pktopts; int loc_addr; } ;
struct dccp_skb_cb {int dccpd_seq; int dccpd_reset_code; } ;
struct dccp_request_sock {int dreq_service; int dreq_iss; int dreq_isr; } ;
typedef int __be32 ;
struct TYPE_8__ {int dccph_req_service; } ;
struct TYPE_7__ {int daddr; int saddr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dccp_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct sock*,int const) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct request_sock*,int ,struct sk_buff*) ;
 struct dccp_request_sock* FUNC_7 (struct request_sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct request_sock*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct sock*,struct request_sock*,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 struct request_sock* FUNC_15 (int *) ;
 struct inet6_request_sock* FUNC_16 (struct request_sock*) ;
 struct ipv6_pinfo* FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;
 TYPE_3__* FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sock*,struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct request_sock*) ;
 scalar_t__ FUNC_26 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_27 (struct sock*) ;

__attribute__((used)) static int FUNC_28(struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct request_sock *VAR_9;
 struct dccp_request_sock *VAR_10;
 struct inet6_request_sock *VAR_11;
 struct ipv6_pinfo *VAR_12 = FUNC_17(VAR_7);
 const __be32 VAR_13 = FUNC_4(VAR_8)->dccph_req_service;
 struct dccp_skb_cb *VAR_14 = FUNC_1(VAR_8);

 if (VAR_8->protocol == FUNC_12(VAR_4))
  return FUNC_9(VAR_7, VAR_8);

 if (!FUNC_24(VAR_8))
  return 0;

 if (FUNC_3(VAR_7, VAR_13)) {
  VAR_14->dccpd_reset_code = VAR_1;
  goto drop;
 }



 VAR_14->dccpd_reset_code = VAR_2;
 if (FUNC_18(VAR_7))
  goto drop;

 if (FUNC_27(VAR_7) && FUNC_19(VAR_7) > 1)
  goto drop;

 VAR_9 = FUNC_15(&VAR_6);
 if (VAR_9 == ((void*)0))
  goto drop;

 if (FUNC_6(VAR_9, FUNC_8(VAR_7), VAR_8))
  goto drop_and_free;

 VAR_10 = FUNC_7(VAR_9);
 if (FUNC_5(VAR_7, VAR_10, VAR_8))
  goto drop_and_free;

 if (FUNC_26(VAR_7, VAR_8, VAR_9))
  goto drop_and_free;

 VAR_11 = FUNC_16(VAR_9);
 FUNC_20(&VAR_11->rmt_addr, &FUNC_22(VAR_8)->saddr);
 FUNC_20(&VAR_11->loc_addr, &FUNC_22(VAR_8)->daddr);

 if (FUNC_23(VAR_7, VAR_8) ||
     VAR_12->rxopt.bits.rxinfo || VAR_12->rxopt.bits.rxoinfo ||
     VAR_12->rxopt.bits.rxhlim || VAR_12->rxopt.bits.rxohlim) {
  FUNC_2(&VAR_8->users);
  VAR_11->pktopts = VAR_8;
 }
 VAR_11->iif = VAR_7->sk_bound_dev_if;


 if (!VAR_7->sk_bound_dev_if &&
     FUNC_21(&VAR_11->rmt_addr) & VAR_5)
  VAR_11->iif = FUNC_14(VAR_8);
 VAR_10->dreq_isr = VAR_14->dccpd_seq;
 VAR_10->dreq_iss = FUNC_10(VAR_8);
 VAR_10->dreq_service = VAR_13;

 if (FUNC_11(VAR_7, VAR_9))
  goto drop_and_free;

 FUNC_13(VAR_7, VAR_9, VAR_3);
 return 0;

drop_and_free:
 FUNC_25(VAR_9);
drop:
 FUNC_0(VAR_0);
 return -1;
}
