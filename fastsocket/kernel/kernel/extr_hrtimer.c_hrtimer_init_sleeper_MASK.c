
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int function; } ;
struct hrtimer_sleeper {struct task_struct* task; TYPE_1__ timer; } ;


 int VAR_0 ;

void FUNC_0(struct hrtimer_sleeper *VAR_1, struct task_struct *VAR_2)
{
 VAR_1->timer.function = VAR_0;
 VAR_1->task = VAR_2;
}
