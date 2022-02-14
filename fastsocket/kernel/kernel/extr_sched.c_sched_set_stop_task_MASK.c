
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int * sched_class; } ;
struct sched_param {int sched_priority; } ;
struct TYPE_2__ {struct task_struct* stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct task_struct*,int ,struct sched_param*) ;
 int VAR_3 ;

void FUNC_2(int VAR_4, struct task_struct *VAR_5)
{
 struct sched_param VAR_6 = { .sched_priority = VAR_0 - 1 };
 struct task_struct *VAR_7 = FUNC_0(VAR_4)->stop;

 if (VAR_5) {
  FUNC_1(VAR_5, VAR_1, &VAR_6);

  VAR_5->sched_class = &VAR_3;
 }

 FUNC_0(VAR_4)->stop = VAR_5;

 if (VAR_7) {




  VAR_7->sched_class = &VAR_2;
 }
}
