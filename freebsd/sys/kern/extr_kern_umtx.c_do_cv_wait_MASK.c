
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct umutex {int dummy; } ;
struct umtx_q {int uq_flags; int uq_key; TYPE_1__* uq_cur_queue; } ;
struct ucond {int c_has_waiters; int c_clockid; int c_flags; } ;
struct timespec {int dummy; } ;
struct thread {struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct TYPE_2__ {int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct abs_timeout*,scalar_t__,int,struct timespec*) ;
 int FUNC_2 (struct thread*,struct umutex*,int) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ucond*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct umtx_q*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct umtx_q*) ;
 int FUNC_11 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_10, struct ucond *VAR_11, struct umutex *VAR_12,
    struct timespec *VAR_13, u_long VAR_14)
{
 struct abs_timeout VAR_15;
 struct umtx_q *VAR_16;
 uint32_t VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_16 = VAR_10->td_umtxq;
 VAR_20 = FUNC_3(&VAR_11->c_flags, &VAR_17);
 if (VAR_20 == -1)
  return (VAR_4);
 VAR_20 = FUNC_5(VAR_11, VAR_8, FUNC_0(VAR_17), &VAR_16->uq_key);
 if (VAR_20 != 0)
  return (VAR_20);

 if ((VAR_14 & VAR_3) != 0) {
  VAR_20 = FUNC_3(&VAR_11->c_clockid, &VAR_18);
  if (VAR_20 == -1) {
   FUNC_6(&VAR_16->uq_key);
   return (VAR_4);
  }
  if (VAR_18 < VAR_0 ||
      VAR_18 >= VAR_1) {

   FUNC_6(&VAR_16->uq_key);
   return (VAR_6);
  }
 } else {
  VAR_18 = VAR_0;
 }

 FUNC_9(&VAR_16->uq_key);
 FUNC_7(&VAR_16->uq_key);
 FUNC_8(VAR_16);
 FUNC_14(&VAR_16->uq_key);





 VAR_20 = FUNC_3(&VAR_11->c_has_waiters, &VAR_19);
 if (VAR_20 == 0 && VAR_19 == 0)
  FUNC_4(&VAR_11->c_has_waiters, 1);

 FUNC_13(&VAR_16->uq_key);

 VAR_20 = FUNC_2(VAR_10, VAR_12, 0);

 if (VAR_13 != ((void*)0))
  FUNC_1(&VAR_15, VAR_18, (VAR_14 & VAR_2) != 0,
      VAR_13);

 FUNC_9(&VAR_16->uq_key);
 if (VAR_20 == 0) {
  VAR_20 = FUNC_11(VAR_16, "ucond", VAR_13 == ((void*)0) ?
      ((void*)0) : &VAR_15);
 }

 if ((VAR_16->uq_flags & VAR_9) == 0)
  VAR_20 = 0;
 else {





  FUNC_7(&VAR_16->uq_key);
  if ((VAR_16->uq_flags & VAR_9) != 0) {
   int VAR_21 = VAR_16->uq_cur_queue->length;
   FUNC_10(VAR_16);
   if (VAR_21 == 1) {
    FUNC_14(&VAR_16->uq_key);
    FUNC_4(&VAR_11->c_has_waiters, 0);
    FUNC_9(&VAR_16->uq_key);
   }
  }
  FUNC_12(&VAR_16->uq_key);
  if (VAR_20 == VAR_7)
   VAR_20 = VAR_5;
 }

 FUNC_14(&VAR_16->uq_key);
 FUNC_6(&VAR_16->uq_key);
 return (VAR_20);
}
