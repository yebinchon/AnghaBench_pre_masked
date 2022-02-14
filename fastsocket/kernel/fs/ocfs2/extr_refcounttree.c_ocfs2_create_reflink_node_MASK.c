
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_refcount_block {int dummy; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_6 (struct inode*,struct inode*,struct buffer_head*,int *,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_7 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*) ;
 int FUNC_8 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_9 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_11 (struct ocfs2_super*,int) ;
 int FUNC_12 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_13 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4,
         bool VAR_5)
{
 int VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_cached_dealloc_ctxt VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_1->i_sb);
 struct ocfs2_refcount_block *VAR_10;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_2->b_data;
 struct ocfs2_refcount_tree *VAR_12;

 FUNC_8(&VAR_8);

 VAR_6 = FUNC_12(VAR_3, VAR_4,
          FUNC_3(VAR_11->i_refcount_loc));
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto out;
 }

 if (FUNC_0(VAR_1)->ip_dyn_features & VAR_0) {
  VAR_6 = FUNC_7(VAR_1, VAR_2,
        VAR_3, VAR_4);
  if (VAR_6)
   FUNC_4(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_9(VAR_9, FUNC_3(VAR_11->i_refcount_loc),
           1, &VAR_12, &VAR_7);
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto out;
 }
 VAR_10 = (struct ocfs2_refcount_block *)VAR_7->b_data;

 VAR_6 = FUNC_6(VAR_1, VAR_3, VAR_4,
       &VAR_12->rf_ci, VAR_7,
       &VAR_8);
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto out_unlock_refcount;
 }

out_unlock_refcount:
 FUNC_13(VAR_9, VAR_12, 1);
 FUNC_2(VAR_7);
out:
 if (FUNC_5(&VAR_8)) {
  FUNC_11(VAR_9, 1);
  FUNC_10(VAR_9, &VAR_8);
 }

 return VAR_6;
}
