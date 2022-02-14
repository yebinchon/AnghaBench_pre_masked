
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int rmt_addr; int loc_addr; } ;
struct dccp_skb_cb {int dccpd_seq; int dccpd_reset_code; } ;
struct dccp_request_sock {int dreq_service; int dreq_iss; int dreq_isr; } ;
typedef int __be32 ;
struct TYPE_6__ {int dccph_req_service; } ;
struct TYPE_5__ {int saddr; int daddr; } ;
struct TYPE_4__ {int rt_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dccp_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct sock*,int const) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct request_sock*,int ,struct sk_buff*) ;
 int VAR_6 ;
 struct dccp_request_sock* FUNC_6 (struct request_sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct request_sock*) ;
 int FUNC_10 (struct sock*,struct request_sock*,int ) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 struct request_sock* FUNC_13 (int *) ;
 struct inet_request_sock* FUNC_14 (struct request_sock*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct request_sock*) ;
 scalar_t__ FUNC_17 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_18 (struct sock*) ;
 TYPE_1__* FUNC_19 (struct sk_buff*) ;

int FUNC_20(struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct inet_request_sock *VAR_9;
 struct request_sock *VAR_10;
 struct dccp_request_sock *VAR_11;
 const __be32 VAR_12 = FUNC_3(VAR_8)->dccph_req_service;
 struct dccp_skb_cb *VAR_13 = FUNC_1(VAR_8);


 if (FUNC_19(VAR_8)->rt_flags & (VAR_4 | VAR_5))
  return 0;

 if (FUNC_2(VAR_7, VAR_12)) {
  VAR_13->dccpd_reset_code = VAR_1;
  goto drop;
 }





 VAR_13->dccpd_reset_code = VAR_2;
 if (FUNC_11(VAR_7))
  goto drop;







 if (FUNC_18(VAR_7) && FUNC_12(VAR_7) > 1)
  goto drop;

 VAR_10 = FUNC_13(&VAR_6);
 if (VAR_10 == ((void*)0))
  goto drop;

 if (FUNC_5(VAR_10, FUNC_7(VAR_7), VAR_8))
  goto drop_and_free;

 VAR_11 = FUNC_6(VAR_10);
 if (FUNC_4(VAR_7, VAR_11, VAR_8))
  goto drop_and_free;

 if (FUNC_17(VAR_7, VAR_8, VAR_10))
  goto drop_and_free;

 VAR_9 = FUNC_14(VAR_10);
 VAR_9->loc_addr = FUNC_15(VAR_8)->daddr;
 VAR_9->rmt_addr = FUNC_15(VAR_8)->saddr;
 VAR_11->dreq_isr = VAR_13->dccpd_seq;
 VAR_11->dreq_iss = FUNC_8(VAR_8);
 VAR_11->dreq_service = VAR_12;

 if (FUNC_9(VAR_7, VAR_10))
  goto drop_and_free;

 FUNC_10(VAR_7, VAR_10, VAR_3);
 return 0;

drop_and_free:
 FUNC_16(VAR_10);
drop:
 FUNC_0(VAR_0);
 return -1;
}
