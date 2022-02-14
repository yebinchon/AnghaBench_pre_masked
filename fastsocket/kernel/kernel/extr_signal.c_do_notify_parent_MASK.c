
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct task_struct {int exit_code; int exit_signal; TYPE_4__* parent; TYPE_1__* signal; int stime; int utime; struct task_struct* group_leader; } ;
struct siginfo {int si_signo; int si_status; int si_code; void* si_stime; void* si_utime; int si_uid; int si_pid; scalar_t__ si_errno; } ;
struct sighand_struct {int siglock; TYPE_3__* action; } ;
struct TYPE_12__ {int uid; } ;
struct TYPE_11__ {struct sighand_struct* sighand; } ;
struct TYPE_9__ {scalar_t__ sa_handler; int sa_flags; } ;
struct TYPE_10__ {TYPE_2__ sa; } ;
struct TYPE_8__ {int stime; int utime; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,struct siginfo*,TYPE_4__*) ;
 TYPE_6__* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*,int ) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 (struct task_struct*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct task_struct *VAR_6, int VAR_7)
{
 struct siginfo VAR_8;
 unsigned long VAR_9;
 struct sighand_struct *VAR_10;
 int VAR_11 = VAR_7;

 FUNC_0(VAR_7 == -1);


  FUNC_0(FUNC_11(VAR_6));

 FUNC_0(!FUNC_13(VAR_6) &&
        (VAR_6->group_leader != VAR_6 || !FUNC_14(VAR_6)));

 VAR_8.si_signo = VAR_7;
 VAR_8.si_errno = 0;
 FUNC_6();
 VAR_8.si_pid = FUNC_12(VAR_6, FUNC_10(VAR_6->parent));
 VAR_8.si_uid = FUNC_2(VAR_6)->uid;
 FUNC_7();

 VAR_8.si_utime = FUNC_5(FUNC_4(VAR_6->utime,
    VAR_6->signal->utime));
 VAR_8.si_stime = FUNC_5(FUNC_4(VAR_6->stime,
    VAR_6->signal->stime));

 VAR_8.si_status = VAR_6->exit_code & 0x7f;
 if (VAR_6->exit_code & 0x80)
  VAR_8.si_code = VAR_0;
 else if (VAR_6->exit_code & 0x7f)
  VAR_8.si_code = VAR_2;
 else {
  VAR_8.si_code = VAR_1;
  VAR_8.si_status = VAR_6->exit_code >> 8;
 }

 VAR_10 = VAR_6->parent->sighand;
 FUNC_8(&VAR_10->siglock, VAR_9);
 if (!FUNC_13(VAR_6) && VAR_7 == VAR_4 &&
     (VAR_10->action[VAR_4-1].sa.sa_handler == VAR_5 ||
      (VAR_10->action[VAR_4-1].sa.sa_flags & VAR_3))) {
  VAR_11 = VAR_6->exit_signal = -1;
  if (VAR_10->action[VAR_4-1].sa.sa_handler == VAR_5)
   VAR_7 = -1;
 }
 if (FUNC_15(VAR_7) && VAR_7 > 0)
  FUNC_1(VAR_7, &VAR_8, VAR_6->parent);
 FUNC_3(VAR_6, VAR_6->parent);
 FUNC_9(&VAR_10->siglock, VAR_9);

 return VAR_11;
}
