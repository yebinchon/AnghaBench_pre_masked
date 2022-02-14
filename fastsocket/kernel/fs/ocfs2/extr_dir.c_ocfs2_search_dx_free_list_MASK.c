
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_dx_root_block {int dr_free_blk; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_prev_leaf_bh; struct buffer_head* dl_leaf_bh; } ;
struct ocfs2_dir_block_trailer {int db_free_next; int db_free_rec_len; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,scalar_t__,struct buffer_head**) ;
 struct ocfs2_dir_block_trailer* FUNC_6 (struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         int VAR_3,
         struct ocfs2_dir_lookup_result *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct buffer_head *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct ocfs2_dir_block_trailer *VAR_8;
 u64 VAR_9;
 int VAR_10 = FUNC_0(VAR_3);
 struct ocfs2_dx_root_block *VAR_11;

 VAR_11 = (struct ocfs2_dx_root_block *)VAR_2->b_data;
 VAR_9 = FUNC_3(VAR_11->dr_free_blk);

 while (VAR_9) {
  FUNC_1(VAR_7);
  VAR_7 = VAR_6;
  VAR_6 = ((void*)0);

  VAR_5 = FUNC_5(VAR_1, VAR_9, &VAR_6);
  if (VAR_5) {
   FUNC_4(VAR_5);
   goto out;
  }

  VAR_8 = FUNC_6(VAR_6, VAR_1->i_sb);
  if (VAR_10 <= FUNC_2(VAR_8->db_free_rec_len)) {
   VAR_4->dl_leaf_bh = VAR_6;
   VAR_4->dl_prev_leaf_bh = VAR_7;
   VAR_6 = ((void*)0);
   VAR_7 = ((void*)0);
   break;
  }

  VAR_9 = FUNC_3(VAR_8->db_free_next);
 }

 if (!VAR_9)
  VAR_5 = -VAR_0;

out:

 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return VAR_5;
}
