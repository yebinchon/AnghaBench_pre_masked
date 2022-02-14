
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avtab_node {struct avtab_node* next; } ;
struct avtab {int nslot; scalar_t__ mask; struct avtab_node** htable; } ;


 int VAR_0 ;
 int FUNC_0 (struct avtab_node**) ;
 int FUNC_1 (int ,struct avtab_node*) ;

void FUNC_2(struct avtab *VAR_1)
{
 int VAR_2;
 struct avtab_node *VAR_3, *VAR_4;

 if (!VAR_1 || !VAR_1->htable)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->nslot; VAR_2++) {
  VAR_3 = VAR_1->htable[VAR_2];
  while (VAR_3) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next;
   FUNC_1(VAR_0, VAR_4);
  }
  VAR_1->htable[VAR_2] = ((void*)0);
 }
 FUNC_0(VAR_1->htable);
 VAR_1->htable = ((void*)0);
 VAR_1->nslot = 0;
 VAR_1->mask = 0;
}
