
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct builtin_description {int code; int mask; } ;
typedef enum rs6000_builtins { ____Placeholder_rs6000_builtins } rs6000_builtins ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct builtin_description *VAR_1, int VAR_2,
     enum rs6000_builtins VAR_3,
     enum rs6000_builtins VAR_4)
{
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
    if (VAR_1[VAR_5].code == VAR_3)
      break;

  if (VAR_5 == VAR_2)
    return;

  for (; VAR_5 < VAR_2; ++VAR_5)
    {

      VAR_1[VAR_5].mask = VAR_0;
      if (VAR_1[VAR_5].code == VAR_4)
 break;
    }
}
