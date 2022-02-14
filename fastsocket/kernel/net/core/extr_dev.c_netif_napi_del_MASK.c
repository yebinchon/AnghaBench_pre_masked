
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct napi_struct {scalar_t__ gro_count; struct sk_buff* gro_list; int dev_list; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct napi_struct*) ;

void FUNC_3(struct napi_struct *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2;

 FUNC_1(&VAR_0->dev_list);
 FUNC_2(VAR_0);

 for (VAR_1 = VAR_0->gro_list; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  VAR_1->next = ((void*)0);
  FUNC_0(VAR_1);
 }

 VAR_0->gro_list = ((void*)0);
 VAR_0->gro_count = 0;
}
