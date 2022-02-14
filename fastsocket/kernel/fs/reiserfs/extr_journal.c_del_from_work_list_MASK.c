
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {int j_working_list; } ;
struct reiserfs_journal {int j_num_work_lists; } ;


 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0,
          struct reiserfs_journal_list *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_0(VAR_0);
 if (!FUNC_2(&VAR_1->j_working_list)) {
  FUNC_1(&VAR_1->j_working_list);
  VAR_2->j_num_work_lists--;
 }
}
