
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {struct list_head* next; } ;
struct reiserfs_journal_list {unsigned int j_trans_id; scalar_t__ j_len; int j_state; TYPE_1__ j_list; int j_commit_left; } ;
struct list_head {int dummy; } ;
struct reiserfs_journal {int j_flush_mutex; struct list_head j_journal_list; } ;
struct buffer_chunk {scalar_t__ nr; } ;


 struct reiserfs_journal_list* FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,struct reiserfs_journal_list*) ;
 int FUNC_4 (struct super_block*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_chunk*) ;
 int FUNC_8 (struct super_block*,struct reiserfs_journal_list*,struct buffer_chunk*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_2,
    struct reiserfs_journal_list *VAR_3,
    struct reiserfs_journal_list **VAR_4,
    unsigned int *VAR_5,
    int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 unsigned int VAR_11 = VAR_3->j_trans_id;
 struct buffer_chunk VAR_12;
 struct list_head *VAR_13;
 struct reiserfs_journal *VAR_14 = FUNC_1(VAR_2);
 VAR_12.nr = 0;

 FUNC_5(&VAR_14->j_flush_mutex);
 if (!FUNC_4(VAR_2, VAR_11)) {
  goto done;
 }




 while ((VAR_7 && VAR_10 < VAR_7) ||
        (!VAR_7 && VAR_9 < VAR_6)) {

  if (VAR_3->j_len == 0 || (VAR_3->j_state & VAR_1) ||
      FUNC_2(&VAR_3->j_commit_left)
      || !(VAR_3->j_state & VAR_0)) {
   FUNC_3(VAR_2, VAR_3);
   break;
  }
  VAR_8 = FUNC_8(VAR_2, VAR_3, &VAR_12);

  if (VAR_8 < 0)
   goto done;
  VAR_10++;
  VAR_9 += VAR_8;
  VAR_13 = VAR_3->j_list.next;


  if (VAR_13 == &VAR_14->j_journal_list) {
   break;
  }
  VAR_3 = FUNC_0(VAR_13);


  if (VAR_3->j_trans_id <= VAR_11)
   break;
 }
 if (VAR_12.nr) {
  FUNC_7(&VAR_12);
 }

      done:
 FUNC_6(&VAR_14->j_flush_mutex);
 return VAR_8;
}
