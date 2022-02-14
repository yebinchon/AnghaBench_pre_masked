
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 struct type* FUNC_1 (struct symbol*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 struct type* FUNC_3 (char*) ;
 struct symbol* FUNC_4 (char*,struct block*,int ,int ,struct symtab**) ;

struct type *
FUNC_5 (char *VAR_2, struct block *VAR_3, int VAR_4)
{
  struct symbol *VAR_5;
  struct type *VAR_6;

  VAR_5 = FUNC_4 (VAR_2, VAR_3, VAR_1, 0, (struct symtab **) ((void*)0));
  if (VAR_5 == ((void*)0) || FUNC_0 (VAR_5) != VAR_0)
    {
      VAR_6 = FUNC_3 (VAR_2);
      if (VAR_6)
 {
   return (VAR_6);
 }
      else if (!VAR_6 && VAR_4)
 {
   return (((void*)0));
 }
      else
 {
   FUNC_2 ("No type named %s.", VAR_2);
 }
    }
  return (FUNC_1 (VAR_5));
}
