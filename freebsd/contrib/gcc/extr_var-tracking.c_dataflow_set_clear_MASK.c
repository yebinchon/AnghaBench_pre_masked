
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vars; int * regs; } ;
typedef TYPE_1__ dataflow_set ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (dataflow_set *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    FUNC_0 (&VAR_1->regs[VAR_2]);

  FUNC_1 (VAR_1->vars);
}
