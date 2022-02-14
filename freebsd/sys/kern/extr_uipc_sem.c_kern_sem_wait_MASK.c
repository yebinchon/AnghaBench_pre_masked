
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct timespec {int dummy; } ;
struct thread {TYPE_1__* td_proc; int td_ucred; } ;
struct ksem {scalar_t__ ks_value; int ks_waiters; int ks_cv; int ks_atime; } ;
struct file {int f_cred; struct ksem* f_data; } ;
typedef int semid_t ;
typedef int cap_rights_t ;
struct TYPE_2__ {scalar_t__ p_pid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct timeval*,struct timespec*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (struct thread*,int ,int ,struct file**) ;
 int FUNC_9 (int ,int ,struct ksem*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int FUNC_12 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_13 (struct timeval*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_5, semid_t VAR_6, int VAR_7,
    struct timespec *VAR_8)
{
 struct timespec VAR_9, VAR_10;
 struct timeval VAR_11;
 cap_rights_t VAR_12;
 struct file *VAR_13;
 struct ksem *VAR_14;
 int VAR_15;

 FUNC_1((">>> kern_sem_wait entered! pid=%d\n", (int)VAR_5->td_proc->p_pid));
 FUNC_0(VAR_6);
 VAR_15 = FUNC_8(VAR_5, VAR_6, FUNC_3(&VAR_12, VAR_0), &VAR_13);
 if (VAR_15)
  return (VAR_15);
 VAR_14 = VAR_13->f_data;
 FUNC_10(&VAR_4);
 FUNC_1((">>> kern_sem_wait critical section entered! pid=%d\n",
     (int)VAR_5->td_proc->p_pid));







 FUNC_1(("kern_sem_wait value = %d, tryflag %d\n", VAR_14->ks_value, VAR_7));
 FUNC_14(&VAR_14->ks_atime);
 while (VAR_14->ks_value == 0) {
  VAR_14->ks_waiters++;
  if (VAR_7 != 0)
   VAR_15 = VAR_1;
  else if (VAR_8 == ((void*)0))
   VAR_15 = FUNC_5(&VAR_14->ks_cv, &VAR_4);
  else {
   for (;;) {
    VAR_9 = *VAR_8;
    FUNC_7(&VAR_10);
    FUNC_12(&VAR_9, &VAR_10, &VAR_9);
    FUNC_2(&VAR_11, &VAR_9);
    if (VAR_11.tv_sec < 0) {
     VAR_15 = VAR_2;
     break;
    }
    VAR_15 = FUNC_4(&VAR_14->ks_cv,
        &VAR_4, FUNC_13(&VAR_11));
    if (VAR_15 != VAR_3)
     break;
   }
  }
  VAR_14->ks_waiters--;
  if (VAR_15)
   goto err;
 }
 VAR_14->ks_value--;
 FUNC_1(("kern_sem_wait value post-decrement = %d\n", VAR_14->ks_value));
 VAR_15 = 0;
err:
 FUNC_11(&VAR_4);
 FUNC_6(VAR_13, VAR_5);
 FUNC_1(("<<< kern_sem_wait leaving, pid=%d, error = %d\n",
     (int)VAR_5->td_proc->p_pid, VAR_15));
 return (VAR_15);
}
