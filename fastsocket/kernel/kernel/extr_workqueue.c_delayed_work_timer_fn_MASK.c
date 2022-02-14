
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct delayed_work {int work; } ;
struct cpu_workqueue_struct {struct workqueue_struct* wq; } ;


 int FUNC_0 (int ,int *) ;
 struct cpu_workqueue_struct* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct workqueue_struct*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct delayed_work *VAR_1 = (struct delayed_work *)VAR_0;
 struct cpu_workqueue_struct *VAR_2 = FUNC_1(&VAR_1->work);
 struct workqueue_struct *VAR_3 = VAR_2->wq;

 FUNC_0(FUNC_3(VAR_3, FUNC_2()), &VAR_1->work);
}
