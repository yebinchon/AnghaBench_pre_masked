
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_extent_rec {int e_cpos; int e_leaf_clusters; int e_blkno; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,unsigned long long,...) ;
 int FUNC_7 (int ,struct ocfs2_extent_list*,int ,struct buffer_head**) ;
 int FUNC_8 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1,
          u32 VAR_2,
          u64 *VAR_3,
          u32 *VAR_4,
          u32 *VAR_5,
          struct ocfs2_extent_list *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_extent_block *VAR_10;
 struct ocfs2_extent_rec *VAR_11 = ((void*)0);
 u64 VAR_12 = 0;

 if (VAR_6->l_tree_depth) {
  VAR_7 = FUNC_7(FUNC_0(VAR_1), VAR_6, VAR_2,
          &VAR_9);
  if (VAR_7) {
   FUNC_5(VAR_7);
   goto out;
  }

  VAR_10 = (struct ocfs2_extent_block *) VAR_9->b_data;
  VAR_6 = &VAR_10->h_list;

  if (VAR_6->l_tree_depth) {
   FUNC_6(VAR_1->i_sb,
        "Inode %lu has non zero tree depth in "
        "xattr tree block %llu\n", VAR_1->i_ino,
        (unsigned long long)VAR_9->b_blocknr);
   VAR_7 = -VAR_0;
   goto out;
  }
 }

 for (VAR_8 = FUNC_2(VAR_6->l_next_free_rec) - 1; VAR_8 >= 0; VAR_8--) {
  VAR_11 = &VAR_6->l_recs[VAR_8];

  if (FUNC_3(VAR_11->e_cpos) <= VAR_2) {
   VAR_12 = FUNC_4(VAR_11->e_blkno);
   break;
  }
 }

 if (!VAR_12) {
  FUNC_6(VAR_1->i_sb, "Inode %lu has bad extent "
       "record (%u, %u, 0) in xattr", VAR_1->i_ino,
       FUNC_3(VAR_11->e_cpos),
       FUNC_8(VAR_6, VAR_11));
  VAR_7 = -VAR_0;
  goto out;
 }

 *VAR_3 = FUNC_4(VAR_11->e_blkno);
 *VAR_5 = FUNC_2(VAR_11->e_leaf_clusters);
 if (VAR_4)
  *VAR_4 = FUNC_3(VAR_11->e_cpos);
out:
 FUNC_1(VAR_9);
 return VAR_7;
}
