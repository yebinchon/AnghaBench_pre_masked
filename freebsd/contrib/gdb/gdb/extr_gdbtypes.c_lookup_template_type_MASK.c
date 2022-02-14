
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 struct type* FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (struct type*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 struct symbol* FUNC_5 (char*,struct block*,int ,int ,struct symtab**) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

struct type *
FUNC_9 (char *VAR_2, struct type *VAR_3, struct block *VAR_4)
{
  struct symbol *VAR_5;
  char *VAR_6 = (char *) FUNC_3 (FUNC_8 (VAR_2) + FUNC_8 (FUNC_2 (VAR_3)) + 4);
  FUNC_7 (VAR_6, VAR_2);
  FUNC_6 (VAR_6, "<");
  FUNC_6 (VAR_6, FUNC_2 (VAR_3));
  FUNC_6 (VAR_6, " >");

  VAR_5 = FUNC_5 (VAR_6, VAR_4, VAR_1, 0, (struct symtab **) ((void*)0));

  if (VAR_5 == ((void*)0))
    {
      FUNC_4 ("No template type named %s.", VAR_2);
    }
  if (FUNC_1 (FUNC_0 (VAR_5)) != VAR_0)
    {
      FUNC_4 ("This context has class, union or enum %s, not a struct.", VAR_2);
    }
  return (FUNC_0 (VAR_5));
}
