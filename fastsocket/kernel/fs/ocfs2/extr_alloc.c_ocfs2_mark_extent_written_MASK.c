
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; int i_ino; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct ocfs2_extent_tree*,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int ,int ) ;
 int FUNC_5 (int ,char*,unsigned long long) ;
 int FUNC_6 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct inode *VAR_2,
         struct ocfs2_extent_tree *VAR_3,
         handle_t *VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7,
         struct ocfs2_alloc_context *VAR_8,
         struct ocfs2_cached_dealloc_ctxt *VAR_9)
{
 int VAR_10;

 FUNC_2(0, "Inode %lu cpos %u, len %u, phys clusters %u\n",
      VAR_2->i_ino, VAR_5, VAR_6, VAR_7);

 if (!FUNC_7(FUNC_1(VAR_2->i_sb))) {
  FUNC_5(VAR_2->i_sb, "Inode %llu has unwritten extents "
       "that are being written to, but the feature bit "
       "is not set in the super block.",
       (unsigned long long)FUNC_0(VAR_2)->ip_blkno);
  VAR_10 = -VAR_0;
  goto out;
 }





 FUNC_6(VAR_3, 0);

 VAR_10 = FUNC_4(VAR_4, VAR_3, VAR_5,
           VAR_6, VAR_7, VAR_8, VAR_9,
           0, VAR_1);
 if (VAR_10)
  FUNC_3(VAR_10);

out:
 return VAR_10;
}
