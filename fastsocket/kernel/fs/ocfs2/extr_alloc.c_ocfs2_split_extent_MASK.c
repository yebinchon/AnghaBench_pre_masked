
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_merge_ctxt {scalar_t__ c_contig_type; int c_split_covers_rec; int c_has_empty_extent; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {scalar_t__ e_cpos; scalar_t__ e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int,scalar_t__,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_extent_tree*) ;
 scalar_t__ FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_list*,int,struct ocfs2_extent_rec*) ;
 int FUNC_8 (struct ocfs2_extent_rec*) ;
 int FUNC_9 (int ,int ,struct buffer_head**) ;
 int FUNC_10 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_list*,int,struct ocfs2_extent_rec*) ;
 int FUNC_11 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct buffer_head**,int,struct ocfs2_extent_rec*,struct ocfs2_alloc_context*) ;
 int FUNC_12 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,struct ocfs2_extent_rec*,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_merge_ctxt*) ;
 struct ocfs2_extent_list* FUNC_13 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_14 (struct ocfs2_path*) ;

int FUNC_15(handle_t *VAR_2,
         struct ocfs2_extent_tree *VAR_3,
         struct ocfs2_path *VAR_4,
         int VAR_5,
         struct ocfs2_extent_rec *VAR_6,
         struct ocfs2_alloc_context *VAR_7,
         struct ocfs2_cached_dealloc_ctxt *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_extent_list *VAR_10 = FUNC_13(VAR_4);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_extent_rec *VAR_12 = &VAR_10->l_recs[VAR_5];
 struct ocfs2_merge_ctxt VAR_13;
 struct ocfs2_extent_list *VAR_14;

 if (FUNC_2(VAR_12->e_cpos) > FUNC_2(VAR_6->e_cpos) ||
     ((FUNC_2(VAR_12->e_cpos) + FUNC_1(VAR_12->e_leaf_clusters)) <
      (FUNC_2(VAR_6->e_cpos) + FUNC_1(VAR_6->e_leaf_clusters)))) {
  VAR_9 = -VAR_1;
  FUNC_4(VAR_9);
  goto out;
 }

 VAR_13.c_contig_type = FUNC_7(VAR_3, VAR_4, VAR_10,
           VAR_5,
           VAR_6);






 if (VAR_4->p_tree_depth) {
  struct ocfs2_extent_block *VAR_15;

  VAR_9 = FUNC_9(VAR_3->et_ci,
           FUNC_6(VAR_3),
           &VAR_11);
  if (VAR_9) {
   FUNC_5(VAR_9);
   goto out;
  }

  VAR_15 = (struct ocfs2_extent_block *) VAR_11->b_data;
  VAR_14 = &VAR_15->h_list;
 } else
  VAR_14 = FUNC_14(VAR_4);

 if (VAR_12->e_cpos == VAR_6->e_cpos &&
     VAR_12->e_leaf_clusters == VAR_6->e_leaf_clusters)
  VAR_13.c_split_covers_rec = 1;
 else
  VAR_13.c_split_covers_rec = 0;

 VAR_13.c_has_empty_extent = FUNC_8(&VAR_10->l_recs[0]);

 FUNC_3(0, "index: %d, contig: %u, has_empty: %u, split_covers: %u\n",
      VAR_5, VAR_13.c_contig_type, VAR_13.c_has_empty_extent,
      VAR_13.c_split_covers_rec);

 if (VAR_13.c_contig_type == VAR_0) {
  if (VAR_13.c_split_covers_rec)
   VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_10,
             VAR_5, VAR_6);
  else
   VAR_9 = FUNC_11(VAR_2, VAR_3, VAR_4,
           &VAR_11, VAR_5,
           VAR_6, VAR_7);
  if (VAR_9)
   FUNC_4(VAR_9);
 } else {
  VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6,
      VAR_8, &VAR_13);
  if (VAR_9)
   FUNC_4(VAR_9);
 }

out:
 FUNC_0(VAR_11);
 return VAR_9;
}
