
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int** lambda_matrix ;


 int FUNC_0 (int**,int**,int) ;

int
FUNC_1 (lambda_matrix VAR_0, lambda_matrix VAR_1, int VAR_2)
{
  if (VAR_2 == 2)
    {
      int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
      VAR_3 = VAR_0[0][0];
      VAR_4 = VAR_0[1][0];
      VAR_5 = VAR_0[0][1];
      VAR_6 = VAR_0[1][1];
      VAR_1[0][0] = VAR_6;
      VAR_1[0][1] = -VAR_5;
      VAR_1[1][0] = -VAR_4;
      VAR_1[1][1] = VAR_3;
      VAR_7 = (VAR_3 * VAR_6 - VAR_4 * VAR_5);
      if (VAR_7 < 0)
 {
   VAR_7 *= -1;
   VAR_1[0][0] *= -1;
   VAR_1[1][0] *= -1;
   VAR_1[0][1] *= -1;
   VAR_1[1][1] *= -1;
 }
      return VAR_7;
    }
  else
    return FUNC_0 (VAR_0, VAR_1, VAR_2);
}
