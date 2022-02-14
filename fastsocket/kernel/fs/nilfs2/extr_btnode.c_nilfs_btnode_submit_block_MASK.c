
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_blkbits; scalar_t__ i_ino; } ;
struct buffer_head {int b_page; void* b_blocknr; int b_end_io; int b_bdev; int b_data; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* __u64 ;
struct TYPE_3__ {int ns_bdev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct address_space*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int VAR_5 ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int ,int) ;
 struct inode* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct inode*,void*,scalar_t__*) ;
 struct buffer_head* FUNC_12 (struct inode*,struct address_space*,void*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (int ) ;

int FUNC_20(struct address_space *VAR_6, __u64 VAR_7,
         sector_t VAR_8, struct buffer_head **VAR_9,
         int VAR_10)
{
 struct buffer_head *VAR_11;
 struct inode *VAR_12 = FUNC_1(VAR_6);
 int VAR_13;

 VAR_11 = FUNC_12(VAR_12, VAR_6, VAR_7, 1 << VAR_0);
 if (FUNC_17(!VAR_11))
  return -VAR_2;

 VAR_13 = -VAR_1;
 if (VAR_10) {
  if (FUNC_17(FUNC_5(VAR_11) || FUNC_6(VAR_11) ||
        FUNC_4(VAR_11))) {
   FUNC_3(VAR_11);
   FUNC_0();
  }
  FUNC_9(VAR_11->b_data, 0, 1 << VAR_12->i_blkbits);
  VAR_11->b_bdev = FUNC_2(VAR_12)->ns_bdev;
  VAR_11->b_blocknr = VAR_7;
  FUNC_14(VAR_11);
  FUNC_15(VAR_11);
  goto found;
 }

 if (FUNC_6(VAR_11) || FUNC_4(VAR_11))
  goto found;

 if (VAR_8 == 0) {
  VAR_8 = VAR_7;
  if (VAR_12->i_ino != VAR_3) {
   struct inode *VAR_14 =
    FUNC_10(FUNC_2(VAR_12));


   VAR_13 = FUNC_11(VAR_14, VAR_7, &VAR_8);
   if (FUNC_17(VAR_13)) {
    FUNC_3(VAR_11);
    goto out_locked;
   }
  }
 }
 FUNC_8(VAR_11);
 if (FUNC_6(VAR_11)) {
  FUNC_18(VAR_11);
  VAR_13 = -VAR_1;
  goto found;
 }
 FUNC_14(VAR_11);
 VAR_11->b_bdev = FUNC_2(VAR_12)->ns_bdev;
 VAR_11->b_blocknr = VAR_8;
 VAR_11->b_end_io = VAR_5;
 FUNC_7(VAR_11);
 FUNC_16(VAR_4, VAR_11);
 VAR_11->b_blocknr = VAR_7;
 VAR_13 = 0;
found:
 *VAR_9 = VAR_11;

out_locked:
 FUNC_19(VAR_11->b_page);
 FUNC_13(VAR_11->b_page);
 return VAR_13;
}
