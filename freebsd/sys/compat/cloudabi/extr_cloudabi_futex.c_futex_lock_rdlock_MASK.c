
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct futex_waiter {int fw_locked; int fw_donated; } ;
struct futex_lock {scalar_t__ fl_owner; int fl_readers; } ;
typedef int cloudabi_timestamp_t ;
typedef int cloudabi_lock_t ;
typedef int cloudabi_clockid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct futex_lock*,int *) ;
 int FUNC_2 (struct futex_lock*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct futex_lock*,struct futex_waiter*,struct thread*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct futex_lock *VAR_2, struct thread *VAR_3,
    cloudabi_lock_t *VAR_4, cloudabi_clockid_t VAR_5,
    cloudabi_timestamp_t VAR_6, cloudabi_timestamp_t VAR_7, bool VAR_8)
{
 struct futex_waiter VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_4);
 if (VAR_10 == VAR_0) {

  FUNC_0(VAR_2->fl_owner != VAR_1,
      ("Attempted to sleep on an unmanaged lock"));
  VAR_10 = FUNC_4(&VAR_2->fl_readers, VAR_2, &VAR_9, VAR_3,
      VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_0((VAR_10 == 0) == VAR_9.fw_locked,
      ("Should have locked write lock on success"));
  FUNC_0(FUNC_3(&VAR_9.fw_donated) == 0,
      ("Lock functions cannot receive threads"));
 }
 if (VAR_10 != 0)
  FUNC_2(VAR_2, VAR_4);
 return (VAR_10);
}
