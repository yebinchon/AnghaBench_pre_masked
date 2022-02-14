
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct ivopts_data {int current_loop; } ;
struct iv_use {int * op_p; int stmt; } ;
struct iv_cand {int dummy; } ;
struct affine_tree_combination {int dummy; } ;
typedef int block_stmt_iterator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,struct affine_tree_combination*) ;
 int FUNC_4 (int ,struct iv_use*,struct iv_cand*,int ,struct affine_tree_combination*) ;
 int FUNC_5 (struct affine_tree_combination*) ;

__attribute__((used)) static void
FUNC_6 (struct ivopts_data *VAR_0,
       struct iv_use *VAR_1, struct iv_cand *VAR_2)
{
  struct affine_tree_combination VAR_3;
  block_stmt_iterator VAR_4 = FUNC_1 (VAR_1->stmt);
  tree VAR_5;

  FUNC_4 (VAR_0->current_loop, VAR_1, VAR_2, VAR_1->stmt, &VAR_3);
  FUNC_5 (&VAR_3);

  VAR_5 = FUNC_3 (&VAR_4, FUNC_0 (*VAR_1->op_p), &VAR_3);
  FUNC_2 (VAR_5, *VAR_1->op_p);
  *VAR_1->op_p = VAR_5;
}
