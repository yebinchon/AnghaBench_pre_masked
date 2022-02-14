
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct publication {int subscr; } ;
struct distr_item {int key; int ref; int lower; int type; int upper; } ;
typedef int net_ev_handler ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct publication*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ) ;
 struct publication* FUNC_10 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 struct publication* FUNC_11 (int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *,int ,struct publication*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(struct sk_buff *VAR_6)
{
 struct publication *VAR_7;
 struct tipc_msg *VAR_8 = FUNC_1(VAR_6);
 struct distr_item *VAR_9 = (struct distr_item *)FUNC_5(VAR_8);
 u32 VAR_10 = FUNC_6(VAR_8) / VAR_0;

 FUNC_15(&VAR_5);
 while (VAR_10--) {
  if (FUNC_8(VAR_8) == VAR_1) {
   FUNC_2("tipc_named_recv: got publication for %u, %u, %u\n",
       FUNC_9(VAR_9->type), FUNC_9(VAR_9->lower),
       FUNC_9(VAR_9->upper));
   VAR_7 = FUNC_10(FUNC_9(VAR_9->type),
       FUNC_9(VAR_9->lower),
       FUNC_9(VAR_9->upper),
       VAR_2,
       FUNC_7(VAR_8),
       FUNC_9(VAR_9->ref),
       FUNC_9(VAR_9->key));
   if (VAR_7) {
    FUNC_12(&VAR_7->subscr,
             FUNC_7(VAR_8),
             VAR_7,
             (net_ev_handler)VAR_4);
   }
  } else if (FUNC_8(VAR_8) == VAR_3) {
   FUNC_2("tipc_named_recv: got withdrawl for %u, %u, %u\n",
       FUNC_9(VAR_9->type), FUNC_9(VAR_9->lower),
       FUNC_9(VAR_9->upper));
   VAR_7 = FUNC_11(FUNC_9(VAR_9->type),
       FUNC_9(VAR_9->lower),
       FUNC_7(VAR_8),
       FUNC_9(VAR_9->ref),
       FUNC_9(VAR_9->key));

   if (VAR_7) {
    FUNC_13(&VAR_7->subscr);
    FUNC_4(VAR_7);
   } else {
    FUNC_3("Unable to remove publication by node 0x%x\n"
        "(type=%u, lower=%u, ref=%u, key=%u)\n",
        FUNC_7(VAR_8),
        FUNC_9(VAR_9->type), FUNC_9(VAR_9->lower),
        FUNC_9(VAR_9->ref), FUNC_9(VAR_9->key));
   }
  } else {
   FUNC_14("Unrecognized name table message received\n");
  }
  VAR_9++;
 }
 FUNC_16(&VAR_5);
 FUNC_0(VAR_6);
}
