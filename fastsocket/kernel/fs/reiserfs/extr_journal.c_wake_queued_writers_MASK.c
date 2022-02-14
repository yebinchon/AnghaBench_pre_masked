
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {int j_join_wait; int j_state; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_0, &VAR_2->j_state))
  FUNC_2(&VAR_2->j_join_wait);
}
