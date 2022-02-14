
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct urwlock {int rw_blocked_readers; int rw_state; int rw_blocked_writers; int rw_flags; } ;
struct umtx_q {int uq_key; } ;
struct thread {struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct _umtx_time {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct urwlock*,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct thread*,int) ;
 int FUNC_11 (struct umtx_q*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct umtx_q*,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct thread *VAR_9, struct urwlock *VAR_10, struct _umtx_time *VAR_11)
{
 struct abs_timeout VAR_12;
 struct umtx_q *VAR_13;
 uint32_t VAR_14;
 int32_t VAR_15, VAR_16;
 int32_t VAR_17;
 int32_t VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_13 = VAR_9->td_umtxq;
 VAR_19 = FUNC_5(&VAR_10->rw_flags, &VAR_14);
 if (VAR_19 == -1)
  return (VAR_0);
 VAR_19 = FUNC_7(VAR_10, VAR_4, FUNC_0(VAR_14), &VAR_13->uq_key);
 if (VAR_19 != 0)
  return (VAR_19);

 if (VAR_11 != ((void*)0))
  FUNC_3(&VAR_12, VAR_11);

 VAR_18 = 0;
 for (;;) {
  VAR_21 = FUNC_5(&VAR_10->rw_state, &VAR_15);
  if (VAR_21 == -1) {
   FUNC_8(&VAR_13->uq_key);
   return (VAR_0);
  }
  while ((VAR_15 & VAR_7) == 0 &&
      FUNC_2(VAR_15) == 0) {
   VAR_21 = FUNC_4(&VAR_10->rw_state, VAR_15,
       &VAR_16, VAR_15 | VAR_7);
   if (VAR_21 == -1) {
    FUNC_8(&VAR_13->uq_key);
    return (VAR_0);
   }
   if (VAR_21 == 0) {
    FUNC_1(VAR_16 == VAR_15);
    FUNC_8(&VAR_13->uq_key);
    return (0);
   }
   VAR_15 = VAR_16;
   VAR_19 = FUNC_10(VAR_9, 1);
   if (VAR_19 != 0)
    break;
  }

  if (VAR_19) {
   if ((VAR_15 & (VAR_7 |
       VAR_8)) == 0 &&
       VAR_18 != 0) {
    FUNC_12(&VAR_13->uq_key);
    FUNC_9(&VAR_13->uq_key);
    FUNC_14(&VAR_13->uq_key, VAR_3,
        VAR_6);
    FUNC_16(&VAR_13->uq_key);
    FUNC_18(&VAR_13->uq_key);
   }

   break;
  }


  FUNC_12(&VAR_13->uq_key);
  FUNC_9(&VAR_13->uq_key);
  FUNC_18(&VAR_13->uq_key);





  VAR_21 = FUNC_5(&VAR_10->rw_state, &VAR_15);
  if (VAR_21 == -1)
   VAR_19 = VAR_0;

  while (VAR_19 == 0 && ((VAR_15 & VAR_7) ||
      FUNC_2(VAR_15) != 0) &&
      (VAR_15 & VAR_8) == 0) {
   VAR_21 = FUNC_4(&VAR_10->rw_state, VAR_15,
       &VAR_16, VAR_15 | VAR_8);
   if (VAR_21 == -1) {
    VAR_19 = VAR_0;
    break;
   }
   if (VAR_21 == 0) {
    FUNC_1(VAR_16 == VAR_15);
    goto sleep;
   }
   VAR_15 = VAR_16;
   VAR_19 = FUNC_10(VAR_9, 0);
   if (VAR_19 != 0)
    break;
  }
  if (VAR_19 != 0) {
   FUNC_17(&VAR_13->uq_key);
   break;
  }

  if ((VAR_15 & VAR_7) == 0 &&
      FUNC_2(VAR_15) == 0) {
   FUNC_17(&VAR_13->uq_key);
   VAR_19 = FUNC_10(VAR_9, 0);
   if (VAR_19 != 0)
    break;
   continue;
  }
sleep:
  VAR_21 = FUNC_5(&VAR_10->rw_blocked_writers,
      &VAR_17);
  if (VAR_21 == -1) {
   FUNC_17(&VAR_13->uq_key);
   VAR_19 = VAR_0;
   break;
  }
  FUNC_6(&VAR_10->rw_blocked_writers, VAR_17 + 1);

  while ((VAR_15 & VAR_7) ||
      FUNC_2(VAR_15) != 0) {
   FUNC_12(&VAR_13->uq_key);
   FUNC_11(VAR_13, VAR_5);
   FUNC_16(&VAR_13->uq_key);

   VAR_19 = FUNC_15(VAR_13, "uwrlck", VAR_11 == ((void*)0) ?
       ((void*)0) : &VAR_12);

   FUNC_9(&VAR_13->uq_key);
   FUNC_13(VAR_13, VAR_5);
   FUNC_18(&VAR_13->uq_key);
   if (VAR_19)
    break;
   VAR_21 = FUNC_5(&VAR_10->rw_state, &VAR_15);
   if (VAR_21 == -1) {
    VAR_19 = VAR_0;
    break;
   }
  }

  VAR_21 = FUNC_5(&VAR_10->rw_blocked_writers,
      &VAR_17);
  if (VAR_21 == -1) {
   FUNC_17(&VAR_13->uq_key);
   VAR_19 = VAR_0;
   break;
  }
  FUNC_6(&VAR_10->rw_blocked_writers, VAR_17-1);
  if (VAR_17 == 1) {
   VAR_21 = FUNC_5(&VAR_10->rw_state, &VAR_15);
   if (VAR_21 == -1) {
    FUNC_17(&VAR_13->uq_key);
    VAR_19 = VAR_0;
    break;
   }
   for (;;) {
    VAR_21 = FUNC_4(&VAR_10->rw_state, VAR_15,
        &VAR_16, VAR_15 & ~VAR_8);
    if (VAR_21 == -1) {
     VAR_19 = VAR_0;
     break;
    }
    if (VAR_21 == 0) {
     FUNC_1(VAR_16 == VAR_15);
     break;
    }
    VAR_15 = VAR_16;
    VAR_20 = FUNC_10(VAR_9, 0);





    if (VAR_20 != 0) {
     if (VAR_19 == 0)
      VAR_19 = VAR_20;
     break;
    }
   }
   VAR_21 = FUNC_5(&VAR_10->rw_blocked_readers,
       &VAR_18);
   if (VAR_21 == -1) {
    FUNC_17(&VAR_13->uq_key);
    VAR_19 = VAR_0;
    break;
   }
  } else
   VAR_18 = 0;

  FUNC_17(&VAR_13->uq_key);
 }

 FUNC_8(&VAR_13->uq_key);
 if (VAR_19 == VAR_2)
  VAR_19 = VAR_1;
 return (VAR_19);
}
