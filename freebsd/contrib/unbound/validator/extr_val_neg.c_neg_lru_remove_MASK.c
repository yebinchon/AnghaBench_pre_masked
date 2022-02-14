
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_neg_data {TYPE_2__* prev; TYPE_1__* next; } ;
struct val_neg_cache {TYPE_2__* last; TYPE_1__* first; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {TYPE_2__* prev; } ;



__attribute__((used)) static void FUNC_0(struct val_neg_cache* VAR_0,
 struct val_neg_data* VAR_1)
{
 if(VAR_1->prev)
  VAR_1->prev->next = VAR_1->next;
 else VAR_0->first = VAR_1->next;
 if(VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;
 else VAR_0->last = VAR_1->prev;
}
