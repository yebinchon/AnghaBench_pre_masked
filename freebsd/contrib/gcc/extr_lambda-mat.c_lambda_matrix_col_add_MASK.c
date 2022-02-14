
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int** lambda_matrix ;



void
FUNC_0 (lambda_matrix VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;

  if (VAR_4 == 0)
    return;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    VAR_0[VAR_5][VAR_3] += VAR_4 * VAR_0[VAR_5][VAR_2];
}
