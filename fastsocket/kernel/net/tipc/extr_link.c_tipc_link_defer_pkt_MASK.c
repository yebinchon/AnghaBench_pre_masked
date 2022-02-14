
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct tipc_msg*) ;

u32 FUNC_4(struct sk_buff **VAR_0,
   struct sk_buff **VAR_1,
   struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3 = ((void*)0);
 struct sk_buff *VAR_4 = *VAR_0;
 u32 VAR_5 = FUNC_3(FUNC_1(VAR_2));

 VAR_2->next = ((void*)0);


 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = *VAR_1 = VAR_2;
  return 1;
 }


 if (FUNC_2(FUNC_3(FUNC_1(*VAR_1)), VAR_5)) {
  (*VAR_1)->next = VAR_2;
  *VAR_1 = VAR_2;
  return 1;
 }


 do {
  struct tipc_msg *VAR_6 = FUNC_1(VAR_4);

  if (FUNC_2(VAR_5, FUNC_3(VAR_6))) {
   VAR_2->next = VAR_4;
   if (VAR_3)
    VAR_3->next = VAR_2;
   else
    *VAR_0 = VAR_2;
   return 1;
  }
  if (VAR_5 == FUNC_3(VAR_6)) {
   break;
  }
  VAR_3 = VAR_4;
  VAR_4 = VAR_4->next;
 }
 while (VAR_4);



 FUNC_0(VAR_2);
 return 0;
}
