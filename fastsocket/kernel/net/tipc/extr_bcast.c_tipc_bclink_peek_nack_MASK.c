
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ gap_after; scalar_t__ gap_to; struct sk_buff* deferred_head; } ;
struct tipc_node {TYPE_1__ bclink; } ;
struct sk_buff {struct sk_buff* next; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tipc_node*) ;
 int FUNC_2 (struct tipc_node*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct tipc_node* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct tipc_node*) ;
 int FUNC_9 (struct tipc_node*) ;
 int FUNC_10 (struct tipc_node*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tipc_node *VAR_4 = FUNC_7(VAR_0);
 u32 VAR_5, VAR_6;

 if (FUNC_11(!VAR_4 || !FUNC_8(VAR_4)))
  return;
 FUNC_9(VAR_4);



 VAR_5 = VAR_4->bclink.gap_after;
 VAR_6 = VAR_4->bclink.gap_to;

 if (FUNC_5(VAR_2, VAR_5)) {
  if (FUNC_4(VAR_5, VAR_3) && FUNC_4(VAR_3, VAR_6))
   VAR_4->bclink.gap_after = VAR_3;
  else if (FUNC_5(VAR_6, VAR_3))
   VAR_4->bclink.gap_to = VAR_4->bclink.gap_after;
 } else if (FUNC_5(VAR_2, VAR_6)) {
  if (FUNC_5(VAR_6, VAR_3))
   VAR_4->bclink.gap_to = VAR_2;
 } else {



  struct sk_buff *VAR_7 = VAR_4->bclink.deferred_head;
  u32 VAR_8 = VAR_4->bclink.gap_to;

  for (; VAR_7; VAR_7 = VAR_7->next) {
   u32 VAR_9 = FUNC_3(VAR_7);

   if (FUNC_6(VAR_9 - VAR_8) != 1) {
    VAR_7 = ((void*)0);
    break;
   }
   if (VAR_9 == VAR_2)
    break;
   VAR_8 = VAR_9;
  }
  if (VAR_7 == ((void*)0))
   VAR_4->bclink.gap_to = VAR_2;
 }



 if (FUNC_0(VAR_1 + 1)) {
  if (VAR_4->bclink.gap_to != VAR_4->bclink.gap_after) {
   FUNC_1(VAR_4);
   FUNC_2(VAR_4);
  }
 }
 FUNC_10(VAR_4);
}
