
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int** lambda_matrix ;
typedef int lambda_loopnest ;
typedef int lambda_loop ;
typedef int lambda_linear_expression ;
typedef int lambda_lattice ;


 int** FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int ) ;
 scalar_t__** FUNC_2 (int ) ;
 int* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int* FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static lambda_lattice
FUNC_15 (lambda_loopnest VAR_0)
{
  lambda_lattice VAR_1;
  int VAR_2, VAR_3;
  lambda_matrix VAR_4;

  int VAR_5, VAR_6, VAR_7;
  lambda_loop VAR_8;
  lambda_linear_expression VAR_9;

  VAR_2 = FUNC_10 (VAR_0);
  VAR_3 = FUNC_11 (VAR_0);

  VAR_1 = FUNC_14 (VAR_2, VAR_3);
  VAR_4 = FUNC_0 (VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      VAR_8 = FUNC_12 (VAR_0)[VAR_5];
      FUNC_13 (VAR_8);
      VAR_7 = FUNC_9 (VAR_8);


      if (VAR_7 == 1)
 {
   for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
     VAR_4[VAR_5][VAR_6] = 0;
   VAR_4[VAR_5][VAR_5] = 1;
   FUNC_1 (VAR_1)[VAR_5] = 0;
   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
     FUNC_2 (VAR_1)[VAR_5][VAR_6] = 0;
 }
      else
 {


   VAR_9 = FUNC_8 (VAR_8);
   FUNC_13 (VAR_9 && !FUNC_7 (VAR_9)
        && FUNC_5 (VAR_9) == 1);



   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
     VAR_4[VAR_5][VAR_6] = FUNC_3 (VAR_9)[VAR_6]
       * FUNC_9 (FUNC_12 (VAR_0)[VAR_6]);
   VAR_4[VAR_5][VAR_5] = VAR_7;
   for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_2; VAR_6++)
     VAR_4[VAR_5][VAR_6] = 0;



   FUNC_1 (VAR_1)[VAR_5] = FUNC_4 (VAR_9);



   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
     FUNC_2 (VAR_1)[VAR_5][VAR_6] =
       FUNC_6 (VAR_9)[VAR_6];
 }
    }
  return VAR_1;
}
