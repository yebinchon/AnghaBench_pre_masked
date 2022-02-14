
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int line; int symtab; } ;
struct macro_source_file {int dummy; } ;
struct macro_scope {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct symtab_and_line FUNC_0 (int ,int ) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 struct macro_scope* FUNC_4 (struct symtab_and_line) ;
 scalar_t__ VAR_1 ;

struct macro_scope *
FUNC_5 (void)
{
  struct symtab_and_line VAR_2;
  struct macro_source_file *VAR_3;
  struct macro_scope *VAR_4;


  if (VAR_0)
    VAR_2 = FUNC_0 (FUNC_2 (VAR_0), 0);



  else if (VAR_1)
    VAR_2 = FUNC_0 (FUNC_3 (), 0);


  else
    {
      struct symtab_and_line VAR_5 =
         FUNC_1 ();

      VAR_2.symtab = VAR_5.symtab;
      VAR_2.line = VAR_5.line;
    }

  return FUNC_4 (VAR_2);
}
