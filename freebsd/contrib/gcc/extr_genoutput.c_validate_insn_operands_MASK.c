
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data {int n_operands; int lineno; TYPE_1__* operand; } ;
struct TYPE_2__ {scalar_t__ seen; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1 (struct data *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->n_operands; ++VAR_2)
    if (VAR_1->operand[VAR_2].seen == 0)
      {
 FUNC_0 (VAR_1->lineno, "missing operand %d", VAR_2);
 VAR_0 = 1;
      }
}
