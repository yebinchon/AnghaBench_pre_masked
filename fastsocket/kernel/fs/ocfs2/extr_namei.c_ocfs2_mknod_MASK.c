
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocfs2_super {TYPE_3__* sb; } ;
struct ocfs2_security_xattr_info {int enable; int value; int name; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_mode; int i_sb; } ;
struct TYPE_7__ {int name; int len; } ;
struct dentry {int * d_op; TYPE_2__ d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef scalar_t__ dev_t ;
struct TYPE_9__ {int ip_blkno; } ;
struct TYPE_8__ {TYPE_1__* dq_op; } ;
struct TYPE_6__ {scalar_t__ (* alloc_inode ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int VAR_7 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,struct inode*,struct dentry*,int,unsigned long,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,struct dentry*,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_18 (struct ocfs2_dinode*,int) ;
 int FUNC_19 (struct inode*,struct buffer_head*,int,struct ocfs2_security_xattr_info*,int*,int*,int*) ;
 int FUNC_20 (struct inode*,int ,int ) ;
 int FUNC_21 (struct ocfs2_super*,int *) ;
 int FUNC_22 (struct dentry*,struct inode*,int ) ;
 int VAR_8 ;
 int FUNC_23 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_24 (struct ocfs2_alloc_context*) ;
 int FUNC_25 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_26 (struct inode*,int) ;
 int FUNC_27 (int *,struct inode*,struct inode*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_28 (struct inode*,struct inode*,struct ocfs2_security_xattr_info*) ;
 int FUNC_29 (int *,struct inode*,struct buffer_head*,struct ocfs2_security_xattr_info*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_30 (struct inode*,struct buffer_head**,int) ;
 int FUNC_31 (struct inode*,int) ;
 int FUNC_32 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_33 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_34 (struct ocfs2_super*) ;
 int FUNC_35 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_36 (struct ocfs2_super*,struct inode*,struct inode*,scalar_t__,struct buffer_head**,struct buffer_head*,int *,struct ocfs2_alloc_context*) ;
 int FUNC_37 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 int FUNC_38 (struct ocfs2_dinode*) ;
 int FUNC_39 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_40 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;
 int FUNC_41 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int * FUNC_42 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_43 (struct ocfs2_super*) ;
 int FUNC_44 (struct ocfs2_super*) ;
 scalar_t__ FUNC_45 (TYPE_3__*) ;
 scalar_t__ FUNC_46 (struct inode*,int) ;
 int FUNC_47 (struct inode*) ;

__attribute__((used)) static int FUNC_48(struct inode *VAR_9,
         struct dentry *VAR_10,
         int VAR_11,
         dev_t VAR_12)
{
 int VAR_13 = 0;
 struct buffer_head *VAR_14 = ((void*)0);
 handle_t *VAR_15 = ((void*)0);
 struct ocfs2_super *VAR_16;
 struct ocfs2_dinode *VAR_17;
 struct buffer_head *VAR_18 = ((void*)0);
 struct inode *VAR_19 = ((void*)0);
 struct ocfs2_alloc_context *VAR_20 = ((void*)0);
 struct ocfs2_alloc_context *VAR_21 = ((void*)0);
 struct ocfs2_alloc_context *VAR_22 = ((void*)0);
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 struct ocfs2_security_xattr_info VAR_26 = {
  .enable = 1,
 };
 int VAR_27 = 0;
 struct ocfs2_dir_lookup_result VAR_28 = { ((void*)0), };

 FUNC_14("(0x%p, 0x%p, %d, %lu, '%.*s')\n", VAR_9, VAR_10, VAR_11,
     (unsigned long)VAR_12, VAR_10->d_name.len,
     VAR_10->d_name.name);


 VAR_16 = FUNC_3(VAR_9->i_sb);

 VAR_13 = FUNC_30(VAR_9, &VAR_14, 1);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_2)
   FUNC_15(VAR_13);
  return VAR_13;
 }

 if (FUNC_5(VAR_11) && (VAR_9->i_nlink >= FUNC_34(VAR_16))) {
  VAR_13 = -VAR_1;
  goto leave;
 }

 VAR_17 = (struct ocfs2_dinode *) VAR_14->b_data;
 if (!FUNC_38(VAR_17)) {

  VAR_13 = -VAR_2;
  goto leave;
 }

 VAR_13 = FUNC_20(VAR_9, VAR_10->d_name.name,
        VAR_10->d_name.len);
 if (VAR_13)
  goto leave;


 VAR_13 = FUNC_37(VAR_16, VAR_9, VAR_14,
           VAR_10->d_name.name,
           VAR_10->d_name.len, &VAR_28);
 if (VAR_13 < 0) {
  FUNC_15(VAR_13);
  goto leave;
 }


 VAR_13 = FUNC_40(VAR_16, &VAR_20);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_4)
   FUNC_15(VAR_13);
  goto leave;
 }

 VAR_19 = FUNC_26(VAR_9, VAR_11);
 if (!VAR_19) {
  VAR_13 = -VAR_3;
  FUNC_15(VAR_13);
  goto leave;
 }


 VAR_13 = FUNC_28(VAR_19, VAR_9, &VAR_26);
 if (VAR_13) {
  if (VAR_13 == -VAR_5)
   VAR_26.enable = 0;
  else {
   FUNC_15(VAR_13);
   goto leave;
  }
 }


 VAR_13 = FUNC_19(VAR_9, VAR_14, VAR_11,
           &VAR_26, &VAR_23,
           &VAR_25, &VAR_24);
 if (VAR_13 < 0) {
  FUNC_15(VAR_13);
  goto leave;
 }


 if (FUNC_5(VAR_11) && !FUNC_44(VAR_16)) {
  VAR_23 += 1;


  if (FUNC_43(VAR_16))
   VAR_24++;
 }

 VAR_13 = FUNC_41(VAR_16, VAR_24, &VAR_22);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_4)
   FUNC_15(VAR_13);
  goto leave;
 }

 VAR_13 = FUNC_39(VAR_16, VAR_23, &VAR_21);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_4)
   FUNC_15(VAR_13);
  goto leave;
 }

 VAR_15 = FUNC_42(VAR_16, FUNC_35(VAR_16->sb,
           FUNC_5(VAR_11),
           VAR_25));
 if (FUNC_1(VAR_15)) {
  VAR_13 = FUNC_4(VAR_15);
  VAR_15 = ((void*)0);
  FUNC_15(VAR_13);
  goto leave;
 }



 if (FUNC_45(VAR_16->sb) &&
     VAR_16->sb->dq_op->alloc_inode(VAR_19, 1) == VAR_6) {
  VAR_13 = -VAR_0;
  goto leave;
 }
 VAR_27 = 1;

 FUNC_14("(0x%p, 0x%p, %d, %lu, '%.*s')\n", VAR_9, VAR_10,
     VAR_19->i_mode, (unsigned long)VAR_12, VAR_10->d_name.len,
     VAR_10->d_name.name);


 VAR_13 = FUNC_36(VAR_16, VAR_9, VAR_19, VAR_12,
        &VAR_18, VAR_14, VAR_15,
        VAR_20);
 if (VAR_13 < 0) {
  FUNC_15(VAR_13);
  goto leave;
 }

 if (FUNC_5(VAR_11)) {
  VAR_13 = FUNC_23(VAR_16, VAR_15, VAR_9, VAR_19,
         VAR_18, VAR_21, VAR_22);
  if (VAR_13 < 0) {
   FUNC_15(VAR_13);
   goto leave;
  }

  VAR_13 = FUNC_32(VAR_15, FUNC_0(VAR_9),
       VAR_14,
       VAR_7);
  if (VAR_13 < 0) {
   FUNC_15(VAR_13);
   goto leave;
  }
  FUNC_18(VAR_17, 1);
  VAR_13 = FUNC_33(VAR_15, VAR_14);
  if (VAR_13 < 0) {
   FUNC_15(VAR_13);
   goto leave;
  }
  FUNC_9(VAR_9);
 }

 VAR_13 = FUNC_27(VAR_15, VAR_19, VAR_9, VAR_18, VAR_14,
    VAR_22, VAR_21);
 if (VAR_13 < 0) {
  FUNC_15(VAR_13);
  goto leave;
 }

 if (VAR_26.enable) {
  VAR_13 = FUNC_29(VAR_15, VAR_19, VAR_18, &VAR_26,
       VAR_22, VAR_21);
  if (VAR_13 < 0) {
   FUNC_15(VAR_13);
   goto leave;
  }
 }

 VAR_13 = FUNC_17(VAR_15, VAR_10, VAR_19,
     FUNC_2(VAR_19)->ip_blkno, VAR_14,
     &VAR_28);
 if (VAR_13 < 0) {
  FUNC_15(VAR_13);
  goto leave;
 }

 VAR_13 = FUNC_22(VAR_10, VAR_19,
       FUNC_2(VAR_9)->ip_blkno);
 if (VAR_13) {
  FUNC_15(VAR_13);
  goto leave;
 }

 FUNC_10(VAR_19);
 VAR_10->d_op = &VAR_8;
 FUNC_8(VAR_10, VAR_19);
 VAR_13 = 0;
leave:
 if (VAR_13 < 0 && VAR_27)
  FUNC_47(VAR_19);
 if (VAR_15)
  FUNC_21(VAR_16, VAR_15);

 FUNC_31(VAR_9, 1);

 if (VAR_13 == -VAR_4)
  FUNC_13(0, "Disk is full\n");

 FUNC_6(VAR_18);
 FUNC_6(VAR_14);
 FUNC_12(VAR_26.name);
 FUNC_12(VAR_26.value);

 FUNC_25(&VAR_28);

 if ((VAR_13 < 0) && VAR_19) {
  FUNC_7(VAR_19);
  FUNC_11(VAR_19);
 }

 if (VAR_20)
  FUNC_24(VAR_20);

 if (VAR_21)
  FUNC_24(VAR_21);

 if (VAR_22)
  FUNC_24(VAR_22);

 FUNC_16(VAR_13);

 return VAR_13;
}
