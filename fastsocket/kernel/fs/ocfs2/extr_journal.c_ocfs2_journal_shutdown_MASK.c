
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {struct ocfs2_journal* journal; int * commit_task; } ;
struct ocfs2_journal {scalar_t__ j_state; int * j_bh; int * j_journal; int j_num_trans; struct inode* j_inode; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int ip_open_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct ocfs2_super*,int ,int ) ;
 scalar_t__ FUNC_18 (struct ocfs2_super*) ;

void FUNC_19(struct ocfs2_super *VAR_3)
{
 struct ocfs2_journal *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 struct inode *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_13();

 FUNC_1(!VAR_3);

 VAR_4 = VAR_3->journal;
 if (!VAR_4)
  goto done;

 VAR_6 = VAR_4->j_inode;

 if (VAR_4->j_state != VAR_2)
  goto done;


 if (!FUNC_5(VAR_6))
  FUNC_0();

 VAR_7 = FUNC_3(&(VAR_3->journal->j_num_trans));
 if (VAR_7 > 0)
  FUNC_12(0, "Shutting down journal: must wait on %d "
       "running transactions!\n",
       VAR_7);





 VAR_4->j_state = VAR_1;




 if (VAR_3->commit_task) {

  FUNC_12(0, "Waiting for ocfs2commit to exit....\n");
  FUNC_11(VAR_3->commit_task);
  VAR_3->commit_task = ((void*)0);
 }

 FUNC_1(FUNC_3(&(VAR_3->journal->j_num_trans)) != 0);

 if (FUNC_18(VAR_3)) {
  FUNC_9(VAR_4->j_journal);
  VAR_5 = FUNC_8(VAR_4->j_journal);
  FUNC_10(VAR_4->j_journal);
  if (VAR_5 < 0)
   FUNC_14(VAR_5);
 }

 if (VAR_5 == 0) {




  VAR_5 = FUNC_17(VAR_3, 0, 0);
  if (VAR_5 < 0)
   FUNC_14(VAR_5);
 }


 FUNC_7(VAR_4->j_journal);
 VAR_4->j_journal = ((void*)0);

 FUNC_2(VAR_6)->ip_open_count--;


 FUNC_16(VAR_6, 1);

 FUNC_4(VAR_4->j_bh);
 VAR_4->j_bh = ((void*)0);

 VAR_4->j_state = VAR_0;


done:
 if (VAR_6)
  FUNC_6(VAR_6);
 FUNC_15();
}
