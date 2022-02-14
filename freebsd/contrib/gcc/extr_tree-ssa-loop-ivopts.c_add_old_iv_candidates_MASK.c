
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv_cand {int var_after; int var_before; } ;
struct iv {int ssa_name; int step; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ivopts_data*,int ,int ,int,int *) ;
 struct iv_cand* FUNC_5 (struct ivopts_data*,int ,int ,int,int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (struct ivopts_data *VAR_2, struct iv *VAR_3)
{
  tree VAR_4, VAR_5;
  struct iv_cand *VAR_6;

  FUNC_4 (VAR_2, VAR_3->base, VAR_3->step, 1, ((void*)0));


  FUNC_4 (VAR_2,
   FUNC_6 (FUNC_3 (VAR_3->base), 0),
   VAR_3->step, 1, ((void*)0));

  VAR_4 = FUNC_1 (VAR_3->ssa_name);
  if (FUNC_2 (VAR_4) == VAR_1)
    {


      VAR_5 = FUNC_0 (VAR_4, FUNC_7 (VAR_2->current_loop));
      VAR_6 = FUNC_5 (VAR_2,
         VAR_3->base, VAR_3->step, 1, VAR_0, ((void*)0),
         FUNC_1 (VAR_5));
      VAR_6->var_before = VAR_3->ssa_name;
      VAR_6->var_after = VAR_5;
    }
}
