
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct napi_struct {struct sk_buff* gro_list; scalar_t__ gro_count; } ;


 int FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct napi_struct *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->gro_list; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  VAR_1->next = ((void*)0);
  FUNC_0(VAR_1);
 }

 VAR_0->gro_count = 0;
 VAR_0->gro_list = ((void*)0);
}
