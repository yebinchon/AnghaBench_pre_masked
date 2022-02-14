
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int ee_errno; scalar_t__ ee_data; int ee_info; scalar_t__ ee_pad; int ee_code; int ee_type; int ee_origin; } ;
struct sock_exterr_skb {int port; int * addr_offset; TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int data; } ;
struct iphdr {int daddr; } ;
struct inet_sock {int recverr; } ;
typedef int __be16 ;
struct TYPE_4__ {int code; int type; } ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;

void FUNC_9(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4,
     __be16 VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct inet_sock *VAR_8 = FUNC_2(VAR_2);
 struct sock_exterr_skb *VAR_9;

 if (!VAR_8->recverr)
  return;

 VAR_3 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_3)
  return;

 VAR_9 = FUNC_0(VAR_3);
 VAR_9->ee.ee_errno = VAR_4;
 VAR_9->ee.ee_origin = VAR_1;
 VAR_9->ee.ee_type = FUNC_1(VAR_3)->type;
 VAR_9->ee.ee_code = FUNC_1(VAR_3)->code;
 VAR_9->ee.ee_pad = 0;
 VAR_9->ee.ee_info = VAR_6;
 VAR_9->ee.ee_data = 0;
 VAR_9->addr_offset = (u8 *)&(((struct iphdr *)(FUNC_1(VAR_3) + 1))->daddr) -
       FUNC_5(VAR_3);
 VAR_9->port = VAR_5;

 if (FUNC_6(VAR_3, VAR_7 - VAR_3->data) != ((void*)0)) {
  FUNC_7(VAR_3);
  if (FUNC_8(VAR_2, VAR_3) == 0)
   return;
 }
 FUNC_3(VAR_3);
}
