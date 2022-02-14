
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stack_adjust; int vars; int * regs; } ;
typedef TYPE_1__ dataflow_set ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (dataflow_set *VAR_1, dataflow_set *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    FUNC_0 (&VAR_1->regs[VAR_3], VAR_2->regs[VAR_3]);

  FUNC_1 (VAR_1->vars, VAR_2->vars);
  VAR_1->stack_adjust = VAR_2->stack_adjust;
}
