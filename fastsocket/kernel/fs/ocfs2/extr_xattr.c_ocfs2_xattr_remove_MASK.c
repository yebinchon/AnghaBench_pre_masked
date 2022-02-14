
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_refcount_tree {struct ocfs2_caching_info rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_dinode {int i_dyn_features; scalar_t__ i_xattr_loc; scalar_t__ i_refcount_loc; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int FUNC_12 (int ,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,struct ocfs2_refcount_tree*,int) ;
 int FUNC_16 (struct inode*,int ,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_17 (struct inode*,struct buffer_head*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct inode *VAR_5, struct buffer_head *VAR_6)
{
 struct ocfs2_inode_info *VAR_7 = FUNC_2(VAR_5);
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct ocfs2_refcount_tree *VAR_9 = ((void*)0);
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_caching_info *VAR_11 = ((void*)0);
 handle_t *VAR_12;
 int VAR_13;

 if (!FUNC_14(FUNC_3(VAR_5->i_sb)))
  return 0;

 if (!(VAR_7->ip_dyn_features & VAR_1))
  return 0;

 if (FUNC_2(VAR_5)->ip_dyn_features & VAR_0) {
  VAR_13 = FUNC_12(FUNC_3(VAR_5->i_sb),
            FUNC_7(VAR_8->i_refcount_loc),
            1, &VAR_9, &VAR_10);
  if (VAR_13) {
   FUNC_8(VAR_13);
   goto out;
  }
  VAR_11 = &VAR_9->rf_ci;

 }

 if (VAR_7->ip_dyn_features & VAR_2) {
  VAR_13 = FUNC_17(VAR_5, VAR_6,
            VAR_11, VAR_10);
  if (VAR_13 < 0) {
   FUNC_8(VAR_13);
   goto out;
  }
 }

 if (VAR_8->i_xattr_loc) {
  VAR_13 = FUNC_16(VAR_5,
          FUNC_7(VAR_8->i_xattr_loc),
          VAR_11, VAR_10);
  if (VAR_13 < 0) {
   FUNC_8(VAR_13);
   goto out;
  }
 }

 VAR_12 = FUNC_13((FUNC_3(VAR_5->i_sb)),
       VAR_3);
 if (FUNC_1(VAR_12)) {
  VAR_13 = FUNC_4(VAR_12);
  FUNC_8(VAR_13);
  goto out;
 }
 VAR_13 = FUNC_10(VAR_12, FUNC_0(VAR_5), VAR_6,
          VAR_4);
 if (VAR_13) {
  FUNC_8(VAR_13);
  goto out_commit;
 }

 VAR_8->i_xattr_loc = 0;

 FUNC_18(&VAR_7->ip_lock);
 VAR_7->ip_dyn_features &= ~(VAR_2 | VAR_1);
 VAR_8->i_dyn_features = FUNC_6(VAR_7->ip_dyn_features);
 FUNC_19(&VAR_7->ip_lock);

 VAR_13 = FUNC_11(VAR_12, VAR_6);
 if (VAR_13 < 0)
  FUNC_8(VAR_13);
out_commit:
 FUNC_9(FUNC_3(VAR_5->i_sb), VAR_12);
out:
 if (VAR_9)
  FUNC_15(FUNC_3(VAR_5->i_sb), VAR_9, 1);
 FUNC_5(VAR_10);
 return VAR_13;
}
