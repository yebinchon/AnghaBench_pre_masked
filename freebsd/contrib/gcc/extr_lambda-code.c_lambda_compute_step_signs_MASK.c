
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int lambda_trans_matrix ;
typedef int** lambda_matrix ;


 int** FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int**,int,int,int,int) ;
 int FUNC_3 (int**,int,int,int) ;
 int FUNC_4 (int**,int,int) ;
 int FUNC_5 (int**,int**,int,int) ;
 int** FUNC_6 (int,int) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int*,int,int) ;
 int* FUNC_10 (int) ;

__attribute__((used)) static lambda_vector
FUNC_11 (lambda_trans_matrix VAR_0, lambda_vector VAR_1)
{
  lambda_matrix VAR_2, VAR_3;
  int VAR_4;
  lambda_vector VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9;
  int VAR_10;

  VAR_2 = FUNC_0 (VAR_0);
  VAR_4 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_6 (VAR_4, VAR_4);

  VAR_5 = FUNC_10 (VAR_4);
  FUNC_7 (VAR_1, VAR_5, VAR_4);

  FUNC_5 (VAR_2, VAR_3, VAR_4, VAR_4);

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
      lambda_vector VAR_11;
      VAR_11 = VAR_3[VAR_7];
      for (VAR_6 = VAR_7; VAR_6 < VAR_4; VAR_6++)
 if (VAR_11[VAR_6] < 0)
   FUNC_4 (VAR_3, VAR_4, VAR_6);
      while (FUNC_8 (VAR_11, VAR_4, VAR_7 + 1) < VAR_4)
 {
   VAR_9 = FUNC_9 (VAR_11, VAR_4, VAR_7);
   FUNC_3 (VAR_3, VAR_4, VAR_7, VAR_9);

   VAR_10 = VAR_5[VAR_7];
   VAR_5[VAR_7] = VAR_5[VAR_9];
   VAR_5[VAR_9] = VAR_10;

   for (VAR_6 = VAR_7 + 1; VAR_6 < VAR_4; VAR_6++)
     {
       VAR_8 = VAR_11[VAR_6] / VAR_11[VAR_7];
       FUNC_2 (VAR_3, VAR_4, VAR_7, VAR_6, -1 * VAR_8);
     }
 }
    }
  return VAR_5;
}
