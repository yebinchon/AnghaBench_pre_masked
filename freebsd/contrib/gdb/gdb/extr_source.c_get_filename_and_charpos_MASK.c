
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* fullname; scalar_t__ line_charpos; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct symtab*,int) ;
 int FUNC_2 (struct symtab*) ;

__attribute__((used)) static int
FUNC_3 (struct symtab *VAR_0, char **VAR_1)
{
  int VAR_2, VAR_3 = 0;

  VAR_2 = FUNC_2 (VAR_0);
  if (VAR_2 < 0)
    {
      if (VAR_1)
 *VAR_1 = ((void*)0);
      return 0;
    }
  if (VAR_1)
    *VAR_1 = VAR_0->fullname;
  if (VAR_0->line_charpos == 0)
    VAR_3 = 1;
  if (VAR_3)
    FUNC_1 (VAR_0, VAR_2);
  FUNC_0 (VAR_2);
  return VAR_3;
}
