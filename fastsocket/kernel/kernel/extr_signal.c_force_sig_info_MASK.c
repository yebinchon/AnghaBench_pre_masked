
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; TYPE_2__* signal; int blocked; } ;
struct siginfo {int dummy; } ;
struct TYPE_4__ {scalar_t__ sa_handler; } ;
struct k_sigaction {TYPE_1__ sa; } ;
struct TYPE_6__ {int siglock; struct k_sigaction* action; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int,struct siginfo*,struct task_struct*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(int VAR_3, struct siginfo *VAR_4, struct task_struct *VAR_5)
{
 unsigned long int VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct k_sigaction *VAR_10;

 FUNC_4(&VAR_5->sighand->siglock, VAR_6);
 VAR_10 = &VAR_5->sighand->action[VAR_3-1];
 VAR_9 = VAR_10->sa.sa_handler == VAR_2;
 VAR_8 = FUNC_2(&VAR_5->blocked, VAR_3);
 if (VAR_8 || VAR_9) {
  VAR_10->sa.sa_handler = VAR_1;
  if (VAR_8) {
   FUNC_1(&VAR_5->blocked, VAR_3);
   FUNC_0(VAR_5);
  }
 }
 if (VAR_10->sa.sa_handler == VAR_1)
  VAR_5->signal->flags &= ~VAR_0;
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 FUNC_5(&VAR_5->sighand->siglock, VAR_6);

 return VAR_7;
}
