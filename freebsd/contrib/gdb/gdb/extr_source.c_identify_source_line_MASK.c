
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {scalar_t__ fullname; int nlines; int * line_charpos; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (scalar_t__,int,int ,int,int ) ;
 int VAR_0 ;
 struct symtab* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct symtab*,char**) ;
 int VAR_3 ;

int
FUNC_2 (struct symtab *VAR_4, int VAR_5, int VAR_6,
        CORE_ADDR VAR_7)
{
  if (VAR_4->line_charpos == 0)
    FUNC_1 (VAR_4, (char **) ((void*)0));
  if (VAR_4->fullname == 0)
    return 0;
  if (VAR_5 > VAR_4->nlines)

    return 0;
  FUNC_0 (VAR_4->fullname, VAR_5, VAR_4->line_charpos[VAR_5 - 1],
     VAR_6, VAR_7);

  VAR_0 = VAR_5;
  VAR_2 = VAR_5;
  VAR_3 = VAR_5;
  VAR_1 = VAR_4;
  return 1;
}
