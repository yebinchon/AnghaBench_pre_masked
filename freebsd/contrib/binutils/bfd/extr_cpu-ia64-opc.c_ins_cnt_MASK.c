
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int bits; int shift; } ;
typedef int BFD_HOST_U_64_BIT ;



__attribute__((used)) static const char*
FUNC_0 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  --VAR_1;
  if (VAR_1 >= ((BFD_HOST_U_64_BIT) 1) << VAR_0->field[0].bits)
    return "count out of range";

  *VAR_2 |= VAR_1 << VAR_0->field[0].shift;
  return 0;
}
