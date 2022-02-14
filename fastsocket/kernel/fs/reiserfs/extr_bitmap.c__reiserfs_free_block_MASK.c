
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct reiserfs_super_block {int dummy; } ;
struct reiserfs_bitmap_info {int free_count; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int ) ;
 struct reiserfs_bitmap_info* FUNC_2 (struct super_block*) ;
 struct buffer_head* FUNC_3 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_6 (struct super_block*,int ,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct super_block*,struct buffer_head*) ;
 unsigned int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,char*,char*,int ) ;
 int FUNC_10 (struct super_block*,struct buffer_head*,int) ;
 struct buffer_head* FUNC_11 (struct super_block*,unsigned int) ;
 int FUNC_12 (unsigned int,int ) ;
 scalar_t__ FUNC_13 (struct reiserfs_super_block*) ;
 int FUNC_14 (struct reiserfs_super_block*,scalar_t__) ;
 int FUNC_15 (struct inode*,int) ;

__attribute__((used)) static void FUNC_16(struct reiserfs_transaction_handle *VAR_1,
     struct inode *VAR_2, b_blocknr_t VAR_3,
     int VAR_4)
{
 struct super_block *VAR_5 = VAR_1->t_super;
 struct reiserfs_super_block *VAR_6;
 struct buffer_head *VAR_7, *VAR_8;
 struct reiserfs_bitmap_info *VAR_9;
 unsigned int VAR_10, VAR_11;

 FUNC_0(!VAR_1->t_trans_id);

 FUNC_1(VAR_5, VAR_0);

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_3(VAR_5);
 VAR_9 = FUNC_2(VAR_5);

 FUNC_6(VAR_5, VAR_3, &VAR_10, &VAR_11);

 if (VAR_10 >= FUNC_8(VAR_5)) {
  FUNC_9(VAR_5, "vs-4075", "block %lu is out of range",
          VAR_3);
  return;
 }

 VAR_8 = FUNC_11(VAR_5, VAR_10);
 if (!VAR_8)
  return;

 FUNC_10(VAR_5, VAR_8, 1);


 if (!FUNC_12(VAR_11, VAR_8->b_data)) {
  FUNC_9(VAR_5, "vs-4080",
          "block %lu: bit already cleared", VAR_3);
 }
 VAR_9[VAR_10].free_count++;
 FUNC_7(VAR_1, VAR_5, VAR_8);
 FUNC_5(VAR_8);

 FUNC_10(VAR_5, VAR_7, 1);

 FUNC_14(VAR_6, FUNC_13(VAR_6) + 1);

 FUNC_7(VAR_1, VAR_5, VAR_7);
 if (VAR_4)
  FUNC_15(VAR_2, 1);
}
