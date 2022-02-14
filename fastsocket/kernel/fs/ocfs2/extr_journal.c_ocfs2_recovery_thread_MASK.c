
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int recovery_event; int recovery_lock; int * recovery_thread_task; scalar_t__ disable_recovery; int node_num; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,struct ocfs2_super*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct ocfs2_super*,int) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct ocfs2_super *VAR_1, int VAR_2)
{
 FUNC_4("(node_num=%d, osb->node_num = %d)\n",
     VAR_2, VAR_1->node_num);

 FUNC_7(&VAR_1->recovery_lock);
 if (VAR_1->disable_recovery)
  goto out;



 if (FUNC_9(VAR_1, VAR_2))
  FUNC_3(0, "node %d already in recovery map.\n", VAR_2);

 FUNC_3(0, "starting recovery thread...\n");

 if (VAR_1->recovery_thread_task)
  goto out;

 VAR_1->recovery_thread_task = FUNC_2(VAR_0, VAR_1,
       "ocfs2rec");
 if (FUNC_0(VAR_1->recovery_thread_task)) {
  FUNC_5((int)FUNC_1(VAR_1->recovery_thread_task));
  VAR_1->recovery_thread_task = ((void*)0);
 }

out:
 FUNC_8(&VAR_1->recovery_lock);
 FUNC_10(&VAR_1->recovery_event);

 FUNC_6();
}
