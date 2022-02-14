
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_operand {int dummy; } ;
typedef int ia64_insn ;


 char* FUNC_0 (struct ia64_operand const*,int,int*) ;

__attribute__((used)) static const char*
FUNC_1 (const struct ia64_operand *VAR_0, ia64_insn VAR_1, ia64_insn *VAR_2)
{
  const char *VAR_3;

  VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (VAR_3)
    return VAR_3;

  *VAR_2 = *VAR_2 << 3;
  return 0;
}
