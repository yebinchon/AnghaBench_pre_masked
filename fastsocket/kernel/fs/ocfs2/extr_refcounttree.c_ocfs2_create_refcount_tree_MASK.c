
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_super {int slot_num; int fs_generation; int osb_lock; int s_next_generation; int sb; } ;
struct ocfs2_refcount_tree {scalar_t__ rf_generation; int rf_ci; } ;
struct TYPE_4__ {void* rl_count; } ;
struct ocfs2_refcount_block {scalar_t__ rf_generation; TYPE_1__ rf_records; void* rf_count; void* rf_blkno; void* rf_fs_generation; void* rf_suballoc_bit; void* rf_suballoc_slot; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_dinode {void* i_refcount_loc; void* i_dyn_features; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 void* FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct ocfs2_refcount_tree*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct ocfs2_refcount_block*,int ,int ) ;
 int FUNC_13 (int ,char*,int ,...) ;
 int FUNC_14 (int) ;
 struct ocfs2_refcount_tree* FUNC_15 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_16 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int*,int *,scalar_t__*) ;
 int FUNC_17 (struct ocfs2_super*,int *) ;
 int FUNC_18 (struct ocfs2_super*,struct ocfs2_refcount_tree*) ;
 struct ocfs2_refcount_tree* FUNC_19 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_20 (struct ocfs2_alloc_context*) ;
 int FUNC_21 (struct ocfs2_super*,struct ocfs2_refcount_tree*,scalar_t__,scalar_t__) ;
 int FUNC_22 (struct ocfs2_super*,struct ocfs2_refcount_tree*) ;
 int FUNC_23 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_24 (int *,int *,struct buffer_head*,int ) ;
 int FUNC_25 (int *,struct buffer_head*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct ocfs2_refcount_tree*) ;
 int FUNC_29 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_30 (int *,struct buffer_head*) ;
 int * FUNC_31 (struct ocfs2_super*,int ) ;
 struct buffer_head* FUNC_32 (TYPE_2__*,scalar_t__) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (void*,int ) ;

__attribute__((used)) static int FUNC_36(struct inode *VAR_6,
          struct buffer_head *VAR_7)
{
 int VAR_8;
 handle_t *VAR_9 = ((void*)0);
 struct ocfs2_alloc_context *VAR_10 = ((void*)0);
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_7->b_data;
 struct ocfs2_inode_info *VAR_12 = FUNC_3(VAR_6);
 struct ocfs2_super *VAR_13 = FUNC_4(VAR_6->i_sb);
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_refcount_block *VAR_15;
 struct ocfs2_refcount_tree *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 u16 VAR_18;
 u32 VAR_19;
 u64 VAR_20;

 FUNC_0(VAR_12->ip_dyn_features & VAR_1);

 FUNC_13(0, "create tree for inode %lu\n", VAR_6->i_ino);

 VAR_8 = FUNC_29(VAR_13, 1, &VAR_10);
 if (VAR_8) {
  FUNC_14(VAR_8);
  goto out;
 }

 VAR_9 = FUNC_31(VAR_13, VAR_5);
 if (FUNC_2(VAR_9)) {
  VAR_8 = FUNC_5(VAR_9);
  FUNC_14(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_23(VAR_9, FUNC_1(VAR_6), VAR_7,
          VAR_3);
 if (VAR_8) {
  FUNC_14(VAR_8);
  goto out_commit;
 }

 VAR_8 = FUNC_16(VAR_13, VAR_9, VAR_10, 1,
       &VAR_18, &VAR_19,
       &VAR_20);
 if (VAR_8) {
  FUNC_14(VAR_8);
  goto out_commit;
 }

 VAR_16 = FUNC_15(VAR_13, VAR_20);
 if (!VAR_16) {
  VAR_8 = -VAR_0;
  FUNC_14(VAR_8);
  goto out_commit;
 }

 VAR_14 = FUNC_32(VAR_6->i_sb, VAR_20);
 FUNC_30(&VAR_16->rf_ci, VAR_14);

 VAR_8 = FUNC_24(VAR_9, &VAR_16->rf_ci, VAR_14,
          VAR_2);
 if (VAR_8) {
  FUNC_14(VAR_8);
  goto out_commit;
 }


 VAR_15 = (struct ocfs2_refcount_block *)VAR_14->b_data;
 FUNC_12(VAR_15, 0, VAR_6->i_sb->s_blocksize);
 FUNC_35((void *)VAR_15, VAR_4);
 VAR_15->rf_suballoc_slot = FUNC_7(VAR_13->slot_num);
 VAR_15->rf_suballoc_bit = FUNC_7(VAR_18);
 VAR_15->rf_fs_generation = FUNC_8(VAR_13->fs_generation);
 VAR_15->rf_blkno = FUNC_9(VAR_20);
 VAR_15->rf_count = FUNC_8(1);
 VAR_15->rf_records.rl_count =
   FUNC_7(FUNC_27(VAR_13->sb));
 FUNC_33(&VAR_13->osb_lock);
 VAR_15->rf_generation = VAR_13->s_next_generation++;
 FUNC_34(&VAR_13->osb_lock);

 FUNC_25(VAR_9, VAR_14);

 FUNC_33(&VAR_12->ip_lock);
 VAR_12->ip_dyn_features |= VAR_1;
 VAR_11->i_dyn_features = FUNC_7(VAR_12->ip_dyn_features);
 VAR_11->i_refcount_loc = FUNC_9(VAR_20);
 FUNC_34(&VAR_12->ip_lock);

 FUNC_13(0, "created tree for inode %lu, refblock %llu\n",
      VAR_6->i_ino, (unsigned long long)VAR_20);

 FUNC_25(VAR_9, VAR_7);





 VAR_16->rf_generation = FUNC_11(VAR_15->rf_generation);
 FUNC_21(VAR_13, VAR_16, VAR_20,
          VAR_16->rf_generation);

 FUNC_33(&VAR_13->osb_lock);
 VAR_17 = FUNC_19(VAR_13, VAR_20);







 FUNC_0(VAR_17 && VAR_17->rf_generation == VAR_16->rf_generation);
 if (VAR_17)
  FUNC_18(VAR_13, VAR_17);
 FUNC_22(VAR_13, VAR_16);
 FUNC_34(&VAR_13->osb_lock);
 VAR_16 = ((void*)0);
 if (VAR_17)
  FUNC_28(VAR_17);

out_commit:
 FUNC_17(VAR_13, VAR_9);

out:
 if (VAR_16) {
  FUNC_26(&VAR_16->rf_ci);
  FUNC_10(VAR_16);
 }

 FUNC_6(VAR_14);
 if (VAR_10)
  FUNC_20(VAR_10);

 return VAR_8;
}
