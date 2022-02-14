
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int type; } ;
struct iv_cand {int dummy; } ;





 int FUNC_0 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 int FUNC_1 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 int FUNC_2 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 int FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4 (struct ivopts_data *VAR_0,
         struct iv_use *VAR_1, struct iv_cand *VAR_2)
{
  switch (VAR_1->type)
    {
    case 128:
      return FUNC_2 (VAR_0, VAR_1, VAR_2);

    case 130:
      return FUNC_0 (VAR_0, VAR_1, VAR_2);

    case 129:
      return FUNC_1 (VAR_0, VAR_1, VAR_2);

    default:
      FUNC_3 ();
    }
}
