
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_4__ {struct TYPE_4__* prev_bb; struct TYPE_4__* next_bb; } ;



void
FUNC_0 (basic_block VAR_0, basic_block VAR_1)
{
  VAR_0->next_bb = VAR_1->next_bb;
  VAR_0->prev_bb = VAR_1;
  VAR_1->next_bb = VAR_0;
  VAR_0->next_bb->prev_bb = VAR_0;
}
