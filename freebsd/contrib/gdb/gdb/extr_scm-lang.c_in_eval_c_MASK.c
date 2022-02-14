
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {TYPE_1__* symtab; } ;
struct TYPE_2__ {char* filename; } ;


 struct symtab_and_line FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (void)
{
  struct symtab_and_line VAR_0 = FUNC_0 ();

  if (VAR_0.symtab && VAR_0.symtab->filename)
    {
      char *VAR_1 = VAR_0.symtab->filename;
      int VAR_2 = FUNC_2 (VAR_1);
      if (VAR_2 >= 6 && FUNC_1 (VAR_1 + VAR_2 - 6, "eval.c") == 0)
 return 1;
    }
  return 0;
}
