
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; int pending; TYPE_2__* signal; } ;
struct TYPE_4__ {int sa_mask; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
struct TYPE_6__ {int siglock; struct k_sigaction* action; } ;
struct TYPE_5__ {int shared_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 struct task_struct* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct task_struct*,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;

int FUNC_12(int VAR_4, struct k_sigaction *VAR_5, struct k_sigaction *VAR_6)
{
 struct task_struct *VAR_7 = VAR_3;
 struct k_sigaction *VAR_8;
 sigset_t VAR_9;

 if (!FUNC_11(VAR_4) || VAR_4 < 1 || (VAR_5 && FUNC_4(VAR_4)))
  return -VAR_0;

 VAR_8 = &VAR_7->sighand->action[VAR_4-1];

 FUNC_9(&VAR_3->sighand->siglock);
 if (VAR_6)
  *VAR_6 = *VAR_8;

 if (VAR_5) {
  FUNC_6(&VAR_5->sa.sa_mask,
         FUNC_8(VAR_1) | FUNC_8(VAR_2));
  *VAR_8 = *VAR_5;
  if (FUNC_3(FUNC_2(VAR_7, VAR_4), VAR_4)) {
   FUNC_7(&VAR_9);
   FUNC_5(&VAR_9, VAR_4);
   FUNC_1(&VAR_9, &VAR_7->signal->shared_pending);
   do {
    FUNC_1(&VAR_9, &VAR_7->pending);
    VAR_7 = FUNC_0(VAR_7);
   } while (VAR_7 != VAR_3);
  }
 }

 FUNC_10(&VAR_3->sighand->siglock);
 return 0;
}
