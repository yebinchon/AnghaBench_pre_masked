
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct arg_lookup {scalar_t__ functions; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_4 (struct arg_lookup *VAR_0, tree VAR_1)
{
  if (!VAR_0->functions)
    VAR_0->functions = VAR_1;
  else if (VAR_1 == VAR_0->functions)
    ;
  else if (FUNC_3 (VAR_0->functions) && FUNC_3 (VAR_1))
    VAR_0->functions = FUNC_1 (VAR_1, VAR_0->functions);
  else
    {
      tree VAR_2 = FUNC_0 (VAR_0->functions);
      tree VAR_3 = VAR_1;
      if (FUNC_3 (VAR_2))
 {
   VAR_1 = VAR_2; VAR_2 = VAR_3; VAR_3 = VAR_1;
 }
      FUNC_2 ("%q+D is not a function,", VAR_2);
      FUNC_2 ("  conflict with %q+D", VAR_3);
      FUNC_2 ("  in call to %qD", VAR_0->name);
      return 1;
    }

  return 0;
}
