
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct sigevent {scalar_t__ sigev_notify; int sigev_signo; } ;
struct proc {struct filedesc* p_fd; } ;
struct TYPE_3__ {int ksi_flags; int ksi_mqd; int ksi_code; } ;
struct mqueue_notifier {struct sigevent nt_sigev; TYPE_1__ nt_ksi; struct proc* nt_proc; } ;
struct mqueue {scalar_t__ mq_receivers; int mq_mutex; int mq_msgq; struct mqueue_notifier* mq_notifier; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int VAR_9 ;
 int FUNC_8 (struct filedesc*,int) ;
 int FUNC_9 (struct file*,struct thread*) ;
 struct file* FUNC_10 (struct filedesc*,int) ;
 int FUNC_11 (struct thread*,int,struct file**,int *,struct mqueue**) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct mqueue*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct mqueue_notifier* FUNC_16 () ;
 int FUNC_17 (struct mqueue_notifier*) ;
 int FUNC_18 (struct proc*,struct mqueue_notifier*) ;
 int FUNC_19 (struct proc*,struct mqueue*,int) ;
 struct mqueue_notifier* FUNC_20 (struct proc*,int) ;
 int FUNC_21 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_22(struct thread *VAR_10, int VAR_11, struct sigevent *VAR_12)
{
 struct filedesc *VAR_13;
 struct proc *VAR_14;
 struct mqueue *VAR_15;
 struct file *VAR_16, *VAR_17;
 struct mqueue_notifier *VAR_18, *VAR_19 = ((void*)0);
 int VAR_20;

 FUNC_0(VAR_11);
 if (VAR_12 != ((void*)0)) {
  if (VAR_12->sigev_notify != VAR_6 &&
      VAR_12->sigev_notify != VAR_7 &&
      VAR_12->sigev_notify != VAR_5)
   return (VAR_2);
  if ((VAR_12->sigev_notify == VAR_6 ||
      VAR_12->sigev_notify == VAR_7) &&
      !FUNC_6(VAR_12->sigev_signo))
   return (VAR_2);
 }
 VAR_14 = VAR_10->td_proc;
 VAR_13 = VAR_10->td_proc->p_fd;
 VAR_20 = FUNC_11(VAR_10, VAR_11, &VAR_16, ((void*)0), &VAR_15);
 if (VAR_20)
  return (VAR_20);
again:
 FUNC_1(VAR_13);
 VAR_17 = FUNC_10(VAR_13, VAR_11);
 if (VAR_17 == ((void*)0)) {
  FUNC_2(VAR_13);
  VAR_20 = VAR_0;
  goto out;
 }







 if (VAR_17 != VAR_16) {
  FUNC_2(VAR_13);
  VAR_20 = VAR_0;
  goto out;
 }
 FUNC_14(&VAR_15->mq_mutex);
 FUNC_2(VAR_13);
 if (VAR_12 != ((void*)0)) {
  if (VAR_15->mq_notifier != ((void*)0)) {
   VAR_20 = VAR_1;
  } else {
   FUNC_3(VAR_14);
   VAR_18 = FUNC_20(VAR_14, VAR_11);
   if (VAR_18 == ((void*)0)) {
    if (VAR_19 == ((void*)0)) {
     FUNC_4(VAR_14);
     FUNC_15(&VAR_15->mq_mutex);
     VAR_19 = FUNC_16();
     goto again;
    }
   }

   if (VAR_18 != ((void*)0)) {
    FUNC_21(&VAR_18->nt_ksi);
    if (VAR_19 != ((void*)0)) {
     FUNC_17(VAR_19);
     VAR_19 = ((void*)0);
    }
   } else {
    VAR_18 = VAR_19;
    VAR_19 = ((void*)0);
    FUNC_12(&VAR_18->nt_ksi);
    VAR_18->nt_ksi.ksi_flags |= VAR_4 | VAR_3;
    VAR_18->nt_ksi.ksi_code = VAR_8;
    VAR_18->nt_proc = VAR_14;
    VAR_18->nt_ksi.ksi_mqd = VAR_11;
    FUNC_18(VAR_14, VAR_18);
   }
   VAR_18->nt_sigev = *VAR_12;
   VAR_15->mq_notifier = VAR_18;
   FUNC_4(VAR_14);





   if (VAR_15->mq_receivers == 0 &&
       !FUNC_5(&VAR_15->mq_msgq))
    FUNC_13(VAR_15);
  }
 } else {
  FUNC_19(VAR_14, VAR_15, VAR_11);
 }
 FUNC_15(&VAR_15->mq_mutex);

out:
 FUNC_9(VAR_16, VAR_10);
 if (VAR_19 != ((void*)0))
  FUNC_17(VAR_19);
 return (VAR_20);
}
