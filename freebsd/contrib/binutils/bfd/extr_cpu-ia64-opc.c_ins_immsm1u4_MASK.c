
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_operand {int dummy; } ;
typedef int ia64_insn ;


 char const* FUNC_0 (struct ia64_operand const*,int,int*,int ) ;

__attribute__((used)) static const char*
FUNC_1 (const struct ia64_operand *VAR_0, ia64_insn VAR_1,
       ia64_insn *VAR_2)
{
  VAR_1 = ((VAR_1 & 0xffffffff) ^ 0x80000000) - 0x80000000;

  --VAR_1;
  return FUNC_0 (VAR_0, VAR_1, VAR_2, 0);
}
