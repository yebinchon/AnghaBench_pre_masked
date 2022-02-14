
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct convert_optab {int dummy; } ;
typedef TYPE_2__* convert_optab ;
struct TYPE_6__ {TYPE_1__** handlers; } ;
struct TYPE_5__ {scalar_t__ libfunc; int insn_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static convert_optab
FUNC_1 (void)
{
  int VAR_2, VAR_3;
  convert_optab VAR_4 = FUNC_0 (sizeof (struct convert_optab));
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
      {
 VAR_4->handlers[VAR_2][VAR_3].insn_code = VAR_0;
 VAR_4->handlers[VAR_2][VAR_3].libfunc = 0;
      }
  return VAR_4;
}
