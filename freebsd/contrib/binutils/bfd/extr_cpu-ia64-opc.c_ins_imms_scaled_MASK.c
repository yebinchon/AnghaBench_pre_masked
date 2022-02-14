
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int bits; int shift; } ;
typedef int BFD_HOST_64_BIT ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static const char*
FUNC_1 (const struct ia64_operand *VAR_0, ia64_insn VAR_1,
   ia64_insn *VAR_2, int VAR_3)
{
  BFD_HOST_64_BIT VAR_4 = VAR_1, VAR_5 = 0;
  ia64_insn VAR_6 = 0;
  int VAR_7;

  VAR_4 >>= VAR_3;

  for (VAR_7 = 0; VAR_7 < FUNC_0 (VAR_0->field) && VAR_0->field[VAR_7].bits; ++VAR_7)
    {
      VAR_6 |= ((VAR_4 & ((((ia64_insn) 1) << VAR_0->field[VAR_7].bits) - 1))
       << VAR_0->field[VAR_7].shift);
      VAR_5 = (VAR_4 >> (VAR_0->field[VAR_7].bits - 1)) & 1;
      VAR_4 >>= VAR_0->field[VAR_7].bits;
    }
  if ((!VAR_5 && VAR_4 != 0) || (VAR_5 && VAR_4 != -1))
    return "integer operand out of range";

  *VAR_2 |= VAR_6;
  return 0;
}
