
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_journal_list {int j_commit_left; } ;
struct reiserfs_journal {unsigned long j_trans_id; int j_errno; struct reiserfs_journal_list* j_current_jl; } ;
struct inode {struct super_block* i_sb; } ;


 int FUNC_0 (struct super_block*) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*,int) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 scalar_t__ FUNC_7 (struct super_block*,unsigned long) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_9 (struct super_block*,unsigned long) ;
 int FUNC_10 (struct super_block*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0, unsigned long VAR_1,
        struct reiserfs_journal_list *VAR_2)
{
 struct reiserfs_transaction_handle VAR_3;
 struct super_block *VAR_4 = VAR_0->i_sb;
 struct reiserfs_journal *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;


 if (VAR_1 == VAR_5->j_trans_id) {
  VAR_2 = VAR_5->j_current_jl;

  FUNC_9(VAR_4, VAR_1);
  if (VAR_5->j_trans_id != VAR_1) {
   goto flush_commit_only;
  }

  VAR_6 = FUNC_4(&VAR_3, VAR_4, 1);
  if (VAR_6)
   return VAR_6;


  if (VAR_5->j_trans_id != VAR_1) {
   FUNC_10(VAR_4, FUNC_0(VAR_4),
           1);
   FUNC_8(&VAR_3, VAR_4, FUNC_0(VAR_4));
   VAR_6 = FUNC_5(&VAR_3, VAR_4, 1);
   goto flush_commit_only;
  }

  VAR_6 = FUNC_6(&VAR_3, VAR_4, 1);
  if (!VAR_6)
   VAR_6 = 1;

 } else {




       flush_commit_only:
  if (FUNC_7(VAR_0->i_sb, VAR_1)) {





   if (FUNC_2(&VAR_2->j_commit_left) > 1)
    VAR_6 = 1;
   FUNC_3(VAR_4, VAR_2, 1);
   if (VAR_5->j_errno)
    VAR_6 = VAR_5->j_errno;
  }
 }

 return VAR_6;
}
