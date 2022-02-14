
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef int lambda_trans_matrix ;
typedef int** lambda_matrix ;
typedef int lambda_loopnest ;
typedef int lambda_loop ;
typedef int * lambda_linear_expression ;
typedef int lambda_lattice ;


 int** FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int** FUNC_2 (int ) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int,int,int**,int**,int*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int**,int,int**,int,int**,int,int) ;
 int FUNC_19 (int ,int**,int) ;
 int FUNC_20 (int**,int**,int**,int,int,int) ;
 int** FUNC_21 (int,int) ;
 int FUNC_22 (int**,int,int,int ,int*) ;
 int FUNC_23 (int*,int,int*,int,int*,int) ;
 int* FUNC_24 (int) ;

__attribute__((used)) static lambda_loopnest
FUNC_25 (lambda_loopnest VAR_0,
    lambda_trans_matrix VAR_1)
{
  lambda_matrix VAR_2, VAR_3, VAR_4, VAR_5;
  lambda_vector VAR_6, VAR_7;
  lambda_matrix VAR_8;
  int VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;
  lambda_loop VAR_14;
  lambda_linear_expression VAR_15;
  lambda_lattice VAR_16;

  VAR_9 = FUNC_11 (VAR_0);
  VAR_10 = FUNC_12 (VAR_0);




  VAR_2 = FUNC_21 (128, VAR_9);
  VAR_3 = FUNC_21 (128, VAR_10);
  VAR_6 = FUNC_24 (128);

  VAR_4 = FUNC_21 (128, VAR_9);
  VAR_5 = FUNC_21 (128, VAR_10);
  VAR_7 = FUNC_24 (128);





  VAR_11 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
    {
      VAR_14 = FUNC_13 (VAR_0)[VAR_12];


      if (FUNC_9 (VAR_14) > 0)
 VAR_15 = FUNC_8 (VAR_14);
      else
 VAR_15 = FUNC_10 (VAR_14);

      for (; VAR_15 != ((void*)0); VAR_15 = FUNC_7 (VAR_15))
 {

   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
     VAR_2[VAR_11][VAR_13] = FUNC_3 (VAR_15)[VAR_13];


   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
     VAR_3[VAR_11][VAR_13] = FUNC_6 (VAR_15)[VAR_13];


   VAR_6[VAR_11] = FUNC_4 (VAR_15);



   VAR_2[VAR_11][VAR_12] = -1 * FUNC_5 (VAR_15);
   VAR_6[VAR_11] *= -1;
   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
     VAR_3[VAR_11][VAR_13] *= -1;

   VAR_11++;

   FUNC_16 (VAR_11 <= 127);

 }


      if (FUNC_9 (VAR_14) > 0)
 VAR_15 = FUNC_10 (VAR_14);
      else
 VAR_15 = FUNC_8 (VAR_14);

      for (; VAR_15 != ((void*)0); VAR_15 = FUNC_7 (VAR_15))
 {

   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
     VAR_2[VAR_11][VAR_13] = FUNC_3 (VAR_15)[VAR_13];


   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
     VAR_3[VAR_11][VAR_13] = FUNC_6 (VAR_15)[VAR_13];


   VAR_6[VAR_11] = FUNC_4 (VAR_15);


   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
     VAR_2[VAR_11][VAR_13] *= -1;
   VAR_2[VAR_11][VAR_12] = FUNC_5 (VAR_15);
   VAR_11++;

   FUNC_16 (VAR_11 <= 127);

 }
    }



  VAR_16 = FUNC_17 (VAR_0);




  FUNC_20 (VAR_2, FUNC_0 (VAR_16), VAR_4, VAR_11, VAR_9, VAR_9);


  FUNC_22 (VAR_2, VAR_11, VAR_9, FUNC_1 (VAR_16), VAR_7);
  FUNC_23 (VAR_6, 1, VAR_7, -1, VAR_7, VAR_11);


  FUNC_20 (VAR_2, FUNC_2 (VAR_16), VAR_5, VAR_11, VAR_9,
        VAR_10);
  FUNC_18 (VAR_3, 1, VAR_5, -1, VAR_5, VAR_11, VAR_10);




  VAR_8 = FUNC_21 (VAR_9, VAR_9);


  FUNC_19 (FUNC_14 (VAR_1),
    VAR_8, VAR_9);


  FUNC_20 (VAR_4, VAR_8, VAR_2, VAR_11, VAR_9, VAR_9);

  return FUNC_15 (VAR_11, VAR_9, VAR_10,
          VAR_2, VAR_5, VAR_7);
}
