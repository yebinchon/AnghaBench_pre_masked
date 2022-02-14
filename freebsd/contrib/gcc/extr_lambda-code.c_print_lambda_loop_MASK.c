
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lambda_loop ;
typedef int * lambda_linear_expression ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int,int,char) ;

void
FUNC_8 (FILE * VAR_0, lambda_loop VAR_1, int VAR_2,
     int VAR_3, char VAR_4)
{
  int VAR_5;
  lambda_linear_expression VAR_6;

  FUNC_6 (VAR_1);

  VAR_6 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_3 (VAR_1);
  FUNC_5 (VAR_0, "  step size = %d \n", VAR_5);

  if (VAR_6)
    {
      FUNC_5 (VAR_0, "  linear offset: \n");
      FUNC_7 (VAR_0, VAR_6, VAR_2, VAR_3,
          VAR_4);
    }

  FUNC_5 (VAR_0, "  lower bound: \n");
  for (VAR_6 = FUNC_2 (VAR_1); VAR_6 != ((void*)0); VAR_6 = FUNC_0 (VAR_6))
    FUNC_7 (VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
  FUNC_5 (VAR_0, "  upper bound: \n");
  for (VAR_6 = FUNC_4 (VAR_1); VAR_6 != ((void*)0); VAR_6 = FUNC_0 (VAR_6))
    FUNC_7 (VAR_0, VAR_6, VAR_2, VAR_3, VAR_4);
}
