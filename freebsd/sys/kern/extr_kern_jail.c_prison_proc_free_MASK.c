
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_uref; int pr_mtx; int pr_task; int pr_ref; int pr_id; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;

void
FUNC_4(struct prison *VAR_1)
{

 FUNC_1(&VAR_1->pr_mtx);
 FUNC_0(VAR_1->pr_uref > 0,
     ("Trying to kill a process in a dead prison (jid=%d)", VAR_1->pr_id));
 if (VAR_1->pr_uref > 1)
  VAR_1->pr_uref--;
 else {





  VAR_1->pr_ref++;
  FUNC_2(&VAR_1->pr_mtx);
  FUNC_3(VAR_0, &VAR_1->pr_task);
  return;
 }
 FUNC_2(&VAR_1->pr_mtx);
}
