
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_journal_list {int dummy; } ;
struct reiserfs_journal {int j_dirty_buffers_lock; struct reiserfs_journal_list* j_current_jl; } ;
struct reiserfs_jh {struct reiserfs_journal_list* jl; } ;
struct inode {int i_sb; } ;
struct buffer_head {struct reiserfs_jh* b_private; } ;


 struct reiserfs_journal* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2 = 1;
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_0->i_sb);

 FUNC_5(VAR_1);
 FUNC_8(&VAR_3->j_dirty_buffers_lock);
 if (!FUNC_4(VAR_1)) {
  goto free_jh;
 }



 if (FUNC_6(VAR_0)) {




  if (FUNC_3(VAR_1) || FUNC_2(VAR_1)) {
   VAR_2 = 0;
  }
 } else if (FUNC_1(VAR_1)) {
  struct reiserfs_journal_list *VAR_4;
  struct reiserfs_jh *VAR_5 = VAR_1->b_private;
  if (VAR_5 && (VAR_4 = VAR_5->jl)
      && VAR_4 != FUNC_0(VAR_0->i_sb)->j_current_jl)
   VAR_2 = 0;
 }
      free_jh:
 if (VAR_2 && VAR_1->b_private) {
  FUNC_7(VAR_1);
 }
 FUNC_9(&VAR_3->j_dirty_buffers_lock);
 FUNC_10(VAR_1);
 return VAR_2;
}
