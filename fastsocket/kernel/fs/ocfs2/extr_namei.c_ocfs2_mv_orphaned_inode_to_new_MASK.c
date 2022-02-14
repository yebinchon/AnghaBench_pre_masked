
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int sb; int slot_num; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {scalar_t__ i_orphaned_slot; int i_flags; int i_links_count; } ;
struct inode {int i_mutex; int i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {int ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,struct inode*,struct dentry*,int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct dentry*,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_16 (struct inode*,int ,int ) ;
 int FUNC_17 (struct ocfs2_super*,int *) ;
 int FUNC_18 (struct dentry*,struct inode*,int ) ;
 int VAR_5 ;
 int FUNC_19 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_20 (struct ocfs2_super*,int ,int ) ;
 int FUNC_21 (struct inode*,struct buffer_head**,int) ;
 int FUNC_22 (struct inode*,int) ;
 int FUNC_23 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_24 (int *,struct buffer_head*) ;
 int FUNC_25 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*) ;
 int FUNC_26 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 int FUNC_27 (struct inode*,struct buffer_head**) ;
 int FUNC_28 (int ) ;
 int * FUNC_29 (struct ocfs2_super*,int ) ;

int FUNC_30(struct inode *VAR_6,
       struct inode *VAR_7,
       struct dentry *VAR_8)
{
 int VAR_9 = 0;
 struct buffer_head *VAR_10 = ((void*)0);
 handle_t *VAR_11 = ((void*)0);
 struct ocfs2_super *VAR_12 = FUNC_3(VAR_6->i_sb);
 struct ocfs2_dinode *VAR_13, *VAR_14;
 struct inode *VAR_15 = ((void*)0);
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 struct ocfs2_dir_lookup_result VAR_18 = { ((void*)0), };

 FUNC_10("(0x%p, 0x%p, %.*s')\n", VAR_6, VAR_8,
     VAR_8->d_name.len, VAR_8->d_name.name);

 VAR_9 = FUNC_21(VAR_6, &VAR_10, 1);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_11(VAR_9);
  return VAR_9;
 }

 VAR_13 = (struct ocfs2_dinode *) VAR_10->b_data;
 if (!VAR_13->i_links_count) {

  VAR_9 = -VAR_1;
  goto leave;
 }

 VAR_9 = FUNC_16(VAR_6, VAR_8->d_name.name,
        VAR_8->d_name.len);
 if (VAR_9)
  goto leave;


 VAR_9 = FUNC_26(VAR_12, VAR_6, VAR_10,
           VAR_8->d_name.name,
           VAR_8->d_name.len, &VAR_18);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  goto leave;
 }

 VAR_15 = FUNC_20(VAR_12,
             VAR_4,
             VAR_12->slot_num);
 if (!VAR_15) {
  VAR_9 = -VAR_0;
  FUNC_11(VAR_9);
  goto leave;
 }

 FUNC_13(&VAR_15->i_mutex);

 VAR_9 = FUNC_21(VAR_15, &VAR_16, 1);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  FUNC_14(&VAR_15->i_mutex);
  FUNC_8(VAR_15);
  goto leave;
 }

 VAR_9 = FUNC_27(VAR_7, &VAR_17);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  goto orphan_unlock;
 }

 VAR_11 = FUNC_29(VAR_12, FUNC_28(VAR_12->sb));
 if (FUNC_1(VAR_11)) {
  VAR_9 = FUNC_4(VAR_11);
  VAR_11 = ((void*)0);
  FUNC_11(VAR_9);
  goto orphan_unlock;
 }

 VAR_9 = FUNC_23(VAR_11, FUNC_0(VAR_7),
      VAR_17, VAR_2);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_25(VAR_12, VAR_11, VAR_15, VAR_7,
      VAR_16);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  goto out_commit;
 }

 VAR_14 = (struct ocfs2_dinode *)VAR_17->b_data;
 FUNC_9(&VAR_14->i_flags, -VAR_3);
 VAR_14->i_orphaned_slot = 0;
 FUNC_24(VAR_11, VAR_17);

 VAR_9 = FUNC_15(VAR_11, VAR_8, VAR_7,
     FUNC_2(VAR_7)->ip_blkno, VAR_10,
     &VAR_18);
 if (VAR_9 < 0) {
  FUNC_11(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_18(VAR_8, VAR_7,
       FUNC_2(VAR_6)->ip_blkno);
 if (VAR_9) {
  FUNC_11(VAR_9);
  goto out_commit;
 }

 FUNC_7(VAR_7);
 VAR_8->d_op = &VAR_5;
 FUNC_6(VAR_8, VAR_7);
 VAR_9 = 0;
out_commit:
 FUNC_17(VAR_12, VAR_11);
orphan_unlock:
 FUNC_22(VAR_15, 1);
 FUNC_14(&VAR_15->i_mutex);
 FUNC_8(VAR_15);
leave:

 FUNC_22(VAR_6, 1);

 FUNC_5(VAR_17);
 FUNC_5(VAR_10);
 FUNC_5(VAR_16);

 FUNC_19(&VAR_18);

 FUNC_12(VAR_9);

 return VAR_9;
}
