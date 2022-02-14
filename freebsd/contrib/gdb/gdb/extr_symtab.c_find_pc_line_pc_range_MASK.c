
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ symtab; int end; int pc; } ;
typedef int CORE_ADDR ;


 struct symtab_and_line FUNC_0 (int ,int ) ;

int
FUNC_1 (CORE_ADDR VAR_0, CORE_ADDR *VAR_1, CORE_ADDR *VAR_2)
{
  struct symtab_and_line VAR_3;
  VAR_3 = FUNC_0 (VAR_0, 0);
  *VAR_1 = VAR_3.pc;
  *VAR_2 = VAR_3.end;
  return VAR_3.symtab != 0;
}
