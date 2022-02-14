
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_zone {int in_use; int count; struct val_neg_zone* parent; } ;



void FUNC_0(struct val_neg_zone* VAR_0)
{
 if(!VAR_0->in_use) {
  struct val_neg_zone* VAR_1;
  VAR_0->in_use = 1;

  for(VAR_1=VAR_0; VAR_1; VAR_1 = VAR_1->parent) {
   VAR_1->count++;
  }
 }
}
