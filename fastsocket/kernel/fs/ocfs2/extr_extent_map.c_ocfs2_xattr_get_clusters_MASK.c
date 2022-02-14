
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {unsigned int e_flags; int e_blkno; int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ,unsigned long long,...) ;
 int FUNC_8 (int ,struct ocfs2_extent_list*,scalar_t__,struct buffer_head**) ;
 scalar_t__ FUNC_9 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_10 (struct ocfs2_extent_list*,scalar_t__) ;

int FUNC_11(struct inode *VAR_1, u32 VAR_2,
        u32 *VAR_3, u32 *VAR_4,
        struct ocfs2_extent_list *VAR_5,
        unsigned int *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_extent_block *VAR_10;
 struct ocfs2_extent_rec *VAR_11;
 u32 VAR_12;

 if (VAR_5->l_tree_depth) {
  VAR_7 = FUNC_8(FUNC_1(VAR_1), VAR_5, VAR_2,
          &VAR_9);
  if (VAR_7) {
   FUNC_5(VAR_7);
   goto out;
  }

  VAR_10 = (struct ocfs2_extent_block *) VAR_9->b_data;
  VAR_5 = &VAR_10->h_list;

  if (VAR_5->l_tree_depth) {
   FUNC_7(VAR_1->i_sb,
        "Inode %lu has non zero tree depth in "
        "xattr leaf block %llu\n", VAR_1->i_ino,
        (unsigned long long)VAR_9->b_blocknr);
   VAR_7 = -VAR_0;
   goto out;
  }
 }

 VAR_8 = FUNC_10(VAR_5, VAR_2);
 if (VAR_8 == -1) {
  VAR_7 = -VAR_0;
  FUNC_5(VAR_7);
  goto out;
 } else {
  VAR_11 = &VAR_5->l_recs[VAR_8];
  FUNC_0(VAR_2 < FUNC_3(VAR_11->e_cpos));

  if (!VAR_11->e_blkno) {
   FUNC_7(VAR_1->i_sb, "Inode %lu has bad extent "
        "record (%u, %u, 0) in xattr", VAR_1->i_ino,
        FUNC_3(VAR_11->e_cpos),
        FUNC_9(VAR_5, VAR_11));
   VAR_7 = -VAR_0;
   goto out;
  }
  VAR_12 = VAR_2 - FUNC_3(VAR_11->e_cpos);
  *VAR_3 = FUNC_6(VAR_1->i_sb,
          FUNC_4(VAR_11->e_blkno));
  *VAR_3 = *VAR_3 + VAR_12;
  if (VAR_4)
   *VAR_4 = FUNC_9(VAR_5, VAR_11) - VAR_12;

  if (VAR_6)
   *VAR_6 = VAR_11->e_flags;
 }
out:
 if (VAR_9)
  FUNC_2(VAR_9);
 return VAR_7;
}
