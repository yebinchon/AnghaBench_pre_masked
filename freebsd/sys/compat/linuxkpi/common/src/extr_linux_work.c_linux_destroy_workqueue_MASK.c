
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int exec_mtx; int taskqueue; int draining; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct workqueue_struct*) ;
 int FUNC_2 (struct workqueue_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct workqueue_struct *VAR_0)
{
 FUNC_0(&VAR_0->draining);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0->taskqueue);
 FUNC_3(&VAR_0->exec_mtx);
 FUNC_2(VAR_0);
}
