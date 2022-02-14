
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; int t_trans_id; } ;
struct reiserfs_journal {scalar_t__ j_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_journal* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct super_block*,unsigned long,int) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,int ,int) ;

int FUNC_6(struct reiserfs_transaction_handle *VAR_2,
       struct super_block *VAR_3, unsigned long VAR_4)
{
 struct reiserfs_journal *VAR_5 = FUNC_2(VAR_3);

 FUNC_0(!VAR_2->t_trans_id);

 FUNC_0(VAR_2->t_refcount > 1);
 if (VAR_5->j_len == 0) {
  FUNC_5(VAR_3, FUNC_1(VAR_3),
          1);
  FUNC_4(VAR_2, VAR_3, FUNC_1(VAR_3));
 }
 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_0 | VAR_1);
}
