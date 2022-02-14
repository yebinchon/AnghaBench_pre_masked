
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* basic_block ;
struct TYPE_7__ {TYPE_2__* next_bb; TYPE_1__* prev_bb; } ;
struct TYPE_6__ {TYPE_1__* prev_bb; } ;
struct TYPE_5__ {TYPE_2__* next_bb; } ;



void
FUNC_0 (basic_block VAR_0)
{
  VAR_0->next_bb->prev_bb = VAR_0->prev_bb;
  VAR_0->prev_bb->next_bb = VAR_0->next_bb;
  VAR_0->prev_bb = ((void*)0);
  VAR_0->next_bb = ((void*)0);
}
