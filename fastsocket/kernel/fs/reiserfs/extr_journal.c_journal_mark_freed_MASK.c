
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct reiserfs_list_bitmap {int dummy; } ;
struct reiserfs_journal_cnode {scalar_t__ blocknr; struct reiserfs_journal_cnode* hnext; struct buffer_head* bh; TYPE_2__* jlist; int state; struct super_block* sb; } ;
struct reiserfs_journal {int j_list_hash_table; TYPE_1__* j_current_jl; int j_hash_table; } ;
struct buffer_head {int b_count; } ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_4__ {int j_nonzerolen; } ;
struct TYPE_3__ {struct reiserfs_list_bitmap* j_list_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 struct reiserfs_journal_cnode* FUNC_11 (struct super_block*,int ,scalar_t__) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct super_block*,char*,char*) ;
 int FUNC_15 (struct super_block*,char*,char*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct super_block*,scalar_t__,int) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct super_block*,scalar_t__,struct reiserfs_list_bitmap*) ;

int FUNC_20(struct reiserfs_transaction_handle *VAR_1,
         struct super_block *VAR_2, b_blocknr_t VAR_3)
{
 struct reiserfs_journal *VAR_4 = FUNC_1(VAR_2);
 struct reiserfs_journal_cnode *VAR_5 = ((void*)0);
 struct buffer_head *VAR_6 = ((void*)0);
 struct reiserfs_list_bitmap *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 FUNC_0(!VAR_1->t_trans_id);

 VAR_5 = FUNC_11(VAR_2, VAR_4->j_hash_table, VAR_3);
 if (VAR_5 && VAR_5->bh) {
  VAR_6 = VAR_5->bh;
  FUNC_10(VAR_6);
 }

 if (VAR_6 && FUNC_4(VAR_6)) {
  FUNC_7(VAR_6);
  FUNC_9(VAR_6);
  FUNC_13(VAR_6);
  VAR_8 = FUNC_17(VAR_2, VAR_3, VAR_8);
 } else {

  VAR_7 = VAR_4->j_current_jl->j_list_bitmap;
  if (!VAR_7) {
   FUNC_14(VAR_2, "journal-1702",
           "journal_list_bitmap is NULL");
  }
  FUNC_19(VAR_2, VAR_3, VAR_7);



  if (VAR_6) {
   FUNC_9(VAR_6);
   FUNC_13(VAR_6);
  }
  VAR_8 = FUNC_17(VAR_2, VAR_3, VAR_8);


  VAR_5 = FUNC_11(VAR_2, VAR_4->j_list_hash_table,
       VAR_3);
  while (VAR_5) {
   if (VAR_2 == VAR_5->sb && VAR_3 == VAR_5->blocknr) {
    FUNC_18(VAR_0, &VAR_5->state);
    if (VAR_5->bh) {
     if (!VAR_8) {



      FUNC_6(VAR_5->
            bh);
      FUNC_5(VAR_5->bh);
      FUNC_8(VAR_5->
           bh);
      VAR_8 = 1;
      FUNC_12(VAR_5->bh);
      if (FUNC_3
          (&(VAR_5->bh->b_count)) < 0) {
       FUNC_15(VAR_2,
         "journal-2138",
         "cn->bh->b_count < 0");
      }
     }
     if (VAR_5->jlist) {
      FUNC_2(&
          (VAR_5->jlist->
           j_nonzerolen));
     }
     VAR_5->bh = ((void*)0);
    }
   }
   VAR_5 = VAR_5->hnext;
  }
 }

 if (VAR_6)
  FUNC_16(VAR_6);
 return 0;
}
