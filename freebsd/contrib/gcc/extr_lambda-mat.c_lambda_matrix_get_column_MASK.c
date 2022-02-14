
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * lambda_vector ;
typedef int ** lambda_matrix ;



__attribute__((used)) static void
FUNC_0 (lambda_matrix VAR_0, int VAR_1, int VAR_2,
     lambda_vector VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    VAR_3[VAR_4] = VAR_0[VAR_4][VAR_2];
}
