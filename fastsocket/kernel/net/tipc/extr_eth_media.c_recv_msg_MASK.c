
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {scalar_t__ pkt_type; scalar_t__ len; int * next; scalar_t__ data; } ;
struct packet_type {scalar_t__ af_packet_priv; } ;
struct net_device {int dummy; } ;
struct eth_bearer {int bearer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct net_device *VAR_3,
      struct packet_type *VAR_4, struct net_device *VAR_5)
{
 struct eth_bearer *VAR_6 = (struct eth_bearer *)VAR_4->af_packet_priv;
 u32 VAR_7;

 if (!FUNC_4(FUNC_0(VAR_3), &VAR_1)) {
  FUNC_1(VAR_2);
  return 0;
 }

 if (FUNC_2(VAR_6->bearer)) {
  if (FUNC_2(VAR_2->pkt_type <= VAR_0)) {
   VAR_7 = FUNC_3((struct tipc_msg *)VAR_2->data);
   FUNC_5(VAR_2, VAR_7);
   if (FUNC_2(VAR_2->len == VAR_7)) {
    VAR_2->next = ((void*)0);
    FUNC_6(VAR_2, VAR_6->bearer);
    return 0;
   }
  }
 }
 FUNC_1(VAR_2);
 return 0;
}
