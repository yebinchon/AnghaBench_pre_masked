
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int exit_code; struct sighand_struct* sighand; TYPE_1__* signal; int stime; int utime; struct task_struct* real_parent; struct task_struct* group_leader; struct task_struct* parent; } ;
struct siginfo {int si_signo; int si_code; int si_status; void* si_stime; void* si_utime; int si_uid; int si_pid; scalar_t__ si_errno; } ;
struct sighand_struct {int siglock; TYPE_3__* action; } ;
struct TYPE_8__ {int uid; } ;
struct TYPE_6__ {scalar_t__ sa_handler; int sa_flags; } ;
struct TYPE_7__ {TYPE_2__ sa; } ;
struct TYPE_5__ {int group_exit_code; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct siginfo*,struct task_struct*) ;
 TYPE_4__* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,struct task_struct*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*,int ) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;

void FUNC_12(struct task_struct *VAR_4, int VAR_5)
{
 struct siginfo VAR_6;
 unsigned long VAR_7;
 struct task_struct *VAR_8;
 struct sighand_struct *VAR_9;

 if (FUNC_11(VAR_4))
  VAR_8 = VAR_4->parent;
 else {
  VAR_4 = VAR_4->group_leader;
  VAR_8 = VAR_4->real_parent;
 }

 VAR_6.si_signo = VAR_1;
 VAR_6.si_errno = 0;



 FUNC_5();
 VAR_6.si_pid = FUNC_10(VAR_4, FUNC_9(VAR_8));
 VAR_6.si_uid = FUNC_2(VAR_4)->uid;
 FUNC_6();

 VAR_6.si_utime = FUNC_4(VAR_4->utime);
 VAR_6.si_stime = FUNC_4(VAR_4->stime);

  VAR_6.si_code = VAR_5;
  switch (VAR_5) {
  case 130:
   VAR_6.si_status = VAR_2;
   break;
  case 129:
   VAR_6.si_status = VAR_4->signal->group_exit_code & 0x7f;
   break;
  case 128:
   VAR_6.si_status = VAR_4->exit_code & 0x7f;
   break;
  default:
   FUNC_0();
  }

 VAR_9 = VAR_8->sighand;
 FUNC_7(&VAR_9->siglock, VAR_7);
 if (VAR_9->action[VAR_1-1].sa.sa_handler != VAR_3 &&
     !(VAR_9->action[VAR_1-1].sa.sa_flags & VAR_0))
  FUNC_1(VAR_1, &VAR_6, VAR_8);



 FUNC_3(VAR_4, VAR_8);
 FUNC_8(&VAR_9->siglock, VAR_7);
}
