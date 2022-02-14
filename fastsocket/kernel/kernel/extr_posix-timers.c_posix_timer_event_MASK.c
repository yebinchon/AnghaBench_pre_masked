
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct k_itimer {int it_sigev_notify; TYPE_2__* sigq; int it_pid; } ;
struct TYPE_3__ {int si_sys_private; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct task_struct*,int) ;

int FUNC_4(struct k_itimer *VAR_2, int VAR_3)
{
 struct task_struct *VAR_4;
 int VAR_5, VAR_6 = -1;
 VAR_2->sigq->info.si_sys_private = VAR_3;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_2->it_pid, VAR_0);
 if (VAR_4) {
  VAR_5 = !(VAR_2->it_sigev_notify & VAR_1);
  VAR_6 = FUNC_3(VAR_2->sigq, VAR_4, VAR_5);
 }
 FUNC_2();

 return VAR_6 > 0;
}
