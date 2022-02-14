
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct TYPE_5__ {int sigev_notify; scalar_t__ sigev_signo; int sigev_notify_thread_id; } ;
typedef TYPE_1__ sigevent_t ;
struct TYPE_6__ {struct task_struct* group_leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,TYPE_2__*) ;
 struct pid* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static struct pid *FUNC_3(sigevent_t * VAR_5)
{
 struct task_struct *VAR_6 = VAR_4->group_leader;

 if ((VAR_5->sigev_notify & VAR_2 ) &&
  (!(VAR_6 = FUNC_0(VAR_5->sigev_notify_thread_id)) ||
   !FUNC_1(VAR_6, VAR_4) ||
   (VAR_5->sigev_notify & ~VAR_2) != VAR_1))
  return ((void*)0);

 if (((VAR_5->sigev_notify & ~VAR_2) != VAR_0) &&
     ((VAR_5->sigev_signo <= 0) || (VAR_5->sigev_signo > VAR_3)))
  return ((void*)0);

 return FUNC_2(VAR_6);
}
