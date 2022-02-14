
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_workqueue_struct {scalar_t__ thread; } ;
struct TYPE_2__ {int cpu_wq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct cpu_workqueue_struct* FUNC_1 (int ,int) ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 struct cpu_workqueue_struct *VAR_2;
 int VAR_3 = FUNC_2();
 int VAR_4 = 0;

 FUNC_0(!VAR_1);

 VAR_2 = FUNC_1(VAR_1->cpu_wq, VAR_3);
 if (VAR_0 == VAR_2->thread)
  VAR_4 = 1;

 return VAR_4;

}
