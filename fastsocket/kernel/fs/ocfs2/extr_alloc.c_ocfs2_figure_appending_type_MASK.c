
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_insert_type {int ins_appending; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_tree_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ocfs2_extent_rec*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_insert_type *VAR_2,
     struct ocfs2_extent_list *VAR_3,
     struct ocfs2_extent_rec *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = FUNC_2(VAR_4->e_cpos);
 struct ocfs2_extent_rec *VAR_7;

 VAR_2->ins_appending = VAR_0;

 FUNC_0(FUNC_1(VAR_3->l_tree_depth) != 0);

 if (!VAR_3->l_next_free_rec)
  goto set_tail_append;

 if (FUNC_3(&VAR_3->l_recs[0])) {

  if (FUNC_1(VAR_3->l_next_free_rec) == 1)
   goto set_tail_append;
 }

 VAR_5 = FUNC_1(VAR_3->l_next_free_rec) - 1;
 VAR_7 = &VAR_3->l_recs[VAR_5];

 if (VAR_6 >=
     (FUNC_2(VAR_7->e_cpos) + FUNC_1(VAR_7->e_leaf_clusters)))
  goto set_tail_append;

 return;

set_tail_append:
 VAR_2->ins_appending = VAR_1;
}
