
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,struct ocfs2_extent_tree*,int *,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__,struct ocfs2_cached_dealloc_ctxt*,int *) ;
 int FUNC_9 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_12 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_15 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_16 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_17 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_18 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_19 (struct ocfs2_super*,int) ;
 int FUNC_20 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_21 (struct inode*,struct buffer_head*,int *,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;

__attribute__((used)) static int FUNC_22(struct inode *VAR_4,
          struct buffer_head *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_inode_info *VAR_9 = FUNC_2(VAR_4);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct ocfs2_super *VAR_11 = FUNC_3(VAR_4->i_sb);
 struct ocfs2_refcount_tree *VAR_12;
 unsigned int VAR_13;
 loff_t VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 struct ocfs2_cached_dealloc_ctxt VAR_19;
 struct ocfs2_extent_tree VAR_20;

 FUNC_15(&VAR_19);

 if (!(VAR_9->ip_dyn_features & VAR_1)) {
  VAR_6 = FUNC_11(VAR_4, VAR_5);
  if (VAR_6) {
   FUNC_7(VAR_6);
   goto out;
  }
 }

 FUNC_0(!VAR_10->i_refcount_loc);
 VAR_6 = FUNC_17(VAR_11,
           FUNC_6(VAR_10->i_refcount_loc), 1,
           &VAR_12, &VAR_8);
 if (VAR_6) {
  FUNC_7(VAR_6);
  goto out;
 }

 if (VAR_9->ip_dyn_features & VAR_3)
  goto attach_xattr;

 FUNC_16(&VAR_20, FUNC_1(VAR_4), VAR_5);

 VAR_14 = FUNC_5(VAR_4);
 VAR_17 = FUNC_10(VAR_4->i_sb, VAR_14);

 VAR_15 = 0;
 while (VAR_15 < VAR_17) {
  VAR_6 = FUNC_14(VAR_4, VAR_15, &VAR_18,
      &VAR_16, &VAR_13);

  if (VAR_18 && !(VAR_13 & VAR_0)) {
   VAR_6 = FUNC_8(VAR_4, &VAR_20,
            &VAR_12->rf_ci,
            VAR_8, VAR_15,
            VAR_18, VAR_16,
            &VAR_19, ((void*)0));
   if (VAR_6) {
    FUNC_7(VAR_6);
    goto unlock;
   }

   VAR_7 = 1;
  }
  VAR_15 += VAR_16;
 }

attach_xattr:
 if (VAR_9->ip_dyn_features & VAR_2) {
  VAR_6 = FUNC_21(VAR_4, VAR_5,
             &VAR_12->rf_ci,
             VAR_8,
             &VAR_19);
  if (VAR_6) {
   FUNC_7(VAR_6);
   goto unlock;
  }
 }

 if (VAR_7) {
  VAR_6 = FUNC_9(VAR_4, VAR_5);
  if (VAR_6)
   FUNC_7(VAR_6);
 }

unlock:
 FUNC_20(VAR_11, VAR_12, 1);
 FUNC_4(VAR_8);

 if (!VAR_6 && FUNC_12(&VAR_19)) {
  FUNC_19(VAR_11, 1);
  FUNC_18(VAR_11, &VAR_19);
 }
out:




 FUNC_13(VAR_4, 0);

 return VAR_6;
}
