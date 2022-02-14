
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct iv_use*) ;
 int FUNC_1 (int *,char*) ;
 struct iv_use* FUNC_2 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_3 (struct ivopts_data*) ;

void
FUNC_4 (FILE *VAR_0, struct ivopts_data *VAR_1)
{
  unsigned VAR_2;
  struct iv_use *VAR_3;

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_1); VAR_2++)
    {
      VAR_3 = FUNC_2 (VAR_1, VAR_2);

      FUNC_0 (VAR_0, VAR_3);
      FUNC_1 (VAR_0, "\n");
    }
}
