
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lambda_loopnest ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,int,int ,char) ;

void
FUNC_5 (FILE * VAR_0, lambda_loopnest VAR_1, char VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_1); VAR_3++)
    {
      FUNC_3 (VAR_0, "Loop %c\n", VAR_2 + VAR_3);
      FUNC_4 (VAR_0, FUNC_2 (VAR_1)[VAR_3], FUNC_0 (VAR_1),
    FUNC_1 (VAR_1), 'i');
      FUNC_3 (VAR_0, "\n");
    }
}
