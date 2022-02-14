
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; int e_int_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {unsigned long long h_next_leaf_blk; struct ocfs2_extent_list h_list; } ;
struct TYPE_9__ {scalar_t__ h_buffer_credits; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_10__ {scalar_t__ b_data; } ;
struct TYPE_8__ {int bh; struct ocfs2_extent_list* el; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (int ,TYPE_2__*,struct ocfs2_path*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 TYPE_3__* FUNC_10 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_0,
         struct ocfs2_extent_tree *VAR_1,
         int VAR_2, struct ocfs2_path *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct ocfs2_extent_rec *VAR_7;
 struct ocfs2_extent_list *VAR_8;
 struct ocfs2_extent_block *VAR_9;
 u32 VAR_10;
 VAR_6 = FUNC_6(VAR_0,
     VAR_0->h_buffer_credits + VAR_2);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_7(VAR_1->et_ci, VAR_0, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }


 VAR_9 = (struct ocfs2_extent_block *)FUNC_10(VAR_3)->b_data;
 FUNC_0(VAR_9->h_next_leaf_blk != 0ULL);

 VAR_8 = &VAR_9->h_list;
 FUNC_0(FUNC_2(VAR_8->l_next_free_rec) == 0);
 VAR_5 = FUNC_2(VAR_8->l_next_free_rec) - 1;
 VAR_7 = &VAR_8->l_recs[VAR_5];
 VAR_10 = FUNC_4(VAR_7->e_cpos) + FUNC_9(VAR_8, VAR_7);

 for (VAR_4 = 0; VAR_4 < VAR_3->p_tree_depth; VAR_4++) {
  VAR_8 = VAR_3->p_node[VAR_4].el;
  VAR_5 = FUNC_2(VAR_8->l_next_free_rec) - 1;
  VAR_7 = &VAR_8->l_recs[VAR_5];

  VAR_7->e_int_clusters = FUNC_1(VAR_10);
  FUNC_3(&VAR_7->e_int_clusters, -FUNC_4(VAR_7->e_cpos));

  FUNC_8(VAR_0, VAR_3->p_node[VAR_4].bh);
 }
out:
 return VAR_6;
}
