
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {int xt_clusters; } ;
struct TYPE_4__ {TYPE_1__ xb_root; } ;
struct ocfs2_xattr_block {TYPE_2__ xb_attrs; } ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,int ,int ,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int VAR_2 ;
 int FUNC_10 (struct ocfs2_alloc_context*) ;
 int FUNC_11 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_12 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_13 (struct inode*,scalar_t__,int ,int ,void*) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (struct inode*,struct ocfs2_extent_tree*,int ,int,int *,struct ocfs2_alloc_context**) ;
 int FUNC_17 (int *,struct ocfs2_extent_tree*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__,int ) ;
 int FUNC_20 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_21 (struct ocfs2_super*,int) ;
 int * FUNC_22 (struct ocfs2_super*,int ) ;
 int FUNC_23 (struct ocfs2_super*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_24 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_25(struct inode *VAR_3,
      struct buffer_head *VAR_4,
      u64 VAR_5,
      u32 VAR_6,
      u32 VAR_7,
      void *VAR_8)
{
 int VAR_9;
 struct ocfs2_super *VAR_10 = FUNC_2(VAR_3->i_sb);
 struct inode *VAR_11 = VAR_10->osb_tl_inode;
 handle_t *VAR_12;
 struct ocfs2_xattr_block *VAR_13 =
   (struct ocfs2_xattr_block *)VAR_4->b_data;
 struct ocfs2_alloc_context *VAR_14 = ((void*)0);
 struct ocfs2_cached_dealloc_ctxt VAR_15;
 struct ocfs2_extent_tree VAR_16;

 VAR_9 = FUNC_13(VAR_3, VAR_5, VAR_7,
       VAR_2, VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_9);
  return VAR_9;
 }

 FUNC_12(&VAR_16, FUNC_0(VAR_3), VAR_4);

 FUNC_11(&VAR_15);

 FUNC_5(0, "rm xattr extent rec at %u len = %u, start from %llu\n",
      VAR_6, VAR_7, (unsigned long long)VAR_5);

 FUNC_19(FUNC_0(VAR_3), VAR_5,
            VAR_7);

 VAR_9 = FUNC_16(VAR_3, &VAR_16, 0, 1, ((void*)0), &VAR_14);
 if (VAR_9) {
  FUNC_6(VAR_9);
  return VAR_9;
 }

 FUNC_7(&VAR_11->i_mutex);

 if (FUNC_24(VAR_10)) {
  VAR_9 = FUNC_3(VAR_10);
  if (VAR_9 < 0) {
   FUNC_6(VAR_9);
   goto out;
  }
 }

 VAR_12 = FUNC_22(VAR_10, FUNC_18(VAR_10->sb));
 if (FUNC_1(VAR_12)) {
  VAR_9 = -VAR_0;
  FUNC_6(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_14(VAR_12, FUNC_0(VAR_3), VAR_4,
          VAR_1);
 if (VAR_9) {
  FUNC_6(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_17(VAR_12, &VAR_16, VAR_6, VAR_7, VAR_14,
      &VAR_15);
 if (VAR_9) {
  FUNC_6(VAR_9);
  goto out_commit;
 }

 FUNC_4(&VAR_13->xb_attrs.xb_root.xt_clusters, -VAR_7);

 VAR_9 = FUNC_15(VAR_12, VAR_4);
 if (VAR_9) {
  FUNC_6(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_23(VAR_10, VAR_12, VAR_5, VAR_7);
 if (VAR_9)
  FUNC_6(VAR_9);

out_commit:
 FUNC_9(VAR_10, VAR_12);
out:
 FUNC_21(VAR_10, 1);

 FUNC_8(&VAR_11->i_mutex);

 if (VAR_14)
  FUNC_10(VAR_14);

 FUNC_20(VAR_10, &VAR_15);

 return VAR_9;
}
