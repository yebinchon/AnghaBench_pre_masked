
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 int VAR_1 ;
 struct type* FUNC_1 (struct symbol*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct type*) ;
 int FUNC_4 (char*,char*) ;
 struct symbol* FUNC_5 (char*,struct block*,int ,int ,struct symtab**) ;

struct type *
FUNC_6 (char *VAR_3, struct block *VAR_4)
{
  struct symbol *VAR_5;
  struct type *VAR_6;

  VAR_5 = FUNC_5 (VAR_3, VAR_4, VAR_1, 0,
         (struct symtab **) ((void*)0));

  if (VAR_5 == ((void*)0))
    FUNC_4 ("No union type named %s.", VAR_3);

  VAR_6 = FUNC_1 (VAR_5);

  if (FUNC_2 (VAR_6) == VAR_2)
    return (VAR_6);




  if (FUNC_0 (VAR_6))
    if (FUNC_3 (VAR_6) == VAR_0)
      return (VAR_6);


  FUNC_4 ("This context has class, struct or enum %s, not a union.", VAR_3);
}
