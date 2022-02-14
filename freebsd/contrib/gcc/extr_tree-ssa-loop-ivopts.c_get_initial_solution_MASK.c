
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_ca {int dummy; } ;


 int FUNC_0 (struct iv_ca**) ;
 struct iv_ca* FUNC_1 (struct ivopts_data*) ;
 int FUNC_2 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_3 (struct ivopts_data*) ;
 int FUNC_4 (struct ivopts_data*,struct iv_ca*,int ) ;

__attribute__((used)) static struct iv_ca *
FUNC_5 (struct ivopts_data *VAR_0)
{
  struct iv_ca *VAR_1 = FUNC_1 (VAR_0);
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_0); VAR_2++)
    if (!FUNC_4 (VAR_0, VAR_1, FUNC_2 (VAR_0, VAR_2)))
      {
 FUNC_0 (&VAR_1);
 return ((void*)0);
      }

  return VAR_1;
}
