
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_ref_s {scalar_t__ use_se_hash; scalar_t__ merged_def_se_hash; scalar_t__ unmerged_def_se_hash; } ;
typedef scalar_t__ splay_tree_value ;


 int FUNC_0 (struct see_ref_s*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (splay_tree_value VAR_0)
{
  struct see_ref_s *VAR_1 = (struct see_ref_s *)VAR_0;

  if (VAR_1->unmerged_def_se_hash)
    FUNC_1 (VAR_1->unmerged_def_se_hash);
  if (VAR_1->merged_def_se_hash)
    FUNC_1 (VAR_1->merged_def_se_hash);
  if (VAR_1->use_se_hash)
    FUNC_1 (VAR_1->use_se_hash);
  FUNC_0 (VAR_1);
}
