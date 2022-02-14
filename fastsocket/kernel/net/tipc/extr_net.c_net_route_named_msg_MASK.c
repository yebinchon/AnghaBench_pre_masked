
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct tipc_msg*,char*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*,scalar_t__) ;
 int FUNC_10 (struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_14(struct sk_buff *VAR_1)
{
 struct tipc_msg *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;
 u32 VAR_4;

 if (!FUNC_6(VAR_2)) {
  FUNC_4(VAR_2, "tipc_net->drop_nam:");
  FUNC_1(VAR_1);
  return;
 }

 VAR_3 = FUNC_0(FUNC_5(VAR_2));
 VAR_4 = FUNC_11(FUNC_8(VAR_2), FUNC_7(VAR_2), &VAR_3);
 FUNC_3("tipc_net->lookup<%u,%u>-><%u,%x>\n",
     FUNC_8(VAR_2), FUNC_7(VAR_2), VAR_4, VAR_3);
 if (VAR_4) {
  FUNC_9(VAR_2, VAR_3);
  FUNC_10(VAR_2, VAR_4);
  FUNC_12(VAR_1);
  return;
 }
 FUNC_4(VAR_2, "tipc_net->rej:NO NAME: ");
 FUNC_13(VAR_1, VAR_0);
}
