
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_binding {int decl; struct c_binding* shadowed; } ;


 scalar_t__ FUNC_0 (struct c_binding*) ;
 scalar_t__ FUNC_1 (struct c_binding*) ;
 struct c_binding* FUNC_2 (int ) ;

tree
FUNC_3 (tree VAR_0)
{
  struct c_binding *VAR_1;

  for (VAR_1 = FUNC_2 (VAR_0); VAR_1; VAR_1 = VAR_1->shadowed)
    if (FUNC_1 (VAR_1) || FUNC_0 (VAR_1))
      return VAR_1->decl;

  return 0;
}
