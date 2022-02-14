
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int** lambda_matrix ;


 int FUNC_0 (int**,int,int,int,int) ;
 int FUNC_1 (int**,int,int,int) ;
 int FUNC_2 (int**,int,int) ;
 int FUNC_3 (int**,int**,int,int) ;
 int FUNC_4 (int**,int) ;
 int FUNC_5 (int**,int,int,int,int) ;
 int FUNC_6 (int**,int,int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int*,int*,int) ;

void
FUNC_10 (lambda_matrix VAR_0, int VAR_1,
         lambda_matrix VAR_2, lambda_matrix VAR_3)
{
  lambda_vector VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;

  FUNC_3 (VAR_0, VAR_2, VAR_1, VAR_1);
  FUNC_4 (VAR_3, VAR_1);

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
      VAR_4 = VAR_2[VAR_6];


      for (VAR_5 = VAR_6; VAR_5 < VAR_1; VAR_5++)
 {
   if (VAR_4[VAR_5] < 0)
     {
       FUNC_2 (VAR_2, VAR_1, VAR_5);
       FUNC_9 (VAR_3[VAR_5], VAR_3[VAR_5], VAR_1);
     }
 }


      while (FUNC_7 (VAR_4, VAR_1, VAR_6 + 1) < VAR_1)
 {
   VAR_8 = FUNC_8 (VAR_4, VAR_1, VAR_6);
   FUNC_1 (VAR_2, VAR_1, VAR_6, VAR_8);
   FUNC_6 (VAR_3, VAR_6, VAR_8);

   for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_1; VAR_5++)
     {
       VAR_7 = VAR_4[VAR_5] / VAR_4[VAR_6];
       FUNC_0 (VAR_2, VAR_1, VAR_6, VAR_5, -1 * VAR_7);
       FUNC_5 (VAR_3, VAR_1, VAR_5, VAR_6, VAR_7);
     }
 }
    }
}
