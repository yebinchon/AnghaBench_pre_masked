
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;


 int VAR_0 ;
 struct type* FUNC_0 (struct symbol*) ;
 int FUNC_1 (char*) ;
 struct type* VAR_1 ;
 struct symbol* FUNC_2 (char*,int *,int ,int*,struct symtab**) ;

struct type *
FUNC_3 (void)
{
  if (VAR_1 == ((void*)0))
    {
      struct symbol *VAR_2;
      VAR_2 = FUNC_2 ("java.lang.Object", ((void*)0), VAR_0,
      (int *) 0, (struct symtab **) ((void*)0));
      if (VAR_2 == ((void*)0))
 FUNC_1 ("cannot find java.lang.Object");
      VAR_1 = FUNC_0 (VAR_2);
    }
  return VAR_1;
}
