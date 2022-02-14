
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {struct iv_cand* selected; } ;
struct iv_cand {int dummy; } ;


 int FUNC_0 (struct iv_cand*) ;
 struct iv_use* FUNC_1 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_2 (struct ivopts_data*) ;
 int FUNC_3 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_0)
{
  unsigned VAR_1;
  struct iv_cand *VAR_2;
  struct iv_use *VAR_3;

  for (VAR_1 = 0; VAR_1 < FUNC_2 (VAR_0); VAR_1++)
    {
      VAR_3 = FUNC_1 (VAR_0, VAR_1);
      VAR_2 = VAR_3->selected;
      FUNC_0 (VAR_2);

      FUNC_3 (VAR_0, VAR_3, VAR_2);
    }
}
