
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ VAR_1 ;

int
FUNC_2 (const void *VAR_2, const void *VAR_3)
{
  const tree *const VAR_4 = (const tree *const) VAR_2;
  const tree *const VAR_5 = (const tree *const) VAR_3;

  if (FUNC_0 (*VAR_4) == FUNC_0 (*VAR_5))

    return (FUNC_1 (*VAR_5) == VAR_1) - (FUNC_1 (*VAR_4) == VAR_1);
  if (FUNC_0 (*VAR_4) == VAR_0)
    return -1;
  if (FUNC_0 (*VAR_5) == VAR_0)
    return 1;
  if (FUNC_0 (*VAR_4) < FUNC_0 (*VAR_5))
    return -1;
  return 1;
}
