
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* hprev; TYPE_1__* jlist; struct super_block* sb; } ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_2__ {int j_commit_left; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct reiserfs_journal_cnode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->sb;
 b_blocknr_t VAR_2 = VAR_0->blocknr;

 VAR_0 = VAR_0->hprev;
 while (VAR_0) {
  if (VAR_0->sb == VAR_1 && VAR_0->blocknr == VAR_2 && VAR_0->jlist &&
      FUNC_0(&VAR_0->jlist->j_commit_left) != 0)
        return 0;
  VAR_0 = VAR_0->hprev;
 }
 return 1;
}
