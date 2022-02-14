
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * lambda_linear_expression ;


 scalar_t__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__* FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4 (lambda_linear_expression VAR_0, lambda_linear_expression VAR_1,
    int VAR_2, int VAR_3)
{
  int VAR_4;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return 0;
  if (FUNC_1 (VAR_0) != FUNC_1 (VAR_1))
    return 0;
  if (FUNC_2 (VAR_0) != FUNC_2 (VAR_1))
    return 0;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    if (FUNC_0 (VAR_0)[VAR_4] != FUNC_0 (VAR_1)[VAR_4])
      return 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    if (FUNC_3 (VAR_0)[VAR_4] !=
 FUNC_3 (VAR_1)[VAR_4])
      return 0;
  return 1;
}
