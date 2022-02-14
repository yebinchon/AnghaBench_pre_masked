
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_refcount_block {int rf_count; int rf_suballoc_slot; int rf_suballoc_bit; scalar_t__ rf_blkno; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_dinode {scalar_t__ i_refcount_loc; int i_dyn_features; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 int FUNC_17 (struct ocfs2_super*,struct ocfs2_refcount_tree*) ;
 int FUNC_18 (int *,struct inode*,struct buffer_head*,int ,int ,int) ;
 struct inode* FUNC_19 (struct ocfs2_super*,int ,int ) ;
 int FUNC_20 (struct inode*,struct buffer_head**,int) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_23 (int *,int *,struct buffer_head*,int ) ;
 int FUNC_24 (int *,struct buffer_head*) ;
 int FUNC_25 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_26 (struct ocfs2_refcount_tree*) ;
 int * FUNC_27 (struct ocfs2_super*,int) ;
 int FUNC_28 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

int FUNC_32(struct inode *VAR_6, struct buffer_head *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 handle_t *VAR_10 = ((void*)0);
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_7->b_data;
 struct ocfs2_inode_info *VAR_12 = FUNC_3(VAR_6);
 struct ocfs2_super *VAR_13 = FUNC_4(VAR_6->i_sb);
 struct ocfs2_refcount_block *VAR_14;
 struct inode *VAR_15 = ((void*)0);
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_18;
 int VAR_19 = VAR_4;
 u64 VAR_20 = 0, VAR_21 = 0, VAR_22 = FUNC_12(VAR_11->i_refcount_loc);
 u16 VAR_23 = 0;

 if (!(VAR_12->ip_dyn_features & VAR_2))
  return 0;

 FUNC_0(!VAR_22);
 VAR_8 = FUNC_25(VAR_13, VAR_22, 1, &VAR_18, &VAR_17);
 if (VAR_8) {
  FUNC_13(VAR_8);
  return VAR_8;
 }

 VAR_14 = (struct ocfs2_refcount_block *)VAR_17->b_data;





 if (FUNC_11(VAR_14->rf_count) == 1) {
  VAR_20 = FUNC_12(VAR_14->rf_blkno);
  VAR_23 = FUNC_9(VAR_14->rf_suballoc_bit);
  VAR_21 = FUNC_29(VAR_20, VAR_23);

  VAR_15 = FUNC_19(VAR_13,
     VAR_1,
     FUNC_9(VAR_14->rf_suballoc_slot));
  if (!VAR_15) {
   VAR_8 = -VAR_0;
   FUNC_13(VAR_8);
   goto out;
  }
  FUNC_14(&VAR_15->i_mutex);

  VAR_8 = FUNC_20(VAR_15, &VAR_16, 1);
  if (VAR_8) {
   FUNC_13(VAR_8);
   goto out_mutex;
  }

  VAR_19 += VAR_5;
 }

 VAR_10 = FUNC_27(VAR_13, VAR_19);
 if (FUNC_2(VAR_10)) {
  VAR_8 = FUNC_5(VAR_10);
  FUNC_13(VAR_8);
  goto out_unlock;
 }

 VAR_8 = FUNC_22(VAR_10, FUNC_1(VAR_6), VAR_7,
          VAR_3);
 if (VAR_8) {
  FUNC_13(VAR_8);
  goto out_commit;
 }

 VAR_8 = FUNC_23(VAR_10, &VAR_18->rf_ci, VAR_17,
          VAR_3);
 if (VAR_8) {
  FUNC_13(VAR_8);
  goto out_commit;
 }

 FUNC_30(&VAR_12->ip_lock);
 VAR_12->ip_dyn_features &= ~VAR_2;
 VAR_11->i_dyn_features = FUNC_7(VAR_12->ip_dyn_features);
 VAR_11->i_refcount_loc = 0;
 FUNC_31(&VAR_12->ip_lock);
 FUNC_24(VAR_10, VAR_7);

 FUNC_10(&VAR_14->rf_count , -1);
 FUNC_24(VAR_10, VAR_17);

 if (!VAR_14->rf_count) {
  VAR_9 = 1;
  FUNC_17(VAR_13, VAR_18);
  VAR_8 = FUNC_18(VAR_10, VAR_15,
            VAR_16, VAR_23, VAR_21, 1);
  if (VAR_8)
   FUNC_13(VAR_8);
 }

out_commit:
 FUNC_16(VAR_13, VAR_10);
out_unlock:
 if (VAR_15) {
  FUNC_21(VAR_15, 1);
  FUNC_6(VAR_16);
 }
out_mutex:
 if (VAR_15) {
  FUNC_15(&VAR_15->i_mutex);
  FUNC_8(VAR_15);
 }
out:
 FUNC_28(VAR_13, VAR_18, 1);
 if (VAR_9)
  FUNC_26(VAR_18);
 FUNC_6(VAR_17);

 return VAR_8;
}
