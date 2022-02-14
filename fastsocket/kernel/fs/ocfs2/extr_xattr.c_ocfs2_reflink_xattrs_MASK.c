
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_reflink {int * xattr_reflinked; struct ocfs2_cached_dealloc_ctxt* dealloc; struct buffer_head* ref_root_bh; int * ref_ci; struct buffer_head* new_bh; struct buffer_head* old_bh; struct inode* new_inode; struct inode* old_inode; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {int i_xattr_loc; int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_6 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_7 (int ,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_8 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_9 (struct ocfs2_xattr_reflink*,struct buffer_head*) ;
 int FUNC_10 (struct ocfs2_xattr_reflink*) ;
 int * VAR_1 ;
 int FUNC_11 (int ,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,struct ocfs2_refcount_tree*,int) ;

int FUNC_14(struct inode *VAR_2,
    struct buffer_head *VAR_3,
    struct inode *VAR_4,
    struct buffer_head *VAR_5,
    bool VAR_6)
{
 int VAR_7;
 struct ocfs2_xattr_reflink VAR_8;
 struct ocfs2_inode_info *VAR_9 = FUNC_0(VAR_2);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_3->b_data;
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_cached_dealloc_ctxt VAR_12;
 struct ocfs2_refcount_tree *VAR_13;
 struct buffer_head *VAR_14 = ((void*)0);

 VAR_7 = FUNC_7(FUNC_1(VAR_2->i_sb),
           FUNC_3(VAR_10->i_refcount_loc),
           1, &VAR_13, &VAR_14);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 FUNC_6(&VAR_12);

 VAR_8.old_inode = VAR_2;
 VAR_8.new_inode = VAR_4;
 VAR_8.old_bh = VAR_3;
 VAR_8.new_bh = VAR_5;
 VAR_8.ref_ci = &VAR_13->rf_ci;
 VAR_8.ref_root_bh = VAR_14;
 VAR_8.dealloc = &VAR_12;
 if (VAR_6)
  VAR_8.xattr_reflinked = ((void*)0);
 else
  VAR_8.xattr_reflinked = VAR_1;

 if (VAR_9->ip_dyn_features & VAR_0) {
  VAR_7 = FUNC_10(&VAR_8);
  if (VAR_7) {
   FUNC_4(VAR_7);
   goto out_unlock;
  }
 }

 if (!VAR_10->i_xattr_loc)
  goto out_unlock;

 VAR_7 = FUNC_8(VAR_2, FUNC_3(VAR_10->i_xattr_loc),
         &VAR_11);
 if (VAR_7 < 0) {
  FUNC_4(VAR_7);
  goto out_unlock;
 }

 VAR_7 = FUNC_9(&VAR_8, VAR_11);
 if (VAR_7)
  FUNC_4(VAR_7);

 FUNC_2(VAR_11);

out_unlock:
 FUNC_13(FUNC_1(VAR_2->i_sb),
       VAR_13, 1);
 FUNC_2(VAR_14);

 if (FUNC_5(&VAR_12)) {
  FUNC_12(FUNC_1(VAR_2->i_sb), 1);
  FUNC_11(FUNC_1(VAR_2->i_sb), &VAR_12);
 }

out:
 return VAR_7;
}
