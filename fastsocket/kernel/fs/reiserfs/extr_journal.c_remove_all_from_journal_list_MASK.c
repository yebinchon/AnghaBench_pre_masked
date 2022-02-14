
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {struct reiserfs_journal_cnode* j_realblock; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* next; scalar_t__ state; scalar_t__ bh; } ;
struct reiserfs_journal {int j_list_hash_table; } ;


 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct reiserfs_journal_cnode*) ;
 int FUNC_2 (struct super_block*,char*,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (struct super_block*,int ,struct reiserfs_journal_list*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0,
      struct reiserfs_journal_list *VAR_1,
      int VAR_2)
{
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_0);
 struct reiserfs_journal_cnode *VAR_4, *VAR_5;
 VAR_4 = VAR_1->j_realblock;




 while (VAR_4) {
  if (VAR_4->blocknr != 0) {
   if (VAR_2) {
    FUNC_2(VAR_0, "reiserfs-2201",
       "block %u, bh is %d, state %ld",
       VAR_4->blocknr, VAR_4->bh ? 1 : 0,
       VAR_4->state);
   }
   VAR_4->state = 0;
   FUNC_3(VAR_0, VAR_3->j_list_hash_table,
         VAR_1, VAR_4->blocknr, 1);
  }
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  FUNC_1(VAR_0, VAR_5);
 }
 VAR_1->j_realblock = ((void*)0);
}
