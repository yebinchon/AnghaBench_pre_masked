
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {TYPE_1__* field; } ;
typedef int ia64_insn ;
struct TYPE_2__ {int bits; } ;


 char* FUNC_0 (struct ia64_operand const*,int,int*) ;

__attribute__((used)) static const char*
FUNC_1 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  const char *VAR_3;
  ia64_insn VAR_4;

  VAR_4 = (((ia64_insn) 1) << VAR_0->field[0].bits) - 1;
  VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (!VAR_3)
    {
      VAR_4 = (((ia64_insn) 1) << VAR_0->field[0].bits) - 1;
      *VAR_2 ^= VAR_4;
    }
  return VAR_3;
}
