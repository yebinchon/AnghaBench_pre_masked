
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct reiserfs_transaction_handle {scalar_t__ t_trans_id; } ;
struct page {unsigned long index; } ;
struct inode {unsigned long i_size; int i_blkbits; struct super_block* i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct super_block*,struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 struct buffer_head* FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct super_block*,struct buffer_head*,int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct buffer_head*) ;

int FUNC_18(struct inode *VAR_2, struct page *VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 unsigned VAR_6, VAR_7;
 int VAR_8 = 0;
 unsigned VAR_9;
 struct buffer_head *VAR_10, *VAR_11;
 unsigned long VAR_12 = VAR_2->i_size >> VAR_0;
 int VAR_13;
 int VAR_14 = FUNC_12(VAR_2);
 struct super_block *VAR_15 = VAR_2->i_sb;
 int VAR_16 = VAR_1 / VAR_15->s_blocksize;
 struct reiserfs_transaction_handle VAR_17;
 int VAR_18 = 0;

 VAR_17.t_trans_id = 0;
 VAR_9 = 1 << VAR_2->i_blkbits;

 if (VAR_14) {
  FUNC_15(VAR_15);
  VAR_18 = FUNC_5(&VAR_17, VAR_15, VAR_16 + 1);
  if (VAR_18)
   goto drop_write_lock;
  FUNC_14(VAR_2);
 }
 for (VAR_10 = VAR_11 = FUNC_9(VAR_3), VAR_6 = 0;
      VAR_10 != VAR_11 || !VAR_6;
      VAR_6 = VAR_7, VAR_10 = VAR_10->b_this_page) {

  VAR_13 = FUNC_2(VAR_10);
  FUNC_4(VAR_10);
  VAR_7 = VAR_6 + VAR_9;
  if (VAR_7 <= VAR_4 || VAR_6 >= VAR_5) {
   if (!FUNC_3(VAR_10))
    VAR_8 = 1;
  } else {
   FUNC_17(VAR_10);
   if (VAR_14) {
    FUNC_13(VAR_15, VAR_10, 1);
    FUNC_7(&VAR_17, VAR_15, VAR_10);
   } else if (!FUNC_1(VAR_10)) {
    FUNC_8(VAR_10);



    if (FUNC_11(VAR_2->i_sb) &&
        (VAR_13 || VAR_3->index >= VAR_12)) {
     FUNC_10(VAR_2, VAR_10);
    }
   }
  }
 }
 if (VAR_14) {
  VAR_18 = FUNC_6(&VAR_17, VAR_15, VAR_16 + 1);
       drop_write_lock:
  FUNC_16(VAR_15);
 }






 if (!VAR_8)
  FUNC_0(VAR_3);
 return VAR_18;
}
