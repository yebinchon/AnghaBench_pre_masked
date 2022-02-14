
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ end; scalar_t__ pc; int line; int symtab; } ;


 int VAR_0 ;
 int VAR_1 ;

struct symtab_and_line
FUNC_0 (const struct symtab_and_line *VAR_2)
{
  struct symtab_and_line VAR_3;

  VAR_3.symtab = VAR_1;
  VAR_3.line = VAR_0;

  VAR_1 = VAR_2->symtab;
  VAR_0 = VAR_2->line;
  VAR_3.pc = 0;
  VAR_3.end = 0;

  return VAR_3;
}
