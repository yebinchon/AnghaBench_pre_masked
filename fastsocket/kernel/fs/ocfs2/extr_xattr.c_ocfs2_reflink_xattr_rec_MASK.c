
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned long long u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_reflink_xattr_tree_args {int new_blk_bh; TYPE_1__* reflink; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int new_inode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,unsigned long long,unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_7 (int ,unsigned long long) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (struct ocfs2_alloc_context*) ;
 int FUNC_10 (struct ocfs2_extent_tree*,int ,int ) ;
 int FUNC_11 (int *,struct ocfs2_extent_tree*,unsigned long long,scalar_t__,unsigned long long,int ,struct ocfs2_alloc_context*) ;
 int FUNC_12 (struct ocfs2_reflink_xattr_tree_args*,struct ocfs2_extent_tree*,scalar_t__,unsigned long long,int*,struct ocfs2_alloc_context**,struct ocfs2_alloc_context**) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,unsigned long long,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct ocfs2_reflink_xattr_tree_args*) ;
 int * FUNC_14 (struct ocfs2_super*,int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_0,
       struct buffer_head *VAR_1,
       u64 VAR_2,
       u32 VAR_3,
       u32 VAR_4,
       void *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9;
 u64 VAR_10;
 handle_t *VAR_11;
 struct ocfs2_reflink_xattr_tree_args *VAR_12 =
   (struct ocfs2_reflink_xattr_tree_args *)VAR_5;
 struct ocfs2_super *VAR_13 = FUNC_2(VAR_0->i_sb);
 struct ocfs2_alloc_context *VAR_14 = ((void*)0);
 struct ocfs2_alloc_context *VAR_15 = ((void*)0);
 struct ocfs2_extent_tree VAR_16;

 FUNC_10(&VAR_16,
       FUNC_0(VAR_12->reflink->new_inode),
       VAR_12->new_blk_bh);

 VAR_6 = FUNC_12(VAR_12, &VAR_16, VAR_2,
            VAR_4, &VAR_7,
            &VAR_14, &VAR_15);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_11 = FUNC_14(VAR_13, VAR_7);
 if (FUNC_1(VAR_11)) {
  VAR_6 = FUNC_3(VAR_11);
  FUNC_5(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_6(VAR_13, VAR_11, VAR_15,
       VAR_4, &VAR_8, &VAR_9);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out_commit;
 }

 VAR_10 = FUNC_7(VAR_13->sb, VAR_8);

 FUNC_4(0, "reflink xattr buckets %llu to %llu, len %u\n",
      (unsigned long long)VAR_2, (unsigned long long)VAR_10, VAR_4);
 VAR_6 = FUNC_13(VAR_11, VAR_2, VAR_10, VAR_4,
       VAR_14, VAR_15, VAR_12);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out_commit;
 }

 FUNC_4(0, "insert new xattr extent rec start %llu len %u to %u\n",
      (unsigned long long)VAR_10, VAR_4, VAR_3);
 VAR_6 = FUNC_11(VAR_11, &VAR_16, VAR_3, VAR_10,
      VAR_4, 0, VAR_14);
 if (VAR_6)
  FUNC_5(VAR_6);

out_commit:
 FUNC_8(VAR_13, VAR_11);

out:
 if (VAR_14)
  FUNC_9(VAR_14);
 if (VAR_15)
  FUNC_9(VAR_15);
 return VAR_6;
}
