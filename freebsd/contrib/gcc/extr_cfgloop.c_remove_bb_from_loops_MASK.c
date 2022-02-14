
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct loop {int depth; TYPE_1__** pred; int num_nodes; } ;
typedef TYPE_2__* basic_block ;
struct TYPE_5__ {scalar_t__ loop_depth; struct loop* loop_father; } ;
struct TYPE_4__ {int num_nodes; } ;



void
FUNC_0 (basic_block VAR_0)
{
   int VAR_1;
   struct loop *VAR_2 = VAR_0->loop_father;

   VAR_2->num_nodes--;
   for (VAR_1 = 0; VAR_1 < VAR_2->depth; VAR_1++)
     VAR_2->pred[VAR_1]->num_nodes--;
   VAR_0->loop_father = ((void*)0);
   VAR_0->loop_depth = 0;
}
