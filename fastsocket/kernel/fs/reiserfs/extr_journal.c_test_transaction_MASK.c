
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {scalar_t__ j_len; struct reiserfs_journal_cnode* j_realblock; int j_nonzerolen; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* next; scalar_t__ bh; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct reiserfs_journal_cnode*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0,
                            struct reiserfs_journal_list *VAR_1)
{
 struct reiserfs_journal_cnode *VAR_2;

 if (VAR_1->j_len == 0 || FUNC_0(&VAR_1->j_nonzerolen) == 0)
  return 1;

 VAR_2 = VAR_1->j_realblock;
 while (VAR_2) {



  if (VAR_2->blocknr == 0) {
   goto next;
  }
  if (VAR_2->bh && !FUNC_2(VAR_2))
   return 0;
       next:
  VAR_2 = VAR_2->next;
  FUNC_1();
 }
 return 0;
}
