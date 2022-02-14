
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_waiter {int fw_donated; scalar_t__ fw_locked; } ;
struct futex_lock {int dummy; } ;
struct futex_condvar {int fc_waitcount; struct futex_lock* fc_lock; int fc_waiters; } ;
typedef int cloudabi_timestamp_t ;
typedef int cloudabi_scope_t ;
typedef int cloudabi_lock_t ;
typedef int cloudabi_condvar_t ;
typedef int cloudabi_clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct thread*,int *,int ,int *,int ,struct futex_condvar**) ;
 int FUNC_2 (struct futex_condvar*) ;
 int FUNC_3 (struct futex_condvar*,int *) ;
 int FUNC_4 (struct futex_lock*,struct thread*,int *) ;
 int FUNC_5 (struct futex_lock*,int *) ;
 int FUNC_6 (struct futex_lock*,struct thread*,int *,int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,struct futex_lock*,struct futex_waiter*,struct thread*,int ,int ,int ,int) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(struct thread *VAR_4, cloudabi_condvar_t *VAR_5,
    cloudabi_scope_t VAR_6, cloudabi_lock_t *VAR_7,
    cloudabi_scope_t VAR_8, cloudabi_clockid_t VAR_9,
    cloudabi_timestamp_t VAR_10, cloudabi_timestamp_t VAR_11, bool VAR_12)
{
 struct futex_condvar *VAR_13;
 struct futex_lock *VAR_14;
 struct futex_waiter VAR_15;
 int VAR_16, VAR_17;


 VAR_16 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, &VAR_13);
 if (VAR_16 != 0)
  return (VAR_16);
 VAR_14 = VAR_13->fc_lock;






 VAR_16 = FUNC_9(VAR_5, ~VAR_1);
 if (VAR_16 != 0) {
  FUNC_2(VAR_13);
  return (VAR_16);
 }


 VAR_16 = FUNC_4(VAR_14, VAR_4, VAR_7);
 if (VAR_16 != 0) {
  FUNC_3(VAR_13, VAR_5);
  FUNC_2(VAR_13);
  return (VAR_16);
 }


 ++VAR_13->fc_waitcount;
 VAR_16 = FUNC_8(&VAR_13->fc_waiters, VAR_13->fc_lock, &VAR_15, VAR_4,
     VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_15.fw_locked) {

  FUNC_0(FUNC_7(&VAR_15.fw_donated) == 0,
      ("Received threads while being locked"));
 } else if (VAR_16 == 0 || VAR_16 == VAR_2) {
  if (VAR_16 != 0)
   FUNC_3(VAR_13, VAR_5);
  VAR_17 = FUNC_6(VAR_14, VAR_4, VAR_7,
      VAR_0, VAR_3, 0, VAR_12,
      &VAR_15.fw_donated);
  if (VAR_17 != 0)
   VAR_16 = VAR_17;
 } else {
  FUNC_0(FUNC_7(&VAR_15.fw_donated) == 0,
      ("Received threads on error"));
  FUNC_3(VAR_13, VAR_5);
  FUNC_5(VAR_14, VAR_7);
 }
 --VAR_13->fc_waitcount;
 FUNC_2(VAR_13);
 return (VAR_16);
}
