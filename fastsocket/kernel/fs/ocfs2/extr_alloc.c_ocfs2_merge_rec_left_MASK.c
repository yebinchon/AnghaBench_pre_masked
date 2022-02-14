
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; int e_cpos; } ;
struct ocfs2_extent_list {int l_next_free_rec; struct ocfs2_extent_rec* l_recs; int l_count; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_10__ {int h_buffer_credits; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_9__ {struct buffer_head* bh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_extent_list*,int) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (TYPE_2__*,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_10 (TYPE_2__*,int,int ,struct ocfs2_path*) ;
 int FUNC_11 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_12 (struct ocfs2_path*) ;
 int FUNC_13 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path**) ;
 scalar_t__ FUNC_14 (struct ocfs2_extent_rec*) ;
 int FUNC_15 (TYPE_2__*,struct buffer_head*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_18 (TYPE_2__*,int ,struct ocfs2_path*,int) ;
 int FUNC_19 (TYPE_2__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 struct buffer_head* FUNC_20 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_21 (struct ocfs2_path*) ;
 int FUNC_22 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_23(struct ocfs2_path *VAR_0,
    handle_t *VAR_1,
    struct ocfs2_extent_tree *VAR_2,
    struct ocfs2_extent_rec *VAR_3,
    struct ocfs2_cached_dealloc_ctxt *VAR_4,
    int VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;
 unsigned int VAR_10 = FUNC_2(VAR_3->e_leaf_clusters);
 struct ocfs2_extent_rec *VAR_11;
 struct ocfs2_extent_rec *VAR_12;
 struct ocfs2_extent_list *VAR_13 = FUNC_21(VAR_0);
 struct buffer_head *VAR_14 = FUNC_20(VAR_0);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_path *VAR_16 = ((void*)0);
 struct ocfs2_extent_list *VAR_17;

 FUNC_0(VAR_5 < 0);

 VAR_12 = &VAR_13->l_recs[VAR_5];
 if (VAR_5 == 0) {

  VAR_6 = FUNC_13(VAR_2, VAR_0, &VAR_16);
  if (VAR_6) {
   FUNC_6(VAR_6);
   goto out;
  }

  VAR_17 = FUNC_21(VAR_16);
  FUNC_0(FUNC_2(VAR_17->l_next_free_rec) !=
         FUNC_2(VAR_17->l_count));

  VAR_11 = &VAR_17->l_recs[
    FUNC_2(VAR_17->l_next_free_rec) - 1];
  FUNC_0(FUNC_4(VAR_11->e_cpos) +
         FUNC_2(VAR_11->e_leaf_clusters) !=
         FUNC_4(VAR_3->e_cpos));

  VAR_8 = FUNC_11(VAR_2, VAR_16,
       VAR_0);

  VAR_6 = FUNC_10(VAR_1, VAR_8,
            VAR_1->h_buffer_credits,
            VAR_16);
  if (VAR_6) {
   FUNC_6(VAR_6);
   goto out;
  }

  VAR_15 = VAR_16->p_node[VAR_8].bh;
  FUNC_0(VAR_15 != VAR_0->p_node[VAR_8].bh);

  VAR_6 = FUNC_18(VAR_1, VAR_2->et_ci, VAR_0,
         VAR_8);
  if (VAR_6) {
   FUNC_6(VAR_6);
   goto out;
  }

  for (VAR_7 = VAR_8 + 1;
       VAR_7 < FUNC_22(VAR_0); VAR_7++) {
   VAR_6 = FUNC_18(VAR_1, VAR_2->et_ci,
          VAR_0, VAR_7);
   if (VAR_6) {
    FUNC_6(VAR_6);
    goto out;
   }

   VAR_6 = FUNC_18(VAR_1, VAR_2->et_ci,
          VAR_16, VAR_7);
   if (VAR_6) {
    FUNC_6(VAR_6);
    goto out;
   }
  }
 } else {
  VAR_11 = &VAR_13->l_recs[VAR_5 - 1];
  if (FUNC_14(&VAR_13->l_recs[0]))
   VAR_9 = 1;
 }

 VAR_6 = FUNC_18(VAR_1, VAR_2->et_ci, VAR_0,
        FUNC_22(VAR_0) - 1);
 if (VAR_6) {
  FUNC_6(VAR_6);
  goto out;
 }

 if (VAR_9 && VAR_5 == 1) {



  *VAR_11 = *VAR_3;

  VAR_9 = 0;
 } else
  FUNC_1(&VAR_11->e_leaf_clusters, VAR_10);

 FUNC_3(&VAR_12->e_cpos, VAR_10);
 FUNC_5(&VAR_12->e_blkno,
       FUNC_8(FUNC_16(VAR_2->et_ci),
           VAR_10));
 FUNC_1(&VAR_12->e_leaf_clusters, -VAR_10);

 FUNC_7(VAR_13, VAR_5);

 VAR_6 = FUNC_15(VAR_1, VAR_14);
 if (VAR_6)
  FUNC_6(VAR_6);

 if (VAR_16) {
  VAR_6 = FUNC_15(VAR_1, FUNC_20(VAR_16));
  if (VAR_6)
   FUNC_6(VAR_6);






  if (FUNC_2(VAR_12->e_leaf_clusters) == 0 &&
      FUNC_2(VAR_13->l_next_free_rec) == 1) {

   VAR_6 = FUNC_19(VAR_1, VAR_2,
         VAR_0,
         VAR_4);
   if (VAR_6) {
    FUNC_6(VAR_6);
    goto out;
   }




   FUNC_17(VAR_0, VAR_16);
   VAR_16 = ((void*)0);
  } else
   FUNC_9(VAR_1, VAR_16,
         VAR_0, VAR_8);
 }
out:
 if (VAR_16)
  FUNC_12(VAR_16);
 return VAR_6;
}
