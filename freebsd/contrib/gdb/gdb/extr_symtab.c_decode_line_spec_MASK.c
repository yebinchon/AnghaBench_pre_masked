
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int dummy; } ;
struct symtab_and_line {int line; int symtab; } ;


 struct symtabs_and_lines FUNC_0 (char**,int,int ,int ,char***,int *) ;
 int FUNC_1 (char*,...) ;
 struct symtab_and_line FUNC_2 () ;

struct symtabs_and_lines
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct symtabs_and_lines VAR_2;
  struct symtab_and_line VAR_3;

  if (VAR_0 == 0)
    FUNC_1 ("Empty line specification.");



  VAR_3 = FUNC_2 ();

  VAR_2 = FUNC_0 (&VAR_0, VAR_1,
   VAR_3.symtab, VAR_3.line,
   (char ***) ((void*)0), ((void*)0));

  if (*VAR_0)
    FUNC_1 ("Junk at end of line specification: %s", VAR_0);
  return VAR_2;
}
