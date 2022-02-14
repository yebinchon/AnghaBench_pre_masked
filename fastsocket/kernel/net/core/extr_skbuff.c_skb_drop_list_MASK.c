
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 int FUNC_0 (char*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff **VAR_0)
{
 struct sk_buff *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);

 do {
  struct sk_buff *VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0("Drop frag skb 0x%p\n", VAR_2);
  FUNC_1(VAR_2);
 } while (VAR_1);
}
