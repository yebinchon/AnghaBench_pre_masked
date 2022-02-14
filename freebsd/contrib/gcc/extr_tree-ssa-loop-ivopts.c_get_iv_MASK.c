
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv {int dummy; } ;
typedef int basic_block ;
struct TYPE_2__ {struct iv* iv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (struct ivopts_data*,int ) ;
 int FUNC_4 (struct ivopts_data*,int ,int ,int ) ;

__attribute__((used)) static struct iv *
FUNC_5 (struct ivopts_data *VAR_1, tree VAR_2)
{
  basic_block VAR_3;

  if (!FUNC_3 (VAR_1, VAR_2)->iv)
    {
      VAR_3 = FUNC_1 (FUNC_0 (VAR_2));

      if (!VAR_3
   || !FUNC_2 (VAR_1->current_loop, VAR_3))
 FUNC_4 (VAR_1, VAR_2, VAR_2, VAR_0);
    }

  return FUNC_3 (VAR_1, VAR_2)->iv;
}
