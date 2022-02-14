
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv_cand {int pos; int var_after; int var_before; TYPE_1__* iv; } ;
typedef int block_stmt_iterator ;
struct TYPE_6__ {struct iv_cand* selected; } ;
struct TYPE_5__ {int preserve_biv; } ;
struct TYPE_4__ {int step; int base; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int,int *,int *) ;
 TYPE_3__* FUNC_3 (struct ivopts_data*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (struct ivopts_data*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (struct ivopts_data *VAR_0, struct iv_cand *VAR_1)
{
  block_stmt_iterator VAR_2;
  tree VAR_3;
  bool VAR_4 = 0;

  if (!VAR_1->iv)
    return;

  switch (VAR_1->pos)
    {
    case 129:
      VAR_2 = FUNC_1 (FUNC_6 (VAR_0->current_loop));
      break;

    case 130:
      VAR_2 = FUNC_1 (FUNC_5 (VAR_0->current_loop));
      VAR_4 = 1;
      break;

    case 128:

      FUNC_7 (VAR_0, VAR_1->var_before)->preserve_biv = 1;
      FUNC_7 (VAR_0, VAR_1->var_after)->preserve_biv = 1;


      FUNC_3 (VAR_0, VAR_1->var_after)->selected = VAR_1;

      return;
    }

  FUNC_4 (VAR_1->var_before);
  FUNC_0 (VAR_1->var_before);

  VAR_3 = FUNC_8 (VAR_1->iv->base);

  FUNC_2 (VAR_3, FUNC_8 (VAR_1->iv->step),
      VAR_1->var_before, VAR_0->current_loop,
      &VAR_2, VAR_4, &VAR_1->var_before, &VAR_1->var_after);
}
