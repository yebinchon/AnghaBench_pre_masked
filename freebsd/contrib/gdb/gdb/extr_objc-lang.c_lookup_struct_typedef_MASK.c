
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*) ;
 struct symbol* FUNC_3 (char*,struct block*,int ,int ,struct symtab**) ;

struct symbol *
FUNC_4 (char *VAR_2, struct block *VAR_3, int VAR_4)
{
  struct symbol *VAR_5;

  VAR_5 = FUNC_3 (VAR_2, VAR_3, VAR_0, 0,
         (struct symtab **) ((void*)0));

  if (VAR_5 == ((void*)0))
    {
      if (VAR_4)
 return 0;
      else
 FUNC_2 ("No struct type named %s.", VAR_2);
    }
  if (FUNC_1 (FUNC_0 (VAR_5)) != VAR_1)
    {
      if (VAR_4)
 return 0;
      else
 FUNC_2 ("This context has class, union or enum %s, not a struct.",
        VAR_2);
    }
  return VAR_5;
}
