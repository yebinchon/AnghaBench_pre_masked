
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_cpos; int e_blkno; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {scalar_t__ h_next_leaf_blk; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct TYPE_11__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;
struct TYPE_12__ {scalar_t__ b_data; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_7 (int ,char*,unsigned long long,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_rec*) ;
 int FUNC_10 (struct ocfs2_extent_list*,int) ;
 int FUNC_11 (struct super_block*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_13 (TYPE_1__*,int ,int ,struct ocfs2_path*) ;
 int FUNC_14 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_15 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_16 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_17 (struct ocfs2_path*) ;
 scalar_t__ FUNC_18 (struct ocfs2_extent_rec*) ;
 int FUNC_19 (int ,TYPE_1__*,struct ocfs2_path*) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*) ;
 struct super_block* FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 struct ocfs2_path* FUNC_23 (struct ocfs2_path*) ;
 scalar_t__ FUNC_24 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_25 (TYPE_1__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 TYPE_2__* FUNC_26 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_27 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_28(handle_t *VAR_2,
         struct ocfs2_extent_tree *VAR_3,
         struct ocfs2_path *VAR_4, int VAR_5,
         struct ocfs2_cached_dealloc_ctxt *VAR_6,
         u32 VAR_7, u32 VAR_8)
{
 int VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14 = 0;
 struct super_block *VAR_15 = FUNC_21(VAR_3->et_ci);
 struct ocfs2_path *VAR_16 = ((void*)0);
 struct ocfs2_extent_list *VAR_17 = FUNC_27(VAR_4);
 struct ocfs2_extent_rec *VAR_18;
 struct ocfs2_extent_block *VAR_19;

 if (FUNC_18(&VAR_17->l_recs[0]) && VAR_5 > 0) {
  VAR_9 = FUNC_25(VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_9) {
   FUNC_8(VAR_9);
   goto out;
  }

  VAR_5--;
 }

 if (VAR_5 == (FUNC_2(VAR_17->l_next_free_rec) - 1) &&
     VAR_4->p_tree_depth) {






  VAR_19 = (struct ocfs2_extent_block *)FUNC_26(VAR_4)->b_data;
  if (VAR_19->h_next_leaf_blk == 0)
   VAR_14 = 1;
 }

 VAR_18 = &VAR_17->l_recs[VAR_5];
 if (VAR_5 == 0 && VAR_4->p_tree_depth &&
     FUNC_4(VAR_18->e_cpos) == VAR_7) {
  VAR_9 = FUNC_14(VAR_15, VAR_4, &VAR_10);
  if (VAR_9) {
   FUNC_8(VAR_9);
   goto out;
  }

  if (VAR_10 && FUNC_2(VAR_17->l_next_free_rec) > 1) {
   VAR_16 = FUNC_23(VAR_4);
   if (!VAR_16) {
    VAR_9 = -VAR_0;
    FUNC_8(VAR_9);
    goto out;
   }

   VAR_9 = FUNC_15(VAR_3->et_ci, VAR_16,
           VAR_10);
   if (VAR_9) {
    FUNC_8(VAR_9);
    goto out;
   }
  }
 }

 VAR_9 = FUNC_13(VAR_2, 0,
           VAR_2->h_buffer_credits,
           VAR_4);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_19(VAR_3->et_ci, VAR_2, VAR_4);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_19(VAR_3->et_ci, VAR_2, VAR_16);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_4(VAR_18->e_cpos) + FUNC_24(VAR_17, VAR_18);
 VAR_12 = VAR_7 + VAR_8;

 if (FUNC_4(VAR_18->e_cpos) == VAR_7 && VAR_11 == VAR_12) {
  int VAR_20;

  FUNC_6(VAR_18, 0, sizeof(*VAR_18));
  FUNC_10(VAR_17, VAR_5);
  VAR_13 = 1;

  VAR_20 = FUNC_2(VAR_17->l_next_free_rec);
  if (VAR_14 && VAR_20 > 1) {




   VAR_18 = &VAR_17->l_recs[VAR_20 - 1];
   FUNC_9(VAR_2, VAR_3, VAR_4,
             VAR_18);
  }
 } else if (FUNC_4(VAR_18->e_cpos) == VAR_7) {

  FUNC_3(&VAR_18->e_cpos, VAR_8);
  FUNC_5(&VAR_18->e_blkno, FUNC_11(VAR_15, VAR_8));
  FUNC_1(&VAR_18->e_leaf_clusters, -VAR_8);
 } else if (VAR_11 == VAR_12) {

  FUNC_1(&VAR_18->e_leaf_clusters, -VAR_8);
  if (VAR_14)
   FUNC_9(VAR_2, VAR_3, VAR_4, VAR_18);
 } else {

  FUNC_7(VAR_1, "Owner %llu: Invalid record truncate: (%u, %u) "
       "(%u, %u)\n",
       (unsigned long long)FUNC_22(VAR_3->et_ci),
       FUNC_4(VAR_18->e_cpos),
       FUNC_2(VAR_18->e_leaf_clusters), VAR_7, VAR_8);
  FUNC_0();
 }

 if (VAR_16) {
  int VAR_21;

  VAR_21 = FUNC_16(VAR_3, VAR_16, VAR_4);
  FUNC_12(VAR_2, VAR_16, VAR_4,
        VAR_21);
 }

 FUNC_20(VAR_2, FUNC_26(VAR_4));

 VAR_9 = FUNC_25(VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_9) {
  FUNC_8(VAR_9);
  goto out;
 }

out:
 FUNC_17(VAR_16);
 return VAR_9;
}
