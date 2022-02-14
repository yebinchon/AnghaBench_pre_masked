
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int
FUNC_5 (tree VAR_0, tree VAR_1)
{
  tree VAR_2, VAR_3;

  for (VAR_2 = VAR_0, VAR_3 = VAR_1; VAR_2 && VAR_3; VAR_2 = FUNC_0 (VAR_2), VAR_3 = FUNC_0 (VAR_3))
    if (FUNC_3 (VAR_2) != FUNC_3 (VAR_3)
 || (FUNC_1 (VAR_2) != FUNC_1 (VAR_3)
     && ! (1 == FUNC_4 (FUNC_1 (VAR_2), FUNC_1 (VAR_3))
    && (FUNC_2 (FUNC_1 (VAR_2))
        == FUNC_2 (FUNC_1 (VAR_3))))))
      return 0;

  return VAR_2 == VAR_3;
}
