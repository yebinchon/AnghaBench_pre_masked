
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_lock {scalar_t__ fl_owner; int fl_writers; } ;
struct futex_condvar {int fc_waiters; struct futex_lock* fc_lock; } ;
struct cloudabi_sys_condvar_signal_args {scalar_t__ nwaiters; int condvar; int scope; } ;
typedef scalar_t__ cloudabi_nthreads_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,struct futex_condvar**) ;
 int FUNC_1 (struct futex_condvar*) ;
 int FUNC_2 (struct futex_condvar*,int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;

int
FUNC_5(struct thread *VAR_2,
    struct cloudabi_sys_condvar_signal_args *VAR_3)
{
 struct futex_condvar *VAR_4;
 struct futex_lock *VAR_5;
 cloudabi_nthreads_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->nwaiters;
 if (VAR_6 == 0) {

  return (0);
 }


 VAR_7 = FUNC_0(VAR_2, VAR_3->condvar, VAR_3->scope, &VAR_4);
 if (VAR_7 != 0) {

  return (VAR_7 == VAR_0 ? 0 : VAR_7);
 }
 VAR_5 = VAR_4->fc_lock;

 if (VAR_5->fl_owner == VAR_1) {
  FUNC_4(&VAR_4->fc_waiters, VAR_6 - 1);
 } else {





  FUNC_3(&VAR_4->fc_waiters, &VAR_5->fl_writers, VAR_6);
 }


 VAR_7 = FUNC_2(VAR_4, VAR_3->condvar);
 FUNC_1(VAR_4);
 return (VAR_7);
}
