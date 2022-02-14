
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; int relax_inst; scalar_t__ type; int relax_size; int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_5)
{
  VAR_5 = VAR_5;
  if (VAR_4 == 1)
    {
      if (((VAR_3.instruction & 0x3e0003ff) == 0x0c000004)
          || ((VAR_3.instruction & 0x3e0003ff) == 0x0c000024)
          || ((VAR_3.instruction & 0x3e0003ff) == 0x0c000044)
          || ((VAR_3.instruction & 0x3e0003ff) == 0x0c000064))
        {
          VAR_3.error = VAR_0;
          return;
        }
    }
  if (FUNC_0 (VAR_5) == (int) VAR_1)
    return;

  if (VAR_3.relax_inst != 0x8000)
    {
      if (VAR_3.type == VAR_2)
        {
          VAR_3.relax_size = 2;
        }
      else
        {
          VAR_3.relax_size = 4;
        }
    }
}
