
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int sb; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_count; TYPE_3__ i_ctime; int i_nlink; int i_mode; int i_ino; int i_sb; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {int * d_op; TYPE_1__ d_name; struct inode* d_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int ip_blkno; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,struct dentry*,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_17 (struct ocfs2_dinode*,int) ;
 int FUNC_18 (struct inode*,int ,int ) ;
 int FUNC_19 (struct ocfs2_super*,int *) ;
 int FUNC_20 (struct dentry*,struct inode*,int ) ;
 int VAR_6 ;
 int FUNC_21 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_22 (struct inode*,struct buffer_head**,int) ;
 int FUNC_23 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_24 (struct inode*,int) ;
 int FUNC_25 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_26 (int *,struct buffer_head*) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (struct ocfs2_super*) ;
 int FUNC_29 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_30 (struct ocfs2_dinode*) ;
 int FUNC_31 (struct ocfs2_dinode*,int ) ;
 int * FUNC_32 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_33(struct dentry *VAR_7,
        struct inode *VAR_8,
        struct dentry *VAR_9)
{
 handle_t *VAR_10;
 struct inode *VAR_11 = VAR_7->d_inode;
 int VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_dinode *VAR_15 = ((void*)0);
 struct ocfs2_super *VAR_16 = FUNC_3(VAR_8->i_sb);
 struct ocfs2_dir_lookup_result VAR_17 = { ((void*)0), };

 FUNC_13("(inode=%lu, old='%.*s' new='%.*s')\n", VAR_11->i_ino,
     VAR_7->d_name.len, VAR_7->d_name.name,
     VAR_9->d_name.len, VAR_9->d_name.name);

 if (FUNC_5(VAR_11->i_mode))
  return -VAR_3;

 VAR_12 = FUNC_23(VAR_8, &VAR_14, 1, VAR_5);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_2)
   FUNC_14(VAR_12);
  return VAR_12;
 }

 if (!VAR_8->i_nlink) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_18(VAR_8, VAR_9->d_name.name,
     VAR_9->d_name.len);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_29(VAR_16, VAR_8, VAR_14,
        VAR_9->d_name.name,
        VAR_9->d_name.len, &VAR_17);
 if (VAR_12 < 0) {
  FUNC_14(VAR_12);
  goto out;
 }

 VAR_12 = FUNC_22(VAR_11, &VAR_13, 1);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_2)
   FUNC_14(VAR_12);
  goto out;
 }

 VAR_15 = (struct ocfs2_dinode *) VAR_13->b_data;
 if (FUNC_30(VAR_15) >= FUNC_28(VAR_16)) {
  VAR_12 = -VAR_1;
  goto out_unlock_inode;
 }

 VAR_10 = FUNC_32(VAR_16, FUNC_27(VAR_16->sb));
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_4(VAR_10);
  VAR_10 = ((void*)0);
  FUNC_14(VAR_12);
  goto out_unlock_inode;
 }

 VAR_12 = FUNC_25(VAR_10, FUNC_0(VAR_11), VAR_13,
          VAR_4);
 if (VAR_12 < 0) {
  FUNC_14(VAR_12);
  goto out_commit;
 }

 FUNC_12(VAR_11);
 VAR_11->i_ctime = VAR_0;
 FUNC_31(VAR_15, VAR_11->i_nlink);
 VAR_15->i_ctime = FUNC_9(VAR_11->i_ctime.tv_sec);
 VAR_15->i_ctime_nsec = FUNC_8(VAR_11->i_ctime.tv_nsec);

 VAR_12 = FUNC_26(VAR_10, VAR_13);
 if (VAR_12 < 0) {
  FUNC_17(VAR_15, -1);
  FUNC_11(VAR_11);
  FUNC_14(VAR_12);
  goto out_commit;
 }

 VAR_12 = FUNC_16(VAR_10, VAR_9, VAR_11,
         FUNC_2(VAR_11)->ip_blkno,
         VAR_14, &VAR_17);
 if (VAR_12) {
  FUNC_17(VAR_15, -1);
  FUNC_11(VAR_11);
  FUNC_14(VAR_12);
  goto out_commit;
 }

 VAR_12 = FUNC_20(VAR_9, VAR_11, FUNC_2(VAR_8)->ip_blkno);
 if (VAR_12) {
  FUNC_14(VAR_12);
  goto out_commit;
 }

 FUNC_6(&VAR_11->i_count);
 VAR_9->d_op = &VAR_6;
 FUNC_10(VAR_9, VAR_11);

out_commit:
 FUNC_19(VAR_16, VAR_10);
out_unlock_inode:
 FUNC_24(VAR_11, 1);

out:
 FUNC_24(VAR_8, 1);

 FUNC_7(VAR_13);
 FUNC_7(VAR_14);

 FUNC_21(&VAR_17);

 FUNC_15(VAR_12);

 return VAR_12;
}
