
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct super_block {int s_dirt; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_journal {scalar_t__ j_trans_start_time; scalar_t__ j_len; scalar_t__ j_max_trans_age; int j_wcount; int j_journal_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct super_block*,int,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,int ,int) ;

int FUNC_9(struct super_block *VAR_2)
{
 time_t VAR_3;
 struct reiserfs_transaction_handle VAR_4;
 struct reiserfs_journal *VAR_5 = FUNC_1(VAR_2);

 VAR_3 = FUNC_4();



 if (FUNC_7(&VAR_5->j_journal_list)) {
  return 0;
 }




 if (FUNC_2(&VAR_5->j_wcount) <= 0 &&
     VAR_5->j_trans_start_time > 0 &&
     VAR_5->j_len > 0 &&
     (VAR_3 - VAR_5->j_trans_start_time) > VAR_5->j_max_trans_age) {
  if (!FUNC_5(&VAR_4, VAR_2, 1)) {
   FUNC_8(VAR_2,
           FUNC_0(VAR_2),
           1);
   FUNC_6(&VAR_4, VAR_2,
        FUNC_0(VAR_2));




   FUNC_3(&VAR_4, VAR_2, 1, VAR_0 | VAR_1);
  }
 }
 return VAR_2->s_dirt;
}
