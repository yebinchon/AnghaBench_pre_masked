
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vars; int * regs; } ;
typedef TYPE_1__ dataflow_set ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (dataflow_set *VAR_2, dataflow_set *VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    FUNC_0 (&VAR_2->regs[VAR_4], VAR_3->regs[VAR_4]);

  FUNC_1 (VAR_3->vars, VAR_1, VAR_2);
}
