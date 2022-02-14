
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; int relax_inst; int relax_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char**,int) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2)
{
  FUNC_3 (VAR_2);

  if (FUNC_1 (&VAR_2, 8) == (int) VAR_0
      || FUNC_2 (&VAR_2) == (int) VAR_0
      || FUNC_1 (&VAR_2, 4) == (int) VAR_0
      || FUNC_0 (VAR_2) == (int) VAR_0)
    {
      return;
    }
  else
    {
      if ((VAR_1.instruction & 0x700f) == 0x2003)
        {
          VAR_1.relax_inst |= (((VAR_1.instruction >> 8) & 0xf) << 15)
            | (((VAR_1.instruction >> 4) & 0xf) << 10);
        }
      else if ((VAR_1.instruction & 0x700f) == 0x2006)
 {
   VAR_1.relax_inst |= (((VAR_1.instruction >> 8) & 0xf) << 20)
     | (((VAR_1.instruction >> 4) & 0xf) << 15);
 }
      else
        {
          VAR_1.relax_inst |= (((VAR_1.instruction >> 8) & 0xf) << 20)
            | (((VAR_1.instruction >> 8) & 0xf) << 15) | (((VAR_1.instruction >> 4) & 0xf) << 10);
        }
      VAR_1.relax_size = 4;
    }
}
