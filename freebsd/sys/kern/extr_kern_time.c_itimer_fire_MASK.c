
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_8__ {scalar_t__ ksi_errno; int ksi_signo; } ;
struct TYPE_9__ {scalar_t__ sigev_notify; } ;
struct TYPE_7__ {int it_interval; int it_value; } ;
struct itimer {scalar_t__ it_overrun; TYPE_2__ it_ksi; TYPE_3__ it_sigev; int it_callout; TYPE_1__ it_time; struct proc* it_proc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct itimer*) ;
 int FUNC_1 (struct itimer*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct proc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct proc*,TYPE_3__*,struct thread**) ;
 int FUNC_7 (struct proc*,struct thread*,int ,TYPE_2__*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct itimer *VAR_4)
{
 struct proc *VAR_5 = VAR_4->it_proc;
 struct thread *VAR_6;

 if (VAR_4->it_sigev.sigev_notify == VAR_2 ||
     VAR_4->it_sigev.sigev_notify == VAR_3) {
  if (FUNC_6(VAR_5, &VAR_4->it_sigev, &VAR_6) != 0) {
   FUNC_0(VAR_4);
   FUNC_8(&VAR_4->it_time.it_value);
   FUNC_8(&VAR_4->it_time.it_interval);
   FUNC_4(&VAR_4->it_callout);
   FUNC_1(VAR_4);
   return;
  }
  if (!FUNC_2(&VAR_4->it_ksi)) {
   VAR_4->it_ksi.ksi_errno = 0;
   FUNC_5(&VAR_4->it_ksi, &VAR_4->it_sigev);
   FUNC_7(VAR_5, VAR_6, VAR_4->it_ksi.ksi_signo, &VAR_4->it_ksi);
  } else {
   if (VAR_4->it_overrun < VAR_1)
    VAR_4->it_overrun++;
   else
    VAR_4->it_ksi.ksi_errno = VAR_0;
  }
  FUNC_3(VAR_5);
 }
}
