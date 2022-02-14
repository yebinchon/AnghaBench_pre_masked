
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* hnext; struct super_block* sb; scalar_t__ bh; TYPE_1__* jlist; struct reiserfs_journal_cnode* hprev; } ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_2__ {scalar_t__ j_len; int j_commit_left; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct reiserfs_journal_cnode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->sb;
 b_blocknr_t VAR_2 = VAR_0->blocknr;
 struct reiserfs_journal_cnode *VAR_3 = VAR_0->hprev;
 int VAR_4 = 1;





 while (VAR_3 && VAR_4) {
  if (VAR_3->jlist && VAR_3->bh && VAR_3->blocknr && VAR_3->sb == VAR_1 &&
      VAR_3->blocknr == VAR_2) {
   VAR_4 = 0;
  }
  VAR_3 = VAR_3->hprev;
 }



 VAR_3 = VAR_0->hnext;
 while (VAR_3 && VAR_4) {
  if (VAR_3->jlist && VAR_3->jlist->j_len > 0 &&
      FUNC_0(&(VAR_3->jlist->j_commit_left)) > 0 && VAR_3->bh &&
      VAR_3->blocknr && VAR_3->sb == VAR_1 && VAR_3->blocknr == VAR_2) {
   VAR_4 = 0;
  }
  VAR_3 = VAR_3->hnext;
 }
 return VAR_4;
}
