
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ symindex ;
typedef int carsym ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ symdef_count; int * symdefs; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

symindex
FUNC_3 (bfd *VAR_2, symindex VAR_3, carsym **VAR_4)
{
  if (!FUNC_1 (VAR_2))
    {
      FUNC_2 (VAR_1);
      return VAR_0;
    }

  if (VAR_3 == VAR_0)
    VAR_3 = 0;
  else
    ++VAR_3;
  if (VAR_3 >= FUNC_0 (VAR_2)->symdef_count)
    return VAR_0;

  *VAR_4 = (FUNC_0 (VAR_2)->symdefs + VAR_3);
  return VAR_3;
}
