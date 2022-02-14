
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

tree
FUNC_5 (tree VAR_3)
{
  if (!VAR_3)
    return VAR_3;

  if (FUNC_2 (VAR_3) == VAR_0 && FUNC_4 (VAR_3))
    VAR_3 = VAR_1;
  else if (FUNC_2 (VAR_3) == VAR_2)
    {
      tree VAR_4;

      for (VAR_4 = VAR_3; VAR_4; VAR_4 = FUNC_1 (VAR_4))
 if (FUNC_4 (FUNC_0 (VAR_4)))
   break;
      if (VAR_4)
 {
   tree VAR_5 = VAR_1;

   for (VAR_4 = VAR_3; VAR_4; VAR_4 = FUNC_1 (VAR_4))
     if (!FUNC_4 (FUNC_0 (VAR_4)))
       VAR_5 = FUNC_3 (FUNC_0 (VAR_4), VAR_5);
   VAR_3 = VAR_5;
 }
    }

  return VAR_3;
}
