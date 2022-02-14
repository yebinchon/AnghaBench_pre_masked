
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocfs2_super {TYPE_2__* sb; int root_blkno; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_7__ {int ip_blkno; } ;
struct TYPE_6__ {TYPE_1__* dq_op; } ;
struct TYPE_5__ {scalar_t__ (* alloc_inode ) (struct inode*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ocfs2_super*,int *) ;
 int FUNC_12 (struct ocfs2_alloc_context*) ;
 int FUNC_13 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (TYPE_2__*,int ,int ) ;
 int FUNC_18 (struct ocfs2_super*,struct inode*,struct inode*,int ,struct buffer_head**,struct buffer_head*,int *,struct ocfs2_alloc_context*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct ocfs2_super*,int *,struct inode*,struct ocfs2_dinode*,char*,struct ocfs2_dir_lookup_result*,struct inode*) ;
 int FUNC_21 (struct ocfs2_super*,struct inode**,int ,char*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_22 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;
 int * FUNC_23 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 scalar_t__ FUNC_25 (struct inode*,int) ;
 int FUNC_26 (struct inode*) ;

int FUNC_27(struct inode *VAR_6,
     int VAR_7,
     struct inode **VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct inode *VAR_11 = ((void*)0);
 struct inode *VAR_12 = ((void*)0);
 struct ocfs2_super *VAR_13 = FUNC_2(VAR_6->i_sb);
 struct ocfs2_dinode *VAR_14 = ((void*)0);
 handle_t *VAR_15 = ((void*)0);
 char VAR_16[VAR_5 + 1];
 struct buffer_head *VAR_17 = ((void*)0);
 struct buffer_head *VAR_18 = ((void*)0);
 struct ocfs2_alloc_context *VAR_19 = ((void*)0);
 struct ocfs2_dir_lookup_result VAR_20 = { ((void*)0), };

 VAR_9 = FUNC_15(VAR_6, &VAR_17, 1);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_8(VAR_9);
  return VAR_9;
 }





 VAR_9 = FUNC_21(VAR_13, &VAR_12,
       VAR_13->root_blkno,
       VAR_16, &VAR_20);
 if (VAR_9 < 0) {
  FUNC_8(VAR_9);
  goto leave;
 }


 VAR_9 = FUNC_22(VAR_13, &VAR_19);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_3)
   FUNC_8(VAR_9);
  goto leave;
 }

 VAR_11 = FUNC_14(VAR_6, VAR_7);
 if (!VAR_11) {
  VAR_9 = -VAR_2;
  FUNC_8(VAR_9);
  goto leave;
 }

 VAR_15 = FUNC_23(VAR_13, FUNC_17(VAR_13->sb, 0, 0));
 if (FUNC_0(VAR_15)) {
  VAR_9 = FUNC_3(VAR_15);
  VAR_15 = ((void*)0);
  FUNC_8(VAR_9);
  goto leave;
 }



 if (FUNC_24(VAR_13->sb) &&
     VAR_13->sb->dq_op->alloc_inode(VAR_11, 1) == VAR_4) {
  VAR_9 = -VAR_0;
  goto leave;
 }
 VAR_10 = 1;


 VAR_9 = FUNC_18(VAR_13, VAR_6, VAR_11,
        0, &VAR_18, VAR_17, VAR_15,
        VAR_19);
 if (VAR_9 < 0) {
  FUNC_8(VAR_9);
  goto leave;
 }

 VAR_9 = FUNC_10(FUNC_1(VAR_11)->ip_blkno, VAR_16);
 if (VAR_9 < 0) {
  FUNC_8(VAR_9);
  goto leave;
 }

 VAR_14 = (struct ocfs2_dinode *)VAR_18->b_data;
 VAR_9 = FUNC_20(VAR_13, VAR_15, VAR_11, VAR_14, VAR_16,
      &VAR_20, VAR_12);
 if (VAR_9 < 0) {
  FUNC_8(VAR_9);
  goto leave;
 }


 VAR_9 = FUNC_19(VAR_11);
 if (VAR_9 < 0)
  FUNC_8(VAR_9);

leave:
 if (VAR_9 < 0 && VAR_10)
  FUNC_26(VAR_11);
 if (VAR_15)
  FUNC_11(VAR_13, VAR_15);

 if (VAR_12) {

  FUNC_16(VAR_12, 1);
  FUNC_9(&VAR_12->i_mutex);
  FUNC_6(VAR_12);
 }

 if (VAR_9 == -VAR_3)
  FUNC_7(0, "Disk is full\n");

 if ((VAR_9 < 0) && VAR_11) {
  FUNC_5(VAR_11);
  FUNC_6(VAR_11);
 }

 if (VAR_19)
  FUNC_12(VAR_19);

 FUNC_4(VAR_18);

 if (!VAR_9)
  *VAR_8 = VAR_11;

 FUNC_13(&VAR_20);

 FUNC_16(VAR_6, 1);
 FUNC_4(VAR_17);
 return VAR_9;
}
