
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int** lambda_matrix ;


 int FUNC_0 (int) ;
 int FUNC_1 (int**,int,int,int,int) ;
 int FUNC_2 (int**,int,int,int) ;
 int FUNC_3 (int**,int,int,int) ;
 int FUNC_4 (int**,int,int) ;
 int FUNC_5 (int**,int**,int,int) ;
 int FUNC_6 (int**,int) ;
 int** FUNC_7 (int,int) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int*,int,int) ;

__attribute__((used)) static int
FUNC_10 (lambda_matrix VAR_0, lambda_matrix VAR_1, int VAR_2)
{
  lambda_vector VAR_3;
  lambda_matrix VAR_4;
  int VAR_5, VAR_6;
  int VAR_7;

  VAR_4 = FUNC_7 (VAR_2, VAR_2);
  FUNC_5 (VAR_0, VAR_4, VAR_2, VAR_2);
  FUNC_6 (VAR_1, VAR_2);




  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_3 = VAR_4[VAR_6];


      for (VAR_5 = VAR_6; VAR_5 < VAR_2; VAR_5++)
 if (VAR_3[VAR_5] < 0)
   {
     FUNC_4 (VAR_4, VAR_2, VAR_5);
     FUNC_4 (VAR_1, VAR_2, VAR_5);
   }



      while (FUNC_8 (VAR_3, VAR_2, VAR_6 + 1) < VAR_2)
 {
   int VAR_8 = FUNC_9 (VAR_3, VAR_2, VAR_6);
   FUNC_2 (VAR_4, VAR_2, VAR_6, VAR_8);
   FUNC_2 (VAR_1, VAR_2, VAR_6, VAR_8);

   for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_2; VAR_5++)
     {
       int VAR_9;

       VAR_9 = -1 * VAR_3[VAR_5];
       if (VAR_3[VAR_6] != 1)
  VAR_9 /= VAR_3[VAR_6];

       FUNC_1 (VAR_4, VAR_2, VAR_6, VAR_5, VAR_9);
       FUNC_1 (VAR_1, VAR_2, VAR_6, VAR_5, VAR_9);
     }
 }
    }





  VAR_7 = 1;
  for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--)
    {
      int VAR_10;

      VAR_3 = VAR_4[VAR_6];
      VAR_10 = VAR_3[VAR_6];


      FUNC_0 (VAR_10);

      VAR_7 = VAR_7 * VAR_10;




      if (VAR_10 != 1)
 {
   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
     FUNC_3 (VAR_1, VAR_2, VAR_5, VAR_10);
   for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_2; VAR_5++)
     FUNC_3 (VAR_1, VAR_2, VAR_5, VAR_10);

   VAR_3[VAR_6] = VAR_10 = 1;
 }


      for (VAR_5 = VAR_6 - 1; VAR_5 >= 0; VAR_5--)
 {
   if (VAR_3[VAR_5])
     {
       int VAR_11 = -VAR_3[VAR_5];
       FUNC_1 (VAR_4, VAR_2, VAR_6, VAR_5, VAR_11);
       FUNC_1 (VAR_1, VAR_2, VAR_6, VAR_5, VAR_11);
     }

 }
    }

  return VAR_7;
}
