
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_truncate_context {int tc_dealloc; } ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_path {unsigned long long p_tree_depth; } ;
struct ocfs2_extent_list {TYPE_3__* l_recs; int l_next_free_rec; } ;
struct TYPE_6__ {int i_list; } ;
struct ocfs2_dinode {int i_refcount_loc; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_9__ {scalar_t__ ip_clusters; int ip_dyn_features; scalar_t__ ip_blkno; } ;
struct TYPE_8__ {int e_flags; int e_blkno; int e_cpos; } ;
struct TYPE_7__ {scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,scalar_t__,unsigned long long) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,struct ocfs2_dinode*,struct ocfs2_extent_list*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (struct ocfs2_super*,int *) ;
 int FUNC_20 (struct ocfs2_super*,scalar_t__,struct inode*,struct buffer_head*,int *,struct ocfs2_truncate_context*,struct ocfs2_path*,struct ocfs2_alloc_context*) ;
 int FUNC_21 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_22 (struct inode*,scalar_t__) ;
 int FUNC_23 (int ,struct ocfs2_path*,int ) ;
 int FUNC_24 (struct ocfs2_alloc_context*) ;
 int FUNC_25 (struct ocfs2_path*) ;
 int FUNC_26 (struct ocfs2_truncate_context*) ;
 scalar_t__ FUNC_27 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_28 (struct ocfs2_super*,scalar_t__,int,struct ocfs2_refcount_tree**,int *) ;
 struct ocfs2_path* FUNC_29 (struct buffer_head*,int *,int ) ;
 int FUNC_30 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,int*,struct ocfs2_alloc_context**) ;
 scalar_t__ FUNC_31 (struct ocfs2_extent_list*,TYPE_3__*) ;
 int FUNC_32 (struct ocfs2_path*,int) ;
 int FUNC_33 (struct ocfs2_super*,int *) ;
 int FUNC_34 (struct ocfs2_super*,int) ;
 int * FUNC_35 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_36 (struct ocfs2_super*) ;
 int FUNC_37 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 TYPE_2__* FUNC_38 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_39 (struct ocfs2_path*) ;

int FUNC_40(struct ocfs2_super *VAR_6,
     struct inode *VAR_7,
     struct buffer_head *VAR_8,
     struct ocfs2_truncate_context *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 u32 VAR_14, VAR_15, VAR_16;
 u64 VAR_17 = 0;
 struct ocfs2_extent_list *VAR_18;
 handle_t *VAR_19 = ((void*)0);
 struct inode *VAR_20 = VAR_6->osb_tl_inode;
 struct ocfs2_path *VAR_21 = ((void*)0);
 struct ocfs2_dinode *VAR_22 = (struct ocfs2_dinode *)VAR_8->b_data;
 struct ocfs2_alloc_context *VAR_23 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_24 = ((void*)0);

 FUNC_11();

 VAR_15 = FUNC_17(VAR_6->sb,
           FUNC_6(VAR_7));

 VAR_21 = FUNC_29(VAR_8, &VAR_22->id2.i_list,
         VAR_5);
 if (!VAR_21) {
  VAR_10 = -VAR_0;
  FUNC_12(VAR_10);
  goto bail;
 }

 FUNC_22(VAR_7, VAR_15);

start:



 if (FUNC_3(VAR_7)->ip_clusters == 0) {
  VAR_10 = 0;
  goto bail;
 }

 VAR_12 = 0;




 VAR_10 = FUNC_23(FUNC_1(VAR_7), VAR_21, VAR_4);
 if (VAR_10) {
  FUNC_12(VAR_10);
  goto bail;
 }

 FUNC_10(0, "inode->ip_clusters = %u, tree_depth = %u\n",
      FUNC_3(VAR_7)->ip_clusters, VAR_21->p_tree_depth);
 VAR_18 = FUNC_39(VAR_21);
 if (FUNC_7(VAR_18->l_next_free_rec) == 0) {
  FUNC_21(VAR_7->i_sb,
       "Inode %llu has empty extent block at %llu\n",
       (unsigned long long)FUNC_3(VAR_7)->ip_blkno,
       (unsigned long long)FUNC_38(VAR_21)->b_blocknr);
  VAR_10 = -VAR_1;
  goto bail;
 }

 VAR_11 = FUNC_7(VAR_18->l_next_free_rec) - 1;
 VAR_16 = FUNC_8(VAR_18->l_recs[VAR_11].e_cpos) +
  FUNC_31(VAR_18, &VAR_18->l_recs[VAR_11]);
 if (VAR_11 == 0 && FUNC_27(&VAR_18->l_recs[VAR_11])) {
  VAR_14 = 0;
 } else if (FUNC_8(VAR_18->l_recs[VAR_11].e_cpos) >= VAR_15) {
  VAR_14 = FUNC_31(VAR_18, &VAR_18->l_recs[VAR_11]);
  VAR_17 = FUNC_9(VAR_18->l_recs[VAR_11].e_blkno);
 } else if (VAR_16 > VAR_15) {
  VAR_14 = (FUNC_31(VAR_18, &VAR_18->l_recs[VAR_11]) +
       FUNC_8(VAR_18->l_recs[VAR_11].e_cpos)) -
      VAR_15;
  VAR_17 = FUNC_9(VAR_18->l_recs[VAR_11].e_blkno) +
   FUNC_18(VAR_7->i_sb,
    FUNC_31(VAR_18, &VAR_18->l_recs[VAR_11]) -
    VAR_14);
 } else {
  VAR_10 = 0;
  goto bail;
 }

 FUNC_10(0, "clusters_to_del = %u in this pass, tail blk=%llu\n",
      VAR_14, (unsigned long long)FUNC_38(VAR_21)->b_blocknr);

 if (VAR_18->l_recs[VAR_11].e_flags & VAR_2 && VAR_14) {
  FUNC_0(!(FUNC_3(VAR_7)->ip_dyn_features &
    VAR_3));

  VAR_10 = FUNC_28(VAR_6,
      FUNC_9(VAR_22->i_refcount_loc),
      1, &VAR_24, ((void*)0));
  if (VAR_10) {
   FUNC_12(VAR_10);
   goto bail;
  }

  VAR_10 = FUNC_30(VAR_7, VAR_8,
              VAR_17,
              VAR_14,
              &VAR_12,
              &VAR_23);
  if (VAR_10 < 0) {
   FUNC_12(VAR_10);
   goto bail;
  }
 }

 FUNC_14(&VAR_20->i_mutex);
 VAR_13 = 1;



 if (FUNC_36(VAR_6)) {
  VAR_10 = FUNC_5(VAR_6);
  if (VAR_10 < 0) {
   FUNC_12(VAR_10);
   goto bail;
  }
 }

 VAR_12 += FUNC_16(VAR_6->sb, VAR_14,
      (struct ocfs2_dinode *)VAR_8->b_data,
      VAR_18);
 VAR_19 = FUNC_35(VAR_6, VAR_12);
 if (FUNC_2(VAR_19)) {
  VAR_10 = FUNC_4(VAR_19);
  VAR_19 = ((void*)0);
  FUNC_12(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_20(VAR_6, VAR_14, VAR_7, VAR_8, VAR_19,
       VAR_9, VAR_21, VAR_23);
 if (VAR_10 < 0) {
  FUNC_12(VAR_10);
  goto bail;
 }

 FUNC_15(&VAR_20->i_mutex);
 VAR_13 = 0;

 FUNC_19(VAR_6, VAR_19);
 VAR_19 = ((void*)0);

 FUNC_32(VAR_21, 1);

 if (VAR_23) {
  FUNC_24(VAR_23);
  VAR_23 = ((void*)0);
 }

 if (VAR_24) {
  FUNC_37(VAR_6, VAR_24, 1);
  VAR_24 = ((void*)0);
 }





 goto start;

bail:

 FUNC_34(VAR_6, 1);

 if (VAR_13)
  FUNC_15(&VAR_20->i_mutex);

 if (VAR_19)
  FUNC_19(VAR_6, VAR_19);

 if (VAR_23)
  FUNC_24(VAR_23);

 if (VAR_24)
  FUNC_37(VAR_6, VAR_24, 1);

 FUNC_33(VAR_6, &VAR_9->tc_dealloc);

 FUNC_25(VAR_21);


 FUNC_26(VAR_9);

 FUNC_13(VAR_10);
 return VAR_10;
}
