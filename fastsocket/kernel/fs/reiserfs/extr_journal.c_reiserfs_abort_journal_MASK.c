
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct reiserfs_journal {int j_errno; int j_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct super_block *VAR_2, int VAR_3)
{
 struct reiserfs_journal *VAR_4 = FUNC_0(VAR_2);
 if (FUNC_3(VAR_0, &VAR_4->j_state))
  return;

 if (!VAR_4->j_errno)
  VAR_4->j_errno = VAR_3;

 VAR_2->s_flags |= VAR_1;
 FUNC_2(VAR_0, &VAR_4->j_state);




}
