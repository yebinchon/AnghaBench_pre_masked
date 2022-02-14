
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_6__ {int ksi_signo; } ;
struct TYPE_7__ {scalar_t__ sigev_notify; } ;
struct mqueue_notifier {TYPE_1__ nt_ksi; TYPE_2__ nt_sigev; struct proc* nt_proc; } ;
struct mqueue {struct mqueue_notifier* mq_notifier; int mq_mutex; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct proc*,TYPE_2__*,struct thread**) ;
 int FUNC_5 (struct proc*,struct thread*,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct mqueue *VAR_2)
{
 struct mqueue_notifier *VAR_3;
 struct thread *VAR_4;
 struct proc *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2->mq_mutex, VAR_0);
 VAR_3 = VAR_2->mq_notifier;
 if (VAR_3->nt_sigev.sigev_notify != VAR_1) {
  VAR_5 = VAR_3->nt_proc;
  VAR_6 = FUNC_4(VAR_5, &VAR_3->nt_sigev, &VAR_4);
  if (VAR_6) {
   VAR_2->mq_notifier = ((void*)0);
   return;
  }
  if (!FUNC_0(&VAR_3->nt_ksi)) {
   FUNC_2(&VAR_3->nt_ksi, &VAR_3->nt_sigev);
   FUNC_5(VAR_5, VAR_4, VAR_3->nt_ksi.ksi_signo, &VAR_3->nt_ksi);
  }
  FUNC_1(VAR_5);
 }
 VAR_2->mq_notifier = ((void*)0);
}
