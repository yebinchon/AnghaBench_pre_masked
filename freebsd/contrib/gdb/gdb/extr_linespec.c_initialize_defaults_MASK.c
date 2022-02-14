
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int line; struct symtab* symtab; } ;
struct symtab {int dummy; } ;


 struct symtab_and_line FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (struct symtab **VAR_0, int *VAR_1)
{
  if (*VAR_0 == 0)
    {



      struct symtab_and_line VAR_2 =
 FUNC_0 ();

      *VAR_0 = VAR_2.symtab;
      *VAR_1 = VAR_2.line;
    }
}
