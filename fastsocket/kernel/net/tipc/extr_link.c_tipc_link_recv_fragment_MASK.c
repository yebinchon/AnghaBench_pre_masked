
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*,char*) ;
 int FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 scalar_t__ FUNC_14 (struct tipc_msg*) ;
 scalar_t__ FUNC_15 (struct tipc_msg*) ;
 scalar_t__ FUNC_16 (struct tipc_msg*) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,scalar_t__) ;
 int FUNC_20 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 int FUNC_21 (struct sk_buff*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (char*) ;

int FUNC_23(struct sk_buff **VAR_5, struct sk_buff **VAR_6,
       struct tipc_msg **VAR_7)
{
 struct sk_buff *VAR_8 = ((void*)0);
 struct sk_buff *VAR_9 = *VAR_6;
 struct tipc_msg *VAR_10 = FUNC_2(VAR_9);
 struct sk_buff *VAR_11 = *VAR_5;
 u32 VAR_12 = FUNC_11(VAR_10);

 *VAR_6 = ((void*)0);
 FUNC_9(VAR_10,"FRG<REC<");



 while (VAR_11 && ((FUNC_14(FUNC_2(VAR_11)) != VAR_12)
   || (FUNC_12(VAR_10) != FUNC_12(FUNC_2(VAR_11))))) {
  VAR_8 = VAR_11;
  VAR_11 = VAR_11->next;
 }

 if (!VAR_11 && (FUNC_16(VAR_10) == VAR_0)) {
  struct tipc_msg *VAR_13 = (struct tipc_msg *)FUNC_7(VAR_10);
  u32 VAR_14 = FUNC_15(VAR_13);
  u32 VAR_15 = FUNC_8(VAR_10);
  u32 VAR_16 = VAR_14/VAR_15 + !!(VAR_14 % VAR_15);
  u32 VAR_17 = VAR_3 + VAR_1;
  if (FUNC_16(VAR_13) == VAR_4)
   VAR_17 = VAR_3 + VAR_2;
  if (FUNC_15(VAR_13) > VAR_17) {
   FUNC_9(VAR_10,"<REC<Oversized: ");
   FUNC_1(VAR_9);
   return 0;
  }
  VAR_11 = FUNC_0(FUNC_15(VAR_13));
  if (VAR_11 != ((void*)0)) {
   VAR_11->next = *VAR_5;
   *VAR_5 = VAR_11;
   FUNC_20(VAR_11, VAR_13,
      FUNC_8(VAR_10));


   FUNC_19(VAR_11, VAR_12);
   FUNC_18(VAR_11,VAR_15);
   FUNC_17(VAR_11,VAR_16 - 1);
  } else {
   FUNC_22("Link unable to reassemble fragmented message\n");
  }
  FUNC_1(VAR_9);
  return 0;
 } else if (VAR_11 && (FUNC_16(VAR_10) != VAR_0)) {
  u32 VAR_18 = FUNC_8(VAR_10);
  u32 VAR_19 = FUNC_6(VAR_11);
  u32 VAR_20 = ((FUNC_10(VAR_10) - 1) * VAR_19);
  u32 VAR_21 = FUNC_5(VAR_11) - 1;
  FUNC_21(VAR_11, VAR_20,
            FUNC_7(VAR_10), VAR_18);
  FUNC_1(VAR_9);



  if (VAR_21 == 0) {
   if (VAR_8)
    VAR_8->next = VAR_11->next;
   else
    *VAR_5 = VAR_11->next;
   FUNC_13(FUNC_2(VAR_11));
   *VAR_6 = VAR_11;
   *VAR_7 = FUNC_2(VAR_11);
   return 1;
  }
  FUNC_17(VAR_11,VAR_21);
  return 0;
 }
 FUNC_3(" Discarding orphan fragment %x\n",VAR_9);
 FUNC_9(VAR_10,"ORPHAN:");
 FUNC_3("Pending long buffers:\n");
 FUNC_4(*VAR_5);
 FUNC_1(VAR_9);
 return 0;
}
