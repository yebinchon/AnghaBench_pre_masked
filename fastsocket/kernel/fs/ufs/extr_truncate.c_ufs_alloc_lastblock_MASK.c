
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {int s_fsize; int s_fshift; int s_fpb; } ;
struct super_block {int s_blocksize; } ;
struct page {int dummy; } ;
struct inode {int i_blkbits; struct address_space* i_mapping; struct super_block* i_sb; } ;
struct buffer_head {int b_data; scalar_t__ b_blocknr; int b_bdev; struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ,int ,int ) ;
 struct buffer_head* FUNC_9 (struct page*) ;
 struct buffer_head* FUNC_10 (struct super_block*,scalar_t__) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int) ;
 struct page* FUNC_15 (struct address_space*,int) ;
 int FUNC_16 (struct inode*,int,struct buffer_head*,int) ;
 int FUNC_17 (struct page*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_3)
{
 int VAR_4 = 0;
 struct super_block *VAR_5 = VAR_3->i_sb;
 struct address_space *VAR_6 = VAR_3->i_mapping;
 struct ufs_sb_private_info *VAR_7 = FUNC_1(VAR_5)->s_uspi;
 unsigned VAR_8, VAR_9;
 sector_t VAR_10;
 struct page *VAR_11;
 struct buffer_head *VAR_12;
 u64 VAR_13;

 VAR_10 = (FUNC_5(VAR_3) + VAR_7->s_fsize - 1) >> VAR_7->s_fshift;

 if (!VAR_10)
  goto out;

 VAR_10--;

 VAR_11 = FUNC_15(VAR_6, VAR_10 >>
           (VAR_1 - VAR_3->i_blkbits));
       if (FUNC_0(VAR_11)) {
               VAR_4 = -VAR_0;
               goto out;
       }

       VAR_9 = VAR_10 & ((1 << (VAR_1 - VAR_3->i_blkbits)) - 1);
       VAR_12 = FUNC_9(VAR_11);
       for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
               VAR_12 = VAR_12->b_this_page;


       VAR_4 = FUNC_16(VAR_3, VAR_10, VAR_12, 1);

       if (FUNC_18(VAR_4))
        goto out_unlock;

       if (FUNC_3(VAR_12)) {
        FUNC_4(VAR_12);
        FUNC_20(VAR_12->b_bdev,
      VAR_12->b_blocknr);




        FUNC_11(VAR_12);
        FUNC_7(VAR_12);
        FUNC_12(VAR_11);
       }

       if (VAR_10 >= VAR_2) {
        VAR_9 = VAR_7->s_fpb - FUNC_14(VAR_10) - 1;
        VAR_13 = VAR_12->b_blocknr + 1;
        for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
         VAR_12 = FUNC_10(VAR_5, VAR_8 + VAR_13);
         FUNC_6(VAR_12);
         FUNC_8(VAR_12->b_data, 0, VAR_5->s_blocksize);
         FUNC_11(VAR_12);
         FUNC_7(VAR_12);
         FUNC_19(VAR_12);
         FUNC_13(VAR_12);
         FUNC_2(VAR_12);
        }
       }
out_unlock:
       FUNC_17(VAR_11);
out:
       return VAR_4;
}
