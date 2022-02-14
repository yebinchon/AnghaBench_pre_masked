
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
struct futex_queue {int dummy; } ;
struct futex_waiter {int fw_locked; struct futex_queue fw_donated; } ;
struct futex_lock {scalar_t__ fl_owner; int fl_writers; } ;
typedef int cloudabi_timestamp_t ;
typedef int cloudabi_lock_t ;
typedef int cloudabi_clockid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct futex_lock*,int *,int ,int) ;
 int FUNC_2 (struct futex_lock*,int *) ;
 scalar_t__ FUNC_3 (struct futex_queue*) ;
 int FUNC_4 (struct futex_queue*,int *,int ) ;
 int FUNC_5 (int *,struct futex_lock*,struct futex_waiter*,struct thread*,int ,int ,int ,int) ;
 int FUNC_6 (struct futex_queue*,int ) ;

__attribute__((used)) static int
FUNC_7(struct futex_lock *VAR_3, struct thread *VAR_4,
    cloudabi_lock_t *VAR_5, cloudabi_clockid_t VAR_6,
    cloudabi_timestamp_t VAR_7, cloudabi_timestamp_t VAR_8, bool VAR_9,
    struct futex_queue *VAR_10)
{
 struct futex_waiter VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_3, VAR_5, VAR_4->td_tid,
     FUNC_3(VAR_10) > 0);

 if (VAR_12 == 0 || VAR_12 == VAR_0) {

  FUNC_0(FUNC_3(VAR_10) == 0 ||
      VAR_3->fl_owner != VAR_1,
      ("Lock should be managed if we are going to donate"));
  FUNC_4(VAR_10, &VAR_3->fl_writers, VAR_2);
 } else {




  FUNC_6(VAR_10, VAR_2);
 }

 if (VAR_12 == VAR_0) {

  FUNC_0(VAR_3->fl_owner != VAR_1,
      ("Attempted to sleep on an unmanaged lock"));
  VAR_12 = FUNC_5(&VAR_3->fl_writers, VAR_3, &VAR_11, VAR_4,
      VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_0((VAR_12 == 0) == VAR_11.fw_locked,
      ("Should have locked write lock on success"));
  FUNC_0(FUNC_3(&VAR_11.fw_donated) == 0,
      ("Lock functions cannot receive threads"));
 }
 if (VAR_12 != 0)
  FUNC_2(VAR_3, VAR_5);
 return (VAR_12);
}
