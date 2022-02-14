
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_data {struct val_neg_data* prev; struct val_neg_data* next; } ;
struct val_neg_cache {struct val_neg_data* first; struct val_neg_data* last; } ;



__attribute__((used)) static void FUNC_0(struct val_neg_cache* VAR_0,
 struct val_neg_data* VAR_1)
{
 VAR_1->prev = ((void*)0);
 VAR_1->next = VAR_0->first;
 if(!VAR_0->first)
  VAR_0->last = VAR_1;
 else VAR_0->first->prev = VAR_1;
 VAR_0->first = VAR_1;
}
