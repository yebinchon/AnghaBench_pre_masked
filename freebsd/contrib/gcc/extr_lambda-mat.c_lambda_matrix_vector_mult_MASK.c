
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int** lambda_matrix ;


 int FUNC_0 (int*,int) ;

void
FUNC_1 (lambda_matrix VAR_0, int VAR_1, int VAR_2,
      lambda_vector VAR_3, lambda_vector VAR_4)
{
  int VAR_5, VAR_6;

  FUNC_0 (VAR_4, VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
      VAR_4[VAR_5] += VAR_0[VAR_5][VAR_6] * VAR_3[VAR_6];
}
