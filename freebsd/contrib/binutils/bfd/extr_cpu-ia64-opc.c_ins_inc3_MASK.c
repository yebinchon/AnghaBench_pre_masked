
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int shift; } ;
typedef int BFD_HOST_U_64_BIT ;
typedef scalar_t__ BFD_HOST_64_BIT ;



__attribute__((used)) static const char*
FUNC_0 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  BFD_HOST_64_BIT VAR_3 = VAR_1;
  BFD_HOST_U_64_BIT VAR_4 = 0;

  if (VAR_3 < 0)
    {
      VAR_4 = 0x4;
      VAR_1 = -VAR_1;
    }
  switch (VAR_1)
    {
    case 1: VAR_1 = 3; break;
    case 4: VAR_1 = 2; break;
    case 8: VAR_1 = 1; break;
    case 16: VAR_1 = 0; break;
    default: return "count must be +/- 1, 4, 8, or 16";
    }
  *VAR_2 |= (VAR_4 | VAR_1) << VAR_0->field[0].shift;
  return 0;
}
