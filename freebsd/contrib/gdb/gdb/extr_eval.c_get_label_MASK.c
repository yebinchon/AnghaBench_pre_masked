
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expression {TYPE_1__* elts; } ;
struct TYPE_2__ {scalar_t__ opcode; char string; int longconst; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char *
FUNC_2 (struct expression *VAR_1, int *VAR_2)
{
  if (VAR_1->elts[*VAR_2].opcode == VAR_0)
    {
      int VAR_3 = (*VAR_2)++;
      char *VAR_4 = &VAR_1->elts[VAR_3 + 2].string;
      int VAR_5 = FUNC_1 (VAR_1->elts[VAR_3 + 1].longconst);
      (*VAR_2) += 3 + FUNC_0 (VAR_5 + 1);
      return VAR_4;
    }
  else
    return ((void*)0);
}
