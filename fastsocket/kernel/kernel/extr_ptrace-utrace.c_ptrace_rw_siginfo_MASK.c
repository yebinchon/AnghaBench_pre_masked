
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct ptrace_context {int stop_code; TYPE_1__* siginfo; } ;
struct TYPE_4__ {int si_code; int si_uid; int si_pid; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (struct ptrace_context*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_4,
    struct ptrace_context *VAR_5,
    siginfo_t *VAR_6, bool VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 switch (FUNC_0(VAR_5)) {
 case 0:
  return -VAR_0;

 case 128:
  VAR_9 = -VAR_1;
  if (FUNC_2(VAR_4, &VAR_8)) {
   if (FUNC_1(FUNC_4(VAR_4))) {
    if (VAR_7)
     *VAR_5->siginfo = *VAR_6;
    else
     *VAR_6 = *VAR_5->siginfo;
    VAR_9 = 0;
   }
   FUNC_7(VAR_4, &VAR_8);
  }

  return VAR_9;

 default:
  if (!VAR_7) {
   FUNC_3(VAR_6, 0, sizeof(*VAR_6));
   VAR_6->si_signo = VAR_3;
   VAR_6->si_code = VAR_5->stop_code & VAR_2;
   VAR_6->si_pid = FUNC_5(VAR_4);
   VAR_6->si_uid = FUNC_6(VAR_4);
  }

  return 0;
 }
}
