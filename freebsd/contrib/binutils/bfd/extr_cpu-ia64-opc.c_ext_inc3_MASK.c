
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int shift; } ;
typedef int BFD_HOST_64_BIT ;



__attribute__((used)) static const char*
FUNC_0 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  BFD_HOST_64_BIT VAR_3;
  int VAR_4;

  VAR_3 = (VAR_1 >> VAR_0->field[0].shift) & 0x7;
  VAR_4 = VAR_3 & 0x4;
  switch (VAR_3 & 0x3)
    {
    case 0: VAR_3 = 16; break;
    case 1: VAR_3 = 8; break;
    case 2: VAR_3 = 4; break;
    case 3: VAR_3 = 1; break;
    }
  if (VAR_4)
    VAR_3 = -VAR_3;

  *VAR_2 = VAR_3;
  return 0;
}
