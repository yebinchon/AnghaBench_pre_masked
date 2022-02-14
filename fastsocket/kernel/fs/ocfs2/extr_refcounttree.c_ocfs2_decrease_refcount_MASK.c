
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_refcount_tree {int rf_ci; int rf_blkno; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,struct buffer_head*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int ,int ,struct ocfs2_refcount_tree**) ;
 int FUNC_8 (int *,int ,struct buffer_head**) ;

int FUNC_9(struct inode *VAR_1,
       handle_t *VAR_2, u32 VAR_3, u32 VAR_4,
       struct ocfs2_alloc_context *VAR_5,
       struct ocfs2_cached_dealloc_ctxt *VAR_6,
       int VAR_7)
{
 int VAR_8;
 u64 VAR_9;
 struct ocfs2_inode_info *VAR_10 = FUNC_1(VAR_1);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_12;

 FUNC_0(!(VAR_10->ip_dyn_features & VAR_0));

 VAR_8 = FUNC_6(VAR_1, &VAR_9);
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_7(FUNC_2(VAR_1->i_sb), VAR_9, &VAR_12);
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_8(&VAR_12->rf_ci, VAR_12->rf_blkno,
     &VAR_11);
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_2, &VAR_12->rf_ci, VAR_11,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  FUNC_5(VAR_8);
out:
 FUNC_4(VAR_11);
 return VAR_8;
}
