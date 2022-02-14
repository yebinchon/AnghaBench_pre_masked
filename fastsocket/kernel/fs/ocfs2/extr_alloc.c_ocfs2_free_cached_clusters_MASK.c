
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* osb_tl_inode; } ;
struct ocfs2_cached_block_free {struct ocfs2_cached_block_free* free_next; int free_bit; int free_blk; } ;
struct inode {int i_mutex; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_cached_block_free*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ocfs2_super*,int *) ;
 int * FUNC_8 (struct ocfs2_super*,int ) ;
 int FUNC_9 (struct ocfs2_super*,int *,int ,int ) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_super *VAR_1,
          struct ocfs2_cached_block_free *VAR_2)
{
 struct ocfs2_cached_block_free *VAR_3;
 struct inode *VAR_4 = VAR_1->osb_tl_inode;
 handle_t *VAR_5;
 int VAR_6 = 0;

 FUNC_5(&VAR_4->i_mutex);

 while (VAR_2) {
  if (FUNC_10(VAR_1)) {
   VAR_6 = FUNC_2(VAR_1);
   if (VAR_6 < 0) {
    FUNC_4(VAR_6);
    break;
   }
  }

  VAR_5 = FUNC_8(VAR_1, VAR_0);
  if (FUNC_0(VAR_5)) {
   VAR_6 = FUNC_1(VAR_5);
   FUNC_4(VAR_6);
   break;
  }

  VAR_6 = FUNC_9(VAR_1, VAR_5, VAR_2->free_blk,
      VAR_2->free_bit);

  FUNC_7(VAR_1, VAR_5);
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->free_next;
  FUNC_3(VAR_3);

  if (VAR_6 < 0) {
   FUNC_4(VAR_6);
   break;
  }
 }

 FUNC_6(&VAR_4->i_mutex);

 while (VAR_2) {

  VAR_3 = VAR_2;
  VAR_2 = VAR_2->free_next;
  FUNC_3(VAR_3);
 }

 return VAR_6;
}
