
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct super_block {int dummy; } ;
struct reiserfs_journal_list {int j_timestamp; int j_commit_left; } ;
struct TYPE_2__ {struct list_head* next; } ;
struct reiserfs_journal {TYPE_1__ j_journal_list; } ;
struct list_head {int dummy; } ;


 struct reiserfs_journal_list* FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct super_block*,struct reiserfs_journal_list*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_1(VAR_1);
 struct reiserfs_journal_list *VAR_3;
 struct list_head *VAR_4;
 time_t VAR_5 = FUNC_4();

 while (!FUNC_5(&VAR_2->j_journal_list)) {
  VAR_4 = VAR_2->j_journal_list.next;
  VAR_3 = FUNC_0(VAR_4);

  if (VAR_3->j_timestamp < (VAR_5 - (VAR_0 * 4)) &&
      FUNC_2(&VAR_3->j_commit_left) == 0 &&
      FUNC_6(VAR_1, VAR_3)) {
   FUNC_3(VAR_1, VAR_3);
  } else {
   break;
  }
 }
}
