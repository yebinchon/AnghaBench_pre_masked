
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct symtab* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static struct symtab *
FUNC_7 (char **VAR_0, char *VAR_1, int VAR_2,
        int *VAR_3)
{
  char *VAR_4;
  char *VAR_5;
  struct symtab *VAR_6;

  VAR_4 = VAR_1;
  while (VAR_1 != *VAR_0 && VAR_1[-1] == ' ')
    --VAR_1;
  if ((*VAR_1 == '"') && VAR_2)
    --VAR_1;
  VAR_5 = (char *) FUNC_0 (VAR_1 - *VAR_0 + 1);
  FUNC_6 (VAR_5, *VAR_0, VAR_1 - *VAR_0);

  if (VAR_2 && VAR_5[VAR_1 - *VAR_0 - 1] == '"')
    VAR_5[VAR_1 - *VAR_0 - 1] = 0;
  else
    VAR_5[VAR_1 - *VAR_0] = 0;


  VAR_6 = FUNC_5 (VAR_5);
  if (VAR_6 == 0)
    {
      if (!FUNC_3 () && !FUNC_4 ())
 FUNC_1 ("No symbol table is loaded.  Use the \"file\" command.");
      if (VAR_3)
 {
   *VAR_3 = 1;







   FUNC_2 ("No source file named %s.", VAR_5);
 }
      FUNC_1 ("No source file named %s.", VAR_5);
    }


  VAR_1 = VAR_4 + 1;
  while (*VAR_1 == ' ' || *VAR_1 == '\t')
    VAR_1++;
  *VAR_0 = VAR_1;

  return VAR_6;
}
