
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; int nonblocking; } ;
struct super_block {int s_blocksize; unsigned long s_blocksize_bits; } ;
struct reiserfs_transaction_handle {scalar_t__ t_trans_id; } ;
struct page {unsigned long index; TYPE_1__* mapping; } ;
struct inode {unsigned long i_size; int i_blkbits; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; struct buffer_head* b_this_page; } ;
typedef unsigned long sector_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct page*,int,int) ;
 TYPE_2__* VAR_7 ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_17 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_18 (struct reiserfs_transaction_handle*,struct super_block*,struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct inode*,struct buffer_head*,unsigned long) ;
 int FUNC_21 (struct buffer_head*) ;
 struct buffer_head* FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct writeback_control*,struct page*) ;
 int FUNC_26 (struct super_block*,struct buffer_head*,int) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct super_block*) ;
 int FUNC_29 (struct super_block*) ;
 int FUNC_30 (struct buffer_head*) ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_33 (struct buffer_head*) ;
 int FUNC_34 (struct buffer_head*) ;
 int FUNC_35 (struct buffer_head*) ;
 int FUNC_36 (struct page*) ;
 int FUNC_37 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_38(struct page *VAR_8,
        struct writeback_control *VAR_9)
{
 struct inode *VAR_10 = VAR_8->mapping->host;
 unsigned long VAR_11 = VAR_10->i_size >> VAR_2;
 int VAR_12 = 0;
 unsigned long VAR_13;
 sector_t VAR_14;
 struct buffer_head *VAR_15, *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = FUNC_3(VAR_8);
 struct reiserfs_transaction_handle VAR_20;
 struct super_block *VAR_21 = VAR_10->i_sb;
 int VAR_22 = VAR_3 / VAR_21->s_blocksize;
 VAR_20.t_trans_id = 0;


 if (VAR_19 && (VAR_7->flags & VAR_4)) {
  FUNC_25(VAR_9, VAR_8);
  FUNC_36(VAR_8);
  return 0;
 }






 if (!FUNC_23(VAR_8)) {
  FUNC_12(VAR_8, VAR_21->s_blocksize,
         (1 << VAR_0) | (1 << VAR_1));
 }
 VAR_15 = FUNC_22(VAR_8);




 if (VAR_8->index >= VAR_11) {
  unsigned VAR_23;

  VAR_23 = VAR_10->i_size & (VAR_3 - 1);

  if (VAR_8->index >= VAR_11 + 1 || !VAR_23) {
   FUNC_36(VAR_8);
   return 0;
  }
  FUNC_37(VAR_8, VAR_23, VAR_3);
 }
 VAR_16 = VAR_15;
 VAR_13 = VAR_8->index << (VAR_2 - VAR_21->s_blocksize_bits);
 VAR_14 = (FUNC_15(VAR_10) - 1) >> VAR_10->i_blkbits;

 do {
  if (VAR_13 > VAR_14) {





   FUNC_11(VAR_16);
   FUNC_30(VAR_16);
  } else if ((VAR_19 || FUNC_8(VAR_16)) &&
             (!FUNC_9(VAR_16) || (FUNC_9(VAR_16)
             && VAR_16->b_blocknr ==
             0))) {




   if ((VAR_12 = FUNC_20(VAR_10, VAR_16, VAR_13))) {
    goto fail;
   }
  }
  VAR_16 = VAR_16->b_this_page;
  VAR_13++;
 } while (VAR_16 != VAR_15);







 if (VAR_19) {
  FUNC_1(VAR_8);
  FUNC_28(VAR_21);
  VAR_12 = FUNC_16(&VAR_20, VAR_21, VAR_22 + 1);
  if (VAR_12) {
   FUNC_29(VAR_21);
   goto fail;
  }
  FUNC_27(VAR_10);
 }

 do {
  FUNC_14(VAR_16);
  if (!FUNC_9(VAR_16))
   continue;
  if (FUNC_9(VAR_16) && VAR_16->b_blocknr == 0)
   continue;

  if (VAR_19) {
   FUNC_26(VAR_21, VAR_16, 1);
   FUNC_18(&VAR_20, VAR_21, VAR_16);
   continue;
  }



  if (VAR_9->sync_mode != VAR_5 || !VAR_9->nonblocking) {
   FUNC_19(VAR_16);
  } else {
   if (!FUNC_34(VAR_16)) {
    FUNC_25(VAR_9, VAR_8);
    continue;
   }
  }
  if (FUNC_33(VAR_16)) {
   FUNC_21(VAR_16);
  } else {
   FUNC_35(VAR_16);
  }
 } while ((VAR_16 = VAR_16->b_this_page) != VAR_15);

 if (VAR_19) {
  VAR_12 = FUNC_17(&VAR_20, VAR_21, VAR_22 + 1);
  FUNC_29(VAR_21);
  if (VAR_12)
   goto fail;
 }
 FUNC_0(FUNC_4(VAR_8));
 FUNC_31(VAR_8);
 FUNC_36(VAR_8);






 do {
  struct buffer_head *VAR_24 = VAR_16->b_this_page;
  if (FUNC_7(VAR_16)) {
   FUNC_32(VAR_6, VAR_16);
   VAR_18++;
  }
  FUNC_24(VAR_16);
  VAR_16 = VAR_24;
 } while (VAR_16 != VAR_15);

 VAR_12 = 0;
      done:
 if (VAR_18 == 0) {






  VAR_16 = VAR_15;
  do {
   if (!FUNC_10(VAR_16)) {
    VAR_17 = 1;
    break;
   }
   VAR_16 = VAR_16->b_this_page;
  } while (VAR_16 != VAR_15);
  if (!VAR_17)
   FUNC_6(VAR_8);
  FUNC_13(VAR_8);
 }
 return VAR_12;

      fail:




 FUNC_2(VAR_8);
 VAR_16 = VAR_15;
 do {
  FUNC_14(VAR_16);
  if (FUNC_9(VAR_16) && FUNC_8(VAR_16) && VAR_16->b_blocknr) {
   FUNC_19(VAR_16);
   FUNC_21(VAR_16);
  } else {




   FUNC_11(VAR_16);
  }
  VAR_16 = VAR_16->b_this_page;
 } while (VAR_16 != VAR_15);
 FUNC_5(VAR_8);
 FUNC_0(FUNC_4(VAR_8));
 FUNC_31(VAR_8);
 FUNC_36(VAR_8);
 do {
  struct buffer_head *VAR_25 = VAR_16->b_this_page;
  if (FUNC_7(VAR_16)) {
   FUNC_11(VAR_16);
   FUNC_32(VAR_6, VAR_16);
   VAR_18++;
  }
  FUNC_24(VAR_16);
  VAR_16 = VAR_25;
 } while (VAR_16 != VAR_15);
 goto done;
}
