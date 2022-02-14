
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct dev_gso_cb {int (* destructor ) (struct sk_buff*) ;} ;


 struct dev_gso_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0)
{
 struct dev_gso_cb *VAR_1;

 do {
  struct sk_buff *VAR_2 = VAR_0->next;

  VAR_0->next = VAR_2->next;
  VAR_2->next = ((void*)0);
  FUNC_1(VAR_2);
 } while (VAR_0->next);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->destructor)
  VAR_1->destructor(VAR_0);
}
