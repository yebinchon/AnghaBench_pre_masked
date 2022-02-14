
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct ocfs2_extent_tree {int et_root_bh; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_11 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_12 (struct ocfs2_alloc_context*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct inode*,struct ocfs2_extent_tree*,int ,int,int *,struct ocfs2_alloc_context**) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (struct ocfs2_super*,int ) ;
 int FUNC_18 (struct ocfs2_super*,int *,int ,int ) ;
 scalar_t__ FUNC_19 (struct ocfs2_super*) ;
 int FUNC_20 (struct inode*,int ) ;

int FUNC_21(struct inode *VAR_1,
        struct ocfs2_extent_tree *VAR_2,
        u32 VAR_3, u32 VAR_4, u32 VAR_5,
        struct ocfs2_cached_dealloc_ctxt *VAR_6)
{
 int VAR_7;
 u64 VAR_8 = FUNC_7(VAR_1->i_sb, VAR_4);
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_1->i_sb);
 struct inode *VAR_10 = VAR_9->osb_tl_inode;
 handle_t *VAR_11;
 struct ocfs2_alloc_context *VAR_12 = ((void*)0);

 VAR_7 = FUNC_14(VAR_1, VAR_2, 0, 1, ((void*)0), &VAR_12);
 if (VAR_7) {
  FUNC_4(VAR_7);
  return VAR_7;
 }

 FUNC_5(&VAR_10->i_mutex);

 if (FUNC_19(VAR_9)) {
  VAR_7 = FUNC_3(VAR_9);
  if (VAR_7 < 0) {
   FUNC_4(VAR_7);
   goto out;
  }
 }

 VAR_11 = FUNC_17(VAR_9, FUNC_16(VAR_9->sb));
 if (FUNC_0(VAR_11)) {
  VAR_7 = FUNC_2(VAR_11);
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_10(VAR_11, VAR_2,
        VAR_0);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 FUNC_20(VAR_1,
      FUNC_8(VAR_1->i_sb, VAR_5));

 VAR_7 = FUNC_15(VAR_11, VAR_2, VAR_3, VAR_5, VAR_12, VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out_commit;
 }

 FUNC_11(VAR_2, -VAR_5);

 VAR_7 = FUNC_13(VAR_11, VAR_2->et_root_bh);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out_commit;
 }

 VAR_7 = FUNC_18(VAR_9, VAR_11, VAR_8, VAR_5);
 if (VAR_7)
  FUNC_4(VAR_7);

out_commit:
 FUNC_9(VAR_9, VAR_11);
out:
 FUNC_6(&VAR_10->i_mutex);

 if (VAR_12)
  FUNC_12(VAR_12);

 return VAR_7;
}
