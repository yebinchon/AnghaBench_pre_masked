
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct optab {int dummy; } ;
typedef TYPE_2__* optab ;
struct TYPE_6__ {TYPE_1__* handlers; } ;
struct TYPE_5__ {scalar_t__ libfunc; int insn_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static optab
FUNC_1 (void)
{
  int VAR_2;
  optab VAR_3 = FUNC_0 (sizeof (struct optab));
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      VAR_3->handlers[VAR_2].insn_code = VAR_0;
      VAR_3->handlers[VAR_2].libfunc = 0;
    }

  return VAR_3;
}
