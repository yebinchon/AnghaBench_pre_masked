
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef unsigned int ia64_insn ;
struct TYPE_2__ {unsigned int shift; unsigned int bits; } ;



__attribute__((used)) static const char*
FUNC_0 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  *VAR_2 = ((VAR_1 >> VAR_0->field[0].shift)
      & ((1u << VAR_0->field[0].bits) - 1));
  return 0;
}
