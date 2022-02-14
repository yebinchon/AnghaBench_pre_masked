
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ocfs2_xattr_value_buf {int (* vb_access ) (int *,int ,TYPE_4__*,int ) ;TYPE_4__* vb_bh; } ;
struct ocfs2_xattr_reflink {TYPE_4__* new_bh; int new_inode; TYPE_3__* old_bh; int ref_root_bh; TYPE_1__* old_inode; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_super {TYPE_2__* sb; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_dinode {void* i_dyn_features; void* i_xattr_inline_size; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;
struct TYPE_10__ {scalar_t__ b_data; } ;
struct TYPE_9__ {scalar_t__ b_data; } ;
struct TYPE_8__ {int s_blocksize; } ;
struct TYPE_7__ {int i_sb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (struct ocfs2_alloc_context*) ;
 int VAR_3 ;
 int FUNC_11 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (struct ocfs2_super*,struct ocfs2_xattr_header*,int ,int*,struct ocfs2_alloc_context**) ;
 int FUNC_14 (int *,struct ocfs2_xattr_reflink*,TYPE_3__*,struct ocfs2_xattr_header*,TYPE_4__*,struct ocfs2_xattr_header*,struct ocfs2_xattr_value_buf*,struct ocfs2_alloc_context*,int ,int *) ;
 int * FUNC_15 (struct ocfs2_super*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct ocfs2_xattr_reflink *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 handle_t *VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_3(VAR_4->old_inode->i_sb);
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_4->old_bh->b_data;
 int VAR_10 = FUNC_6(VAR_9->i_xattr_inline_size);
 int VAR_11 = VAR_8->sb->s_blocksize - VAR_10;
 struct ocfs2_xattr_header *VAR_12 = (struct ocfs2_xattr_header *)
     (VAR_4->old_bh->b_data + VAR_11);
 struct ocfs2_xattr_header *VAR_13 = (struct ocfs2_xattr_header *)
     (VAR_4->new_bh->b_data + VAR_11);
 struct ocfs2_alloc_context *VAR_14 = ((void*)0);
 struct ocfs2_inode_info *VAR_15;
 struct ocfs2_dinode *VAR_16;
 struct ocfs2_xattr_value_buf VAR_17 = {
  .vb_bh = VAR_4->new_bh,
  .vb_access = FUNC_11,
 };

 VAR_5 = FUNC_13(VAR_8, VAR_12, VAR_4->ref_root_bh,
        &VAR_6, &VAR_14);
 if (VAR_5) {
  FUNC_8(VAR_5);
  goto out;
 }

 VAR_7 = FUNC_15(VAR_8, VAR_6);
 if (FUNC_1(VAR_7)) {
  VAR_5 = FUNC_4(VAR_7);
  FUNC_8(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_11(VAR_7, FUNC_0(VAR_4->new_inode),
          VAR_4->new_bh, VAR_2);
 if (VAR_5) {
  FUNC_8(VAR_5);
  goto out_commit;
 }

 FUNC_7(VAR_4->new_bh->b_data + VAR_11,
        VAR_4->old_bh->b_data + VAR_11, VAR_10);

 VAR_16 = (struct ocfs2_dinode *)VAR_4->new_bh->b_data;
 VAR_16->i_xattr_inline_size = FUNC_5(VAR_10);

 VAR_5 = FUNC_14(VAR_7, VAR_4, VAR_4->old_bh, VAR_12,
      VAR_4->new_bh, VAR_13, &VAR_17, VAR_14,
      VAR_3, ((void*)0));
 if (VAR_5) {
  FUNC_8(VAR_5);
  goto out_commit;
 }

 VAR_15 = FUNC_2(VAR_4->new_inode);
 FUNC_16(&VAR_15->ip_lock);
 VAR_15->ip_dyn_features |= VAR_0 | VAR_1;
 VAR_16->i_dyn_features = FUNC_5(VAR_15->ip_dyn_features);
 FUNC_17(&VAR_15->ip_lock);

 FUNC_12(VAR_7, VAR_4->new_bh);

out_commit:
 FUNC_9(VAR_8, VAR_7);

out:
 if (VAR_14)
  FUNC_10(VAR_14);
 return VAR_5;
}
