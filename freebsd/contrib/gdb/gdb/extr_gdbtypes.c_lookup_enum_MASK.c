
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int VAR_0 ;
 struct type* FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*) ;
 struct symbol* FUNC_3 (char*,struct block*,int ,int ,struct symtab**) ;

struct type *
FUNC_4 (char *VAR_2, struct block *VAR_3)
{
  struct symbol *VAR_4;

  VAR_4 = FUNC_3 (VAR_2, VAR_3, VAR_0, 0,
         (struct symtab **) ((void*)0));
  if (VAR_4 == ((void*)0))
    {
      FUNC_2 ("No enum type named %s.", VAR_2);
    }
  if (FUNC_1 (FUNC_0 (VAR_4)) != VAR_1)
    {
      FUNC_2 ("This context has class, struct or union %s, not an enum.", VAR_2);
    }
  return (FUNC_0 (VAR_4));
}
