
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct function {scalar_t__ decl; struct function* outer; } ;


 int FUNC_0 () ;
 struct function* VAR_0 ;

struct function *
FUNC_1 (tree VAR_1)
{
  struct function *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->outer)
    if (VAR_2->decl == VAR_1)
      return VAR_2;

  FUNC_0 ();
}
