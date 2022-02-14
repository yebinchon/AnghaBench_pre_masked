
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hashtab_node {struct hashtab_node* next; } ;
struct hashtab_info {size_t slots_used; size_t max_chain_len; } ;
struct hashtab {size_t size; struct hashtab_node** htable; } ;



void FUNC_0(struct hashtab *VAR_0, struct hashtab_info *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;
 struct hashtab_node *VAR_6;

 VAR_4 = 0;
 VAR_5 = 0;
 for (VAR_4 = VAR_5 = VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
  VAR_6 = VAR_0->htable[VAR_2];
  if (VAR_6) {
   VAR_4++;
   VAR_3 = 0;
   while (VAR_6) {
    VAR_3++;
    VAR_6 = VAR_6->next;
   }

   if (VAR_3 > VAR_5)
    VAR_5 = VAR_3;
  }
 }

 VAR_1->slots_used = VAR_4;
 VAR_1->max_chain_len = VAR_5;
}
