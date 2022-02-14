
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,struct buffer_head*,int ,int ,int*,int*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int ,struct ocfs2_refcount_tree**) ;
 int FUNC_11 (int *,int ,struct buffer_head**) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,struct ocfs2_alloc_context**) ;

int FUNC_14(struct inode *VAR_2,
       struct buffer_head *VAR_3,
       u64 VAR_4,
       u32 VAR_5,
       int *VAR_6,
       struct ocfs2_alloc_context **VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_3->b_data;
 struct ocfs2_inode_info *VAR_11 = FUNC_1(VAR_2);
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_13;
 u64 VAR_14 = FUNC_7(VAR_2->i_sb, VAR_4);

 if (!FUNC_12(FUNC_2(VAR_2->i_sb))) {
  FUNC_9(VAR_2->i_sb, "Inode %lu want to use refcount "
       "tree, but the feature bit is not set in the "
       "super block.", VAR_2->i_ino);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_0(!(VAR_11->ip_dyn_features & VAR_1));

 VAR_8 = FUNC_10(FUNC_2(VAR_2->i_sb),
          FUNC_4(VAR_10->i_refcount_loc), &VAR_13);
 if (VAR_8) {
  FUNC_6(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_11(&VAR_13->rf_ci,
     FUNC_4(VAR_10->i_refcount_loc),
     &VAR_12);
 if (VAR_8) {
  FUNC_6(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_8(VAR_2->i_sb,
            &VAR_13->rf_ci,
            VAR_12,
            VAR_14, VAR_5,
            &VAR_9, VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_8);
  goto out;
 }

 FUNC_5(0, "reserve new metadata %d, credits = %d\n",
      VAR_9, *VAR_6);

 if (VAR_9) {
  VAR_8 = FUNC_13(FUNC_2(VAR_2->i_sb),
       VAR_9, VAR_7);
  if (VAR_8)
   FUNC_6(VAR_8);
 }

out:
 FUNC_3(VAR_12);
 return VAR_8;
}
