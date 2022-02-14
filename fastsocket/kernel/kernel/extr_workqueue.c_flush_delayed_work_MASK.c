
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delayed_work {int work; int timer; } ;
struct cpu_workqueue_struct {int dummy; } ;


 int FUNC_0 (struct cpu_workqueue_struct*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;
 struct cpu_workqueue_struct* FUNC_5 (int ,int ) ;

void FUNC_6(struct delayed_work *VAR_1)
{
 if (FUNC_1(&VAR_1->timer)) {
  struct cpu_workqueue_struct *VAR_2;
  VAR_2 = FUNC_5(VAR_0, FUNC_3());
  FUNC_0(VAR_2, &VAR_1->work);
  FUNC_4();
 }
 FUNC_2(&VAR_1->work);
}
