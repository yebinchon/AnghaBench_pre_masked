
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_journal_list {int dummy; } ;
struct reiserfs_journal {int j_errno; } ;
struct reiserfs_jh {struct buffer_head* bh; int list; } ;
struct list_head {int prev; int next; } ;
struct buffer_head {TYPE_1__* b_page; } ;
struct buffer_chunk {scalar_t__ nr; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int * mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 struct reiserfs_jh* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_chunk*,struct buffer_head*,int *,int (*) (struct buffer_chunk*)) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct list_head*) ;
 int FUNC_11 (int *,struct list_head*) ;
 int FUNC_12 (int ,int,struct buffer_head**) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct buffer_head*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_chunk*) ;

__attribute__((used)) static int FUNC_22(spinlock_t * VAR_2,
     struct reiserfs_journal *VAR_3,
     struct reiserfs_journal_list *VAR_4,
     struct list_head *VAR_5)
{
 struct buffer_head *VAR_6;
 struct reiserfs_jh *VAR_7;
 int VAR_8 = VAR_3->j_errno;
 struct buffer_chunk VAR_9;
 struct list_head VAR_10;
 FUNC_0(&VAR_10);

 VAR_9.nr = 0;
 FUNC_15(VAR_2);
 while (!FUNC_10(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5->next);
  VAR_6 = VAR_7->bh;
  FUNC_9(VAR_6);
  if (!FUNC_17(VAR_6)) {
   if (!FUNC_3(VAR_6)) {
    FUNC_11(&VAR_7->list, &VAR_10);
    goto loop_next;
   }
   FUNC_16(VAR_2);
   if (VAR_9.nr)
    FUNC_21(&VAR_9);
   FUNC_20(VAR_6);
   FUNC_7();
   FUNC_15(VAR_2);
   goto loop_next;
  }




  if (!FUNC_5(VAR_6) && FUNC_3(VAR_6)) {
   FUNC_6(VAR_6);
   VAR_8 = -VAR_0;
  }
  if (FUNC_3(VAR_6)) {
   FUNC_11(&VAR_7->list, &VAR_10);
   FUNC_2(&VAR_9, VAR_6, VAR_2, FUNC_21);
  } else {
   FUNC_14(VAR_6);
   FUNC_19(VAR_6);
  }
       loop_next:
  FUNC_13(VAR_6);
  FUNC_8(VAR_2);
 }
 if (VAR_9.nr) {
  FUNC_16(VAR_2);
  FUNC_21(&VAR_9);
  FUNC_15(VAR_2);
 }
 while (!FUNC_10(&VAR_10)) {
  VAR_7 = FUNC_1(VAR_10.prev);
  VAR_6 = VAR_7->bh;
  FUNC_9(VAR_6);
  FUNC_14(VAR_6);

  if (FUNC_4(VAR_6)) {
   FUNC_16(VAR_2);
   FUNC_20(VAR_6);
   FUNC_15(VAR_2);
  }
  if (!FUNC_5(VAR_6)) {
   VAR_8 = -VAR_0;
  }
  if (FUNC_3(VAR_6) && FUNC_18(VAR_6->b_page->mapping == ((void*)0))) {
   FUNC_16(VAR_2);
   FUNC_12(VAR_1, 1, &VAR_6);
   FUNC_15(VAR_2);
  }
  FUNC_13(VAR_6);
  FUNC_8(VAR_2);
 }
 FUNC_16(VAR_2);
 return VAR_8;
}
