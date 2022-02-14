
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {TYPE_4__* sb; } ;
struct ocfs2_security_xattr_info {int enable; int value; int name; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct TYPE_7__ {scalar_t__ i_symlink; } ;
struct ocfs2_dinode {int i_blkno; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {char const* i_mode; scalar_t__ i_blocks; int * i_op; scalar_t__ i_rdev; struct super_block* i_sb; } ;
struct TYPE_9__ {int name; int len; } ;
struct dentry {int * d_op; TYPE_3__ d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_11__ {int ip_blkno; } ;
struct TYPE_10__ {TYPE_2__* dq_op; } ;
struct TYPE_8__ {scalar_t__ (* alloc_inode ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (int ,char*,unsigned long long) ;
 int FUNC_14 (char*,struct inode*,struct dentry*,char const*,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,struct dentry*,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_18 (struct ocfs2_super*,struct inode*,int *,int,int ,struct buffer_head*,int *,struct ocfs2_alloc_context*,int *,int *) ;
 int FUNC_19 (struct inode*,struct ocfs2_security_xattr_info*,int*,int*,struct ocfs2_alloc_context**) ;
 int FUNC_20 (struct super_block*) ;
 int FUNC_21 (struct inode*,int ,int ) ;
 int FUNC_22 (TYPE_4__*,int) ;
 int FUNC_23 (struct ocfs2_super*,int *) ;
 int FUNC_24 (struct ocfs2_super*,int *,struct inode*,char const*) ;
 int FUNC_25 (struct dentry*,struct inode*,int ) ;
 int VAR_10 ;
 int FUNC_26 (struct super_block*) ;
 int VAR_11 ;
 int FUNC_27 (struct ocfs2_alloc_context*) ;
 int FUNC_28 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_29 (struct inode*,int) ;
 int FUNC_30 (struct inode*,struct inode*,struct ocfs2_security_xattr_info*) ;
 int FUNC_31 (int *,struct inode*,struct buffer_head*,struct ocfs2_security_xattr_info*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_32 (struct inode*) ;
 int FUNC_33 (struct inode*,struct buffer_head**,int) ;
 scalar_t__ FUNC_34 (struct inode*) ;
 int FUNC_35 (struct inode*,int) ;
 int FUNC_36 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_37 (struct ocfs2_super*,struct inode*,struct inode*,int ,struct buffer_head**,struct buffer_head*,int *,struct ocfs2_alloc_context*) ;
 int FUNC_38 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 int FUNC_39 (struct ocfs2_dinode*) ;
 int FUNC_40 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_41 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;
 int * FUNC_42 (struct ocfs2_super*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_43 (TYPE_4__*) ;
 int FUNC_44 (char const*) ;
 scalar_t__ FUNC_45 (struct inode*,int) ;
 scalar_t__ FUNC_46 (struct inode*,int ) ;
 int FUNC_47 (struct inode*) ;
 int FUNC_48 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_49(struct inode *VAR_13,
    struct dentry *VAR_14,
    const char *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 u64 VAR_19;
 struct ocfs2_super *VAR_20 = ((void*)0);
 struct inode *VAR_21 = ((void*)0);
 struct super_block *VAR_22;
 struct buffer_head *VAR_23 = ((void*)0);
 struct buffer_head *VAR_24 = ((void*)0);
 struct ocfs2_dinode *VAR_25 = ((void*)0);
 struct ocfs2_dinode *VAR_26;
 handle_t *VAR_27 = ((void*)0);
 struct ocfs2_alloc_context *VAR_28 = ((void*)0);
 struct ocfs2_alloc_context *VAR_29 = ((void*)0);
 struct ocfs2_alloc_context *VAR_30 = ((void*)0);
 int VAR_31 = 0;
 int VAR_32 = 0;
 struct ocfs2_security_xattr_info VAR_33 = {
  .enable = 1,
 };
 int VAR_34 = 0, VAR_35 = 0;
 struct ocfs2_dir_lookup_result VAR_36 = { ((void*)0), };

 FUNC_14("(0x%p, 0x%p, symname='%s' actual='%.*s')\n", VAR_13,
     VAR_14, VAR_15, VAR_14->d_name.len, VAR_14->d_name.name);

 VAR_22 = VAR_13->i_sb;
 VAR_20 = FUNC_2(VAR_22);

 VAR_17 = FUNC_44(VAR_15) + 1;

 VAR_18 = FUNC_20(VAR_22);


 VAR_16 = FUNC_33(VAR_13, &VAR_24, 1);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_2)
   FUNC_15(VAR_16);
  return VAR_16;
 }

 VAR_26 = (struct ocfs2_dinode *) VAR_24->b_data;
 if (!FUNC_39(VAR_26)) {

  VAR_16 = -VAR_2;
  goto bail;
 }

 VAR_16 = FUNC_21(VAR_13, VAR_14->d_name.name,
        VAR_14->d_name.len);
 if (VAR_16)
  goto bail;

 VAR_16 = FUNC_38(VAR_20, VAR_13, VAR_24,
           VAR_14->d_name.name,
           VAR_14->d_name.len, &VAR_36);
 if (VAR_16 < 0) {
  FUNC_15(VAR_16);
  goto bail;
 }

 VAR_16 = FUNC_41(VAR_20, &VAR_28);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_4)
   FUNC_15(VAR_16);
  goto bail;
 }

 VAR_21 = FUNC_29(VAR_13, VAR_8 | VAR_9);
 if (!VAR_21) {
  VAR_16 = -VAR_3;
  FUNC_15(VAR_16);
  goto bail;
 }


 VAR_16 = FUNC_30(VAR_21, VAR_13, &VAR_33);
 if (VAR_16) {
  if (VAR_16 == -VAR_5)
   VAR_33.enable = 0;
  else {
   FUNC_15(VAR_16);
   goto bail;
  }
 }


 if (VAR_33.enable) {
  VAR_16 = FUNC_19(VAR_13, &VAR_33, &VAR_31,
        &VAR_32, &VAR_30);
  if (VAR_16 < 0) {
   FUNC_15(VAR_16);
   goto bail;
  }
 }


 if (VAR_17 > FUNC_26(VAR_22))
  VAR_31 += 1;

 VAR_16 = FUNC_40(VAR_20, VAR_31, &VAR_29);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_4)
   FUNC_15(VAR_16);
  goto bail;
 }

 VAR_27 = FUNC_42(VAR_20, VAR_18 + VAR_32);
 if (FUNC_0(VAR_27)) {
  VAR_16 = FUNC_3(VAR_27);
  VAR_27 = ((void*)0);
  FUNC_15(VAR_16);
  goto bail;
 }



 if (FUNC_43(VAR_20->sb) &&
     VAR_20->sb->dq_op->alloc_inode(VAR_21, 1) == VAR_7) {
  VAR_16 = -VAR_0;
  goto bail;
 }
 VAR_35 = 1;

 FUNC_14("(0x%p, 0x%p, %d, '%.*s')\n", VAR_13, VAR_14,
     VAR_21->i_mode, VAR_14->d_name.len,
     VAR_14->d_name.name);

 VAR_16 = FUNC_37(VAR_20, VAR_13, VAR_21,
        0, &VAR_23, VAR_24, VAR_27,
        VAR_28);
 if (VAR_16 < 0) {
  FUNC_15(VAR_16);
  goto bail;
 }

 VAR_25 = (struct ocfs2_dinode *) VAR_23->b_data;
 VAR_21->i_rdev = 0;
 VAR_19 = VAR_17 - 1;
 if (VAR_17 > FUNC_26(VAR_22)) {
  u32 VAR_37 = 0;

  VAR_21->i_op = &VAR_12;
  if (FUNC_46(VAR_21,
      FUNC_22(VAR_20->sb, 1))) {
   VAR_16 = -VAR_0;
   goto bail;
  }
  VAR_34 = 1;
  VAR_16 = FUNC_18(VAR_20, VAR_21, &VAR_37, 1, 0,
           VAR_23,
           VAR_27, VAR_29, ((void*)0),
           ((void*)0));
  if (VAR_16 < 0) {
   if (VAR_16 != -VAR_4 && VAR_16 != -VAR_1) {
    FUNC_13(VAR_6,
         "Failed to extend file to %llu\n",
         (unsigned long long)VAR_19);
    FUNC_15(VAR_16);
    VAR_16 = -VAR_4;
   }
   goto bail;
  }
  FUNC_7(VAR_21, VAR_19);
  VAR_21->i_blocks = FUNC_34(VAR_21);
 } else {
  VAR_21->i_op = &VAR_11;
  FUNC_12((char *) VAR_25->id2.i_symlink, VAR_15, VAR_17);
  FUNC_7(VAR_21, VAR_19);
  VAR_21->i_blocks = 0;
 }

 VAR_16 = FUNC_36(VAR_27, VAR_21, VAR_23);
 if (VAR_16 < 0) {
  FUNC_15(VAR_16);
  goto bail;
 }

 if (!FUNC_32(VAR_21)) {
  VAR_16 = FUNC_24(VAR_20, VAR_27, VAR_21,
         VAR_15);
  if (VAR_16 < 0) {
   FUNC_15(VAR_16);
   goto bail;
  }
 }

 if (VAR_33.enable) {
  VAR_16 = FUNC_31(VAR_27, VAR_21, VAR_23, &VAR_33,
       VAR_30, VAR_29);
  if (VAR_16 < 0) {
   FUNC_15(VAR_16);
   goto bail;
  }
 }

 VAR_16 = FUNC_17(VAR_27, VAR_14, VAR_21,
     FUNC_11(VAR_25->i_blkno), VAR_24,
     &VAR_36);
 if (VAR_16 < 0) {
  FUNC_15(VAR_16);
  goto bail;
 }

 VAR_16 = FUNC_25(VAR_14, VAR_21, FUNC_1(VAR_13)->ip_blkno);
 if (VAR_16) {
  FUNC_15(VAR_16);
  goto bail;
 }

 FUNC_8(VAR_21);
 VAR_14->d_op = &VAR_10;
 FUNC_6(VAR_14, VAR_21);
bail:
 if (VAR_16 < 0 && VAR_34)
  FUNC_48(VAR_21,
     FUNC_22(VAR_20->sb, 1));
 if (VAR_16 < 0 && VAR_35)
  FUNC_47(VAR_21);
 if (VAR_27)
  FUNC_23(VAR_20, VAR_27);

 FUNC_35(VAR_13, 1);

 FUNC_4(VAR_23);
 FUNC_4(VAR_24);
 FUNC_10(VAR_33.name);
 FUNC_10(VAR_33.value);
 FUNC_28(&VAR_36);
 if (VAR_28)
  FUNC_27(VAR_28);
 if (VAR_29)
  FUNC_27(VAR_29);
 if (VAR_30)
  FUNC_27(VAR_30);
 if ((VAR_16 < 0) && VAR_21) {
  FUNC_5(VAR_21);
  FUNC_9(VAR_21);
 }

 FUNC_16(VAR_16);

 return VAR_16;
}
