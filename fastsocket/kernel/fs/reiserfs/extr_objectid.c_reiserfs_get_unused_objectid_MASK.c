
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct reiserfs_super_block {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_2 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct super_block*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_8 (struct super_block*,struct reiserfs_super_block*) ;
 int FUNC_9 (struct super_block*,int ,int) ;
 int FUNC_10 (struct super_block*,int ) ;
 int FUNC_11 (struct super_block*,char*,char*) ;
 int FUNC_12 (struct reiserfs_super_block*) ;
 int FUNC_13 (struct reiserfs_super_block*,int) ;

__u32 FUNC_14(struct reiserfs_transaction_handle *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->t_super;
 struct reiserfs_super_block *VAR_3 = FUNC_2(VAR_2);
 __le32 *VAR_4 = FUNC_8(VAR_2, VAR_3);
 __u32 VAR_5;

 FUNC_0(!VAR_1->t_trans_id);

 FUNC_3(VAR_2, VAR_4);

 FUNC_9(VAR_2, FUNC_1(VAR_2), 1);

 VAR_5 = FUNC_6(VAR_4[1]);
 if (VAR_5 == VAR_0) {
  FUNC_11(VAR_2, "reiserfs-15100", "no more object ids");
  FUNC_10(VAR_2, FUNC_1(VAR_2));
  return 0;
 }






 VAR_4[1] = FUNC_4(VAR_5 + 1);







 if (FUNC_12(VAR_3) > 2 && VAR_4[1] == VAR_4[2]) {
  FUNC_7(VAR_4 + 1, VAR_4 + 3,
   (FUNC_12(VAR_3) - 3) * sizeof(__u32));
  FUNC_13(VAR_3, FUNC_12(VAR_3) - 2);
 }

 FUNC_5(VAR_1, VAR_2, FUNC_1(VAR_2));
 return VAR_5;
}
