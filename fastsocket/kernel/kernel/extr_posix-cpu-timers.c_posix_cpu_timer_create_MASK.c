
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {struct task_struct* group_leader; } ;
struct TYPE_6__ {scalar_t__ sched; } ;
struct TYPE_5__ {scalar_t__ sched; } ;
struct TYPE_7__ {struct task_struct* task; TYPE_2__ expires; TYPE_1__ incr; int entry; } ;
struct TYPE_8__ {TYPE_3__ cpu; } ;
struct k_itimer {TYPE_4__ it; int it_clock; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 struct task_struct* VAR_2 ;
 struct task_struct* FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*,struct task_struct*) ;
 int VAR_3 ;
 int FUNC_9 (struct task_struct*) ;

__attribute__((used)) static int FUNC_10(struct k_itimer *VAR_4)
{
 int VAR_5 = 0;
 const pid_t VAR_6 = FUNC_1(VAR_4->it_clock);
 struct task_struct *VAR_7;

 if (FUNC_2(VAR_4->it_clock) >= VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_4->it.cpu.entry);
 VAR_4->it.cpu.incr.sched = 0;
 VAR_4->it.cpu.expires.sched = 0;

 FUNC_6(&VAR_3);
 if (FUNC_0(VAR_4->it_clock)) {
  if (VAR_6 == 0) {
   VAR_7 = VAR_2;
  } else {
   VAR_7 = FUNC_4(VAR_6);
   if (VAR_7 && !FUNC_8(VAR_7, VAR_2))
    VAR_7 = ((void*)0);
  }
 } else {
  if (VAR_6 == 0) {
   VAR_7 = VAR_2->group_leader;
  } else {
   VAR_7 = FUNC_4(VAR_6);
   if (VAR_7 && !FUNC_9(VAR_7))
    VAR_7 = ((void*)0);
  }
 }
 VAR_4->it.cpu.task = VAR_7;
 if (VAR_7) {
  FUNC_5(VAR_7);
 } else {
  VAR_5 = -VAR_1;
 }
 FUNC_7(&VAR_3);

 return VAR_5;
}
