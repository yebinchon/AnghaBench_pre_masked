
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv_cand {unsigned int cost; scalar_t__ pos; int var_before; TYPE_1__* iv; } ;
struct TYPE_2__ {int base; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct ivopts_data*,int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (struct ivopts_data *VAR_3, struct iv_cand *VAR_4)
{
  unsigned VAR_5, VAR_6;
  tree VAR_7;

  if (!VAR_4->iv)
    {
      VAR_4->cost = 0;
      return;
    }





  VAR_7 = VAR_4->iv->base;
  VAR_5 = FUNC_7 (VAR_3, VAR_7, ((void*)0));
  VAR_6 = FUNC_5 (FUNC_4 (FUNC_3 (VAR_7)));

  VAR_4->cost = VAR_6 + VAR_5 / FUNC_0 (VAR_2);




  if (VAR_4->pos == VAR_1
      && !FUNC_1 (FUNC_2 (VAR_4->var_before)))
    VAR_4->cost--;



  if (VAR_4->pos == VAR_0
      && FUNC_6 (FUNC_8 (VAR_3->current_loop)))
    VAR_4->cost++;
}
