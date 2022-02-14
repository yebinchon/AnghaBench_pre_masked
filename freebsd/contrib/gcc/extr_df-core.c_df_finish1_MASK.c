
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct df {int num_problems_defined; TYPE_2__** problems_in_order; } ;
struct TYPE_4__ {TYPE_1__* problem; } ;
struct TYPE_3__ {int (* free_fun ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct df*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (struct df *VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->num_problems_defined; VAR_1++)
    VAR_0->problems_in_order[VAR_1]->problem->free_fun (VAR_0->problems_in_order[VAR_1]);

  FUNC_0 (VAR_0);
}
