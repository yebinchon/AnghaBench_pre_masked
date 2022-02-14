
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ pc; scalar_t__ line; scalar_t__ end; int section; int symtab; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;
 struct symtab_and_line FUNC_1 (scalar_t__,int ,int ) ;

int
FUNC_2 (struct symtab_and_line VAR_0, CORE_ADDR *VAR_1,
      CORE_ADDR *VAR_2)
{
  CORE_ADDR VAR_3;
  struct symtab_and_line VAR_4;

  VAR_3 = VAR_0.pc;
  if (VAR_3 == 0 && !FUNC_0 (VAR_0.symtab, VAR_0.line, &VAR_3))
    return 0;
  VAR_4 = FUNC_1 (VAR_3, VAR_0.section, 0);
  if (VAR_4.line != VAR_0.line)
    {

      *VAR_1 = VAR_4.pc;
      *VAR_2 = VAR_4.pc;
    }
  else
    {
      *VAR_1 = VAR_4.pc;
      *VAR_2 = VAR_4.end;
    }
  return 1;
}
