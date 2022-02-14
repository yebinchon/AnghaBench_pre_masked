
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_binding {int decl; int invisible; } ;


 struct c_binding* FUNC_0 (int ) ;

tree
FUNC_1 (tree VAR_0)
{
  struct c_binding *VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 && !VAR_1->invisible)
    return VAR_1->decl;
  return 0;
}
