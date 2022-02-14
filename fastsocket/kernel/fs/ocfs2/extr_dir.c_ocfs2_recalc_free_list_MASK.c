
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_lookup_result {int dl_leaf_bh; } ;
struct ocfs2_dir_block_trailer {int db_free_rec_len; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct inode*,int *,struct ocfs2_dir_lookup_result*) ;
 struct ocfs2_dir_block_trailer* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, handle_t *VAR_1,
       struct ocfs2_dir_lookup_result *VAR_2)
{
 int VAR_3;
 struct ocfs2_dir_block_trailer *VAR_4;


 VAR_3 = FUNC_1(VAR_0->i_sb, VAR_2->dl_leaf_bh);
 if (VAR_3) {





  VAR_4 = FUNC_4(VAR_2->dl_leaf_bh, VAR_0->i_sb);
  VAR_4->db_free_rec_len = FUNC_0(VAR_3);
  FUNC_2(VAR_1, VAR_2->dl_leaf_bh);
 } else {
  FUNC_3(VAR_0, VAR_1, VAR_2);
 }
}
