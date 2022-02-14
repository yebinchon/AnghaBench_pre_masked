
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
struct iv_use {TYPE_1__* iv; } ;
struct iv_cand {int dummy; } ;
struct affine_tree_combination {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct affine_tree_combination*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct loop*,struct iv_use*,struct iv_cand*,int ,struct affine_tree_combination*) ;
 int FUNC_4 (struct affine_tree_combination*) ;

__attribute__((used)) static tree
FUNC_5 (struct loop *VAR_1,
      struct iv_use *VAR_2, struct iv_cand *VAR_3, tree VAR_4)
{
  struct affine_tree_combination VAR_5;
  tree VAR_6 = FUNC_0 (VAR_2->iv->base);

  if (!FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5))
    return VAR_0;
  FUNC_4 (&VAR_5);
  return FUNC_2 (VAR_6, FUNC_1 (&VAR_5));
}
