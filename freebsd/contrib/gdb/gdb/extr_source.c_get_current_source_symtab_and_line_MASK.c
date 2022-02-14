
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ end; scalar_t__ pc; int line; int symtab; } ;


 int VAR_0 ;
 int VAR_1 ;

struct symtab_and_line
FUNC_0 (void)
{
  struct symtab_and_line VAR_2;

  VAR_2.symtab = VAR_1;
  VAR_2.line = VAR_0;
  VAR_2.pc = 0;
  VAR_2.end = 0;

  return VAR_2;
}
