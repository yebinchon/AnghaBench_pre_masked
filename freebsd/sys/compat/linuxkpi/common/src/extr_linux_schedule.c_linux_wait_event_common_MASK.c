
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
typedef int wait_queue_head_t ;
struct task_struct {TYPE_1__* task_thread; int state; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_3 (struct task_struct*,struct task_struct*,char*,int,unsigned int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(wait_queue_head_t *VAR_3, wait_queue_t *VAR_4, int VAR_5,
    unsigned int VAR_6, spinlock_t *VAR_7)
{
 struct task_struct *VAR_8;
 int VAR_9;

 if (VAR_7 != ((void*)0))
  FUNC_7(VAR_7);


 if (VAR_5 < 1)
  VAR_5 = 1;
 else if (VAR_5 == VAR_0)
  VAR_5 = 0;

 VAR_8 = VAR_2;





 FUNC_0(VAR_8->task_thread->td_proc);
 FUNC_4(VAR_8);
 if (FUNC_2(&VAR_8->state) != VAR_1) {
  VAR_9 = FUNC_3(VAR_8, VAR_8, "wevent", VAR_5,
      VAR_6);
 } else {
  FUNC_5(VAR_8);
  VAR_9 = 0;
 }
 FUNC_1(VAR_8->task_thread->td_proc);

 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_7);
 return (VAR_9);
}
