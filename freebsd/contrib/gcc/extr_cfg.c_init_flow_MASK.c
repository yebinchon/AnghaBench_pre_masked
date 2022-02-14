
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct control_flow_graph {int dummy; } ;
struct basic_block_def {int dummy; } ;
struct TYPE_6__ {TYPE_2__* next_bb; int index; } ;
struct TYPE_5__ {TYPE_3__* prev_bb; int index; } ;
struct TYPE_4__ {void* cfg; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_5 ;

void
FUNC_1 (void)
{
  if (!VAR_4->cfg)
    VAR_4->cfg = FUNC_0 (sizeof (struct control_flow_graph));
  VAR_5 = 0;
  VAR_1 = FUNC_0 (sizeof (struct basic_block_def));
  VAR_1->index = VAR_0;
  VAR_3 = FUNC_0 (sizeof (struct basic_block_def));
  VAR_3->index = VAR_2;
  VAR_1->next_bb = VAR_3;
  VAR_3->prev_bb = VAR_1;
}
