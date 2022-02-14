
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df {int num_problems_defined; struct dataflow** problems_in_order; } ;
struct dataflow {TYPE_1__* problem; } ;
typedef int basic_block ;
struct TYPE_2__ {int (* free_bb_fun ) (struct dataflow*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dataflow*,int) ;
 int FUNC_2 (struct dataflow*,int ,int ) ;

void
FUNC_3 (struct df *VAR_0, int VAR_1)
{
  basic_block VAR_2 = FUNC_0 (VAR_1);
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->num_problems_defined; VAR_3++)
    {
      struct dataflow *VAR_4 = VAR_0->problems_in_order[VAR_3];
      if (VAR_4->problem->free_bb_fun)
 VAR_4->problem->free_bb_fun
   (VAR_4, VAR_2, FUNC_1 (VAR_4, VAR_1));
    }
}
