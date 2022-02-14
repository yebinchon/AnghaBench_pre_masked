
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int shift; } ;



__attribute__((used)) static const char*
FUNC_0 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  --VAR_1;

  if (VAR_1 > 2)
    return "count must be in range 1..3";

  *VAR_2 |= VAR_1 << VAR_0->field[0].shift;
  return 0;
}
