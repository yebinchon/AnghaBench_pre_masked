
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tipc_msg*,char*) ;
 int FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_18 (struct sk_buff*,int *) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,int ) ;

void FUNC_22(struct sk_buff *VAR_3)
{
 struct tipc_msg *VAR_4;
 u32 VAR_5;

 if (!VAR_3)
  return;
 VAR_4 = FUNC_1(VAR_3);

 FUNC_7(VAR_4);
 if (FUNC_11(VAR_4) > 6) {
  if (FUNC_6(VAR_4)) {
   FUNC_3(VAR_4, "NET>DISC>:");
   FUNC_0(VAR_3);
  } else {
   FUNC_3(VAR_4, "NET>REJ>:");
   FUNC_21(VAR_3, FUNC_5(VAR_4) ?
     VAR_1 : VAR_0);
  }
  return;
 }

 FUNC_3(VAR_4, "tipc_net->rout: ");


 VAR_5 = FUNC_12(VAR_4) ? VAR_2 : FUNC_4(VAR_4);
 if (FUNC_2(VAR_5, VAR_2)) {
  if (FUNC_8(VAR_4)) {
   if (FUNC_10(VAR_4))
    FUNC_18(VAR_3, ((void*)0));
   else if (FUNC_5(VAR_4))
    FUNC_19(VAR_3);
   else
    FUNC_14(VAR_3);
   return;
  }
  switch (FUNC_13(VAR_4)) {
  case 128:
   FUNC_15(VAR_3);
   break;
  case 129:
   FUNC_17(VAR_3);
   break;
  case 130:
   FUNC_20(VAR_3);
   break;
  default:
   FUNC_3(VAR_4,"DROP/NET/<REC<");
   FUNC_0(VAR_3);
  }
  return;
 }


 FUNC_3(VAR_4, "NET>SEND>: ");
 FUNC_16(VAR_3, VAR_5, FUNC_9(VAR_4));
}
