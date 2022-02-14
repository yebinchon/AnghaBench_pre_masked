
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int type; int stmt; } ;
struct iv_cand {int dummy; } ;





 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 int FUNC_3 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 int FUNC_4 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;

__attribute__((used)) static void
FUNC_5 (struct ivopts_data *VAR_0,
      struct iv_use *VAR_1, struct iv_cand *VAR_2)
{
  switch (VAR_1->type)
    {
      case 128:
 FUNC_4 (VAR_0, VAR_1, VAR_2);
 break;

      case 130:
 FUNC_2 (VAR_0, VAR_1, VAR_2);
 break;

      case 129:
 FUNC_3 (VAR_0, VAR_1, VAR_2);
 break;

      default:
 FUNC_0 ();
    }
  FUNC_1 (VAR_1->stmt);
}
