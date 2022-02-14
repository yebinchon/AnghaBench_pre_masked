
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_scope {int dummy; } ;
struct c_binding {int decl; struct c_binding* shadowed; } ;


 scalar_t__ FUNC_0 (struct c_binding*,struct c_scope*) ;
 struct c_binding* FUNC_1 (int ) ;

__attribute__((used)) static tree
FUNC_2 (tree VAR_0, struct c_scope *VAR_1)
{
  struct c_binding *VAR_2;

  for (VAR_2 = FUNC_1 (VAR_0); VAR_2; VAR_2 = VAR_2->shadowed)
    if (FUNC_0 (VAR_2, VAR_1))
      return VAR_2->decl;
  return 0;
}
