
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
struct futex_waiter {int fw_locked; struct futex_queue* fw_queue; int fw_wait; int fw_donated; int fw_tid; } ;
struct futex_queue {int fq_count; int fq_list; } ;
struct futex_lock {int fl_waitcount; } ;
typedef int sbintime_t ;
typedef scalar_t__ cloudabi_timestamp_t ;
typedef int cloudabi_clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct futex_waiter*,int ) ;
 int FUNC_2 (int *,struct futex_waiter*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (struct futex_lock*) ;
 int FUNC_8 (struct thread*,int ,scalar_t__,scalar_t__,int *,int *,int) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_10(struct futex_queue *VAR_6, struct futex_lock *VAR_7,
    struct futex_waiter *VAR_8, struct thread *VAR_9, cloudabi_clockid_t VAR_10,
    cloudabi_timestamp_t VAR_11, cloudabi_timestamp_t VAR_12, bool VAR_13)
{
 sbintime_t VAR_14, VAR_15;
 int VAR_16;


 VAR_8->fw_tid = VAR_9->td_tid;
 VAR_8->fw_locked = 0;
 FUNC_9(&VAR_8->fw_donated);

 if (VAR_11 != VAR_2) {

  VAR_16 = FUNC_8(VAR_9, VAR_10, VAR_11,
      VAR_12, &VAR_14, &VAR_15, VAR_13);
  if (VAR_16 != 0)
   return (VAR_16);
 }


 VAR_8->fw_queue = VAR_6;
 FUNC_1(&VAR_6->fq_list, VAR_8, VAR_5);
 ++VAR_6->fq_count;

 FUNC_4(&VAR_8->fw_wait, "futex");
 ++VAR_7->fl_waitcount;

 FUNC_7(VAR_7);
 if (VAR_11 == VAR_2) {

  VAR_16 = FUNC_6(&VAR_8->fw_wait, &VAR_3);
 } else {

  VAR_16 = FUNC_5(&VAR_8->fw_wait, &VAR_3,
      VAR_14, VAR_15, 0);
  FUNC_7(VAR_7);
  if (VAR_16 == VAR_1 &&
      VAR_8->fw_queue != ((void*)0) && VAR_8->fw_queue != VAR_6) {







   VAR_16 = FUNC_6(&VAR_8->fw_wait, &VAR_3);
  }
 }
 FUNC_7(VAR_7);

 --VAR_7->fl_waitcount;
 FUNC_3(&VAR_8->fw_wait);

 VAR_6 = VAR_8->fw_queue;
 if (VAR_6 == ((void*)0)) {

  return (0);
 }


 FUNC_0(VAR_16 != 0, ("Woken up thread is still enqueued"));
 FUNC_2(&VAR_6->fq_list, VAR_8, VAR_4, VAR_5);
 --VAR_6->fq_count;
 return (VAR_16 == VAR_1 ? VAR_0 : VAR_16);
}
