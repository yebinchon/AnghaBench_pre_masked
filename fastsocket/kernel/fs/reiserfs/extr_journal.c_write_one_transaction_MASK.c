
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_list {scalar_t__ j_len; struct reiserfs_journal_cnode* j_realblock; int j_nonzerolen; int j_state; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* next; struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;
struct buffer_chunk {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_chunk*,struct buffer_head*,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct reiserfs_journal_cnode*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct super_block*,struct reiserfs_journal_list*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_2,
     struct reiserfs_journal_list *VAR_3,
     struct buffer_chunk *VAR_4)
{
 struct reiserfs_journal_cnode *VAR_5;
 int VAR_6 = 0;

 VAR_3->j_state |= VAR_0;
 FUNC_8(VAR_2, VAR_3);
 if (VAR_3->j_len == 0 || FUNC_2(&VAR_3->j_nonzerolen) == 0) {
  return 0;
 }

 VAR_5 = VAR_3->j_realblock;
 while (VAR_5) {



  if (VAR_5->blocknr == 0) {
   goto next;
  }
  if (VAR_5->bh && FUNC_6(VAR_5) && FUNC_3(VAR_5->bh)) {
   struct buffer_head *VAR_7;




   VAR_7 = VAR_5->bh;
   FUNC_9(VAR_7);
   FUNC_10(VAR_7);
   if (VAR_5->bh && FUNC_6(VAR_5) && FUNC_3(VAR_7)) {
    if (!FUNC_4(VAR_7) ||
        FUNC_5(VAR_7))
     FUNC_0();
    FUNC_1(VAR_4, VAR_7, ((void*)0), VAR_1);
    VAR_6++;
   } else {

    FUNC_12(VAR_7);
   }
   FUNC_11(VAR_7);
  }
       next:
  VAR_5 = VAR_5->next;
  FUNC_7();
 }
 return VAR_6;
}
