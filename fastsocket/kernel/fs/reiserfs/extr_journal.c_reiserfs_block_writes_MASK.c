
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_trans_id; int t_super; } ;
struct reiserfs_journal {int j_must_wait; int j_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct reiserfs_journal* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct reiserfs_transaction_handle *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_1(VAR_1->t_super);
 FUNC_0(!VAR_1->t_trans_id);
 VAR_2->j_must_wait = 1;
 FUNC_2(VAR_0, &VAR_2->j_state);
 return;
}
