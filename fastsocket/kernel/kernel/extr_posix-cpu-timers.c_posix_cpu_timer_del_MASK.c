
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; int * signal; } ;
struct TYPE_4__ {int entry; scalar_t__ firing; struct task_struct* task; } ;
struct TYPE_5__ {TYPE_1__ cpu; } ;
struct k_itimer {TYPE_2__ it; } ;
struct TYPE_6__ {int siglock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct k_itimer *VAR_2)
{
 struct task_struct *VAR_3 = VAR_2->it.cpu.task;
 int VAR_4 = 0;

 if (FUNC_1(VAR_3 != ((void*)0))) {
  FUNC_5(&VAR_1);
  if (FUNC_9(VAR_3->signal == ((void*)0))) {




   FUNC_0(!FUNC_3(&VAR_2->it.cpu.entry));
  } else {
   FUNC_7(&VAR_3->sighand->siglock);
   if (VAR_2->it.cpu.firing)
    VAR_4 = VAR_0;
   else
    FUNC_2(&VAR_2->it.cpu.entry);
   FUNC_8(&VAR_3->sighand->siglock);
  }
  FUNC_6(&VAR_1);

  if (!VAR_4)
   FUNC_4(VAR_3);
 }

 return VAR_4;
}
