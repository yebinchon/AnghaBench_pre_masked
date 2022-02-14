
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct ocfs2_extent_tree*,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2,
    struct ocfs2_extent_tree *VAR_3,
    handle_t *VAR_4, u32 VAR_5,
    u32 VAR_6, u32 VAR_7,
    struct ocfs2_alloc_context *VAR_8,
    struct ocfs2_cached_dealloc_ctxt *VAR_9)
{
 int VAR_10;

 FUNC_1(0, "Inode %lu refcount tree cpos %u, len %u, phys cluster %u\n",
      VAR_2->i_ino, VAR_5, VAR_6, VAR_7);

 if (!FUNC_5(FUNC_0(VAR_2->i_sb))) {
  FUNC_4(VAR_2->i_sb, "Inode %lu want to use refcount "
       "tree, but the feature bit is not set in the "
       "super block.", VAR_2->i_ino);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_3, VAR_5,
           VAR_6, VAR_7, VAR_8, VAR_9,
           VAR_1, 0);
 if (VAR_10)
  FUNC_2(VAR_10);

out:
 return VAR_10;
}
