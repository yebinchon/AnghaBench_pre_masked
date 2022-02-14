
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int dummy; } ;
struct symtab {int dummy; } ;


 struct symtabs_and_lines FUNC_0 (char**,int,struct symtab*,int ,char***,int *) ;
 int VAR_0 ;
 struct symtab* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;

struct symtabs_and_lines
FUNC_2 (char *VAR_3, int VAR_4)
{
  struct symtabs_and_lines VAR_5;
  if (VAR_3 == 0)
    FUNC_1 ("Empty line specification.");
  if (VAR_2)
    VAR_5 = FUNC_0 (&VAR_3, VAR_4,
     VAR_1,
     VAR_0,
     (char ***) ((void*)0), ((void*)0));
  else
    VAR_5 = FUNC_0 (&VAR_3, VAR_4,
     (struct symtab *) ((void*)0), 0, (char ***) ((void*)0), ((void*)0));
  if (*VAR_3)
    FUNC_1 ("Junk at end of line specification: %s", VAR_3);
  return VAR_5;
}
