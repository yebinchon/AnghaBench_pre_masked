
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*,int ,int *,struct ocfs2_alloc_context*,struct buffer_head**,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct ocfs2_extent_tree*,int ,int ,int,int ,struct ocfs2_alloc_context*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
        struct ocfs2_extent_tree *VAR_1,
        u32 VAR_2, handle_t *VAR_3,
        struct ocfs2_alloc_context *VAR_4,
        struct ocfs2_alloc_context *VAR_5,
        struct buffer_head **VAR_6,
        int VAR_7)
{
 int VAR_8;
 u64 VAR_9;

 VAR_8 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_6,
      VAR_7, &VAR_9);
 if (VAR_8) {
  FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_2, VAR_9, 1, 0,
      VAR_5);
 if (VAR_8)
  FUNC_1(VAR_8);
out:
 return VAR_8;
}
