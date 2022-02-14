
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_root_block {int dr_free_blk; } ;
struct ocfs2_dir_block_trailer {int db_free_next; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 struct ocfs2_dir_block_trailer* FUNC_5 (struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, handle_t *VAR_2,
         struct buffer_head *VAR_3,
         struct buffer_head *VAR_4)
{
 int VAR_5;
 struct ocfs2_dx_root_block *VAR_6;
 struct ocfs2_dir_block_trailer *VAR_7;

 VAR_5 = FUNC_3(VAR_2, FUNC_0(VAR_1), VAR_3,
          VAR_0);
 if (VAR_5) {
  FUNC_2(VAR_5);
  goto out;
 }
 VAR_7 = FUNC_5(VAR_4, VAR_1->i_sb);
 VAR_6 = (struct ocfs2_dx_root_block *)VAR_3->b_data;

 VAR_7->db_free_next = VAR_6->dr_free_blk;
 VAR_6->dr_free_blk = FUNC_1(VAR_4->b_blocknr);

 FUNC_4(VAR_2, VAR_3);

out:
 return VAR_5;
}
