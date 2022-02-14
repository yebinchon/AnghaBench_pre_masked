
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
struct urwlock {int rw_state; int rw_blocked_readers; int rw_flags; } ;
struct umtx_q {int uq_key; } ;
struct thread {struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct _umtx_time {int dummy; } ;
typedef long int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 scalar_t__ FUNC_2 (long) ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_5 (int *,long,long*,long) ;
 int FUNC_6 (int *,long*) ;
 int FUNC_7 (int *,long) ;
 int FUNC_8 (struct urwlock*,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct thread*,int) ;
 int FUNC_12 (struct umtx_q*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct umtx_q*) ;
 int FUNC_15 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct thread *VAR_10, struct urwlock *VAR_11, long VAR_12,
    struct _umtx_time *VAR_13)
{
 struct abs_timeout VAR_14;
 struct umtx_q *VAR_15;
 uint32_t VAR_16, VAR_17;
 int32_t VAR_18, VAR_19;
 int32_t VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_15 = VAR_10->td_umtxq;
 VAR_21 = FUNC_6(&VAR_11->rw_flags, &VAR_16);
 if (VAR_21 == -1)
  return (VAR_1);
 VAR_21 = FUNC_8(VAR_11, VAR_4, FUNC_0(VAR_16), &VAR_15->uq_key);
 if (VAR_21 != 0)
  return (VAR_21);

 if (VAR_13 != ((void*)0))
  FUNC_4(&VAR_14, VAR_13);

 VAR_17 = VAR_8;
 if (!(VAR_12 & VAR_6) && !(VAR_16 & VAR_6))
  VAR_17 |= VAR_9;

 for (;;) {
  VAR_23 = FUNC_6(&VAR_11->rw_state, &VAR_18);
  if (VAR_23 == -1) {
   FUNC_9(&VAR_15->uq_key);
   return (VAR_1);
  }


  while (!(VAR_18 & VAR_17)) {
   if (FUNC_3(FUNC_2(VAR_18) ==
       VAR_5)) {
    FUNC_9(&VAR_15->uq_key);
    return (VAR_0);
   }
   VAR_23 = FUNC_5(&VAR_11->rw_state, VAR_18,
       &VAR_19, VAR_18 + 1);
   if (VAR_23 == -1) {
    FUNC_9(&VAR_15->uq_key);
    return (VAR_1);
   }
   if (VAR_23 == 0) {
    FUNC_1(VAR_19 == VAR_18);
    FUNC_9(&VAR_15->uq_key);
    return (0);
   }
   VAR_21 = FUNC_11(VAR_10, 1);
   if (VAR_21 != 0)
    break;
   VAR_18 = VAR_19;
  }

  if (VAR_21)
   break;


  FUNC_13(&VAR_15->uq_key);
  FUNC_10(&VAR_15->uq_key);
  FUNC_18(&VAR_15->uq_key);





  VAR_23 = FUNC_6(&VAR_11->rw_state, &VAR_18);
  if (VAR_23 == -1)
   VAR_21 = VAR_1;


  while (VAR_21 == 0 && (VAR_18 & VAR_17) &&
      !(VAR_18 & VAR_7)) {
   VAR_23 = FUNC_5(&VAR_11->rw_state, VAR_18,
       &VAR_19, VAR_18 | VAR_7);
   if (VAR_23 == -1) {
    VAR_21 = VAR_1;
    break;
   }
   if (VAR_23 == 0) {
    FUNC_1(VAR_19 == VAR_18);
    goto sleep;
   }
   VAR_18 = VAR_19;
   VAR_21 = FUNC_11(VAR_10, 0);
   if (VAR_21 != 0)
    break;
  }
  if (VAR_21 != 0) {
   FUNC_17(&VAR_15->uq_key);
   break;
  }


  if (!(VAR_18 & VAR_17)) {
   FUNC_17(&VAR_15->uq_key);
   VAR_21 = FUNC_11(VAR_10, 1);
   if (VAR_21 != 0)
    break;
   continue;
  }

sleep:




  VAR_23 = FUNC_6(&VAR_11->rw_blocked_readers,
      &VAR_20);
  if (VAR_23 == -1) {
   FUNC_17(&VAR_15->uq_key);
   VAR_21 = VAR_1;
   break;
  }
  FUNC_7(&VAR_11->rw_blocked_readers, VAR_20+1);

  while (VAR_18 & VAR_17) {
   FUNC_13(&VAR_15->uq_key);
   FUNC_12(VAR_15);
   FUNC_16(&VAR_15->uq_key);

   VAR_21 = FUNC_15(VAR_15, "urdlck", VAR_13 == ((void*)0) ?
       ((void*)0) : &VAR_14);

   FUNC_10(&VAR_15->uq_key);
   FUNC_14(VAR_15);
   FUNC_18(&VAR_15->uq_key);
   if (VAR_21)
    break;
   VAR_23 = FUNC_6(&VAR_11->rw_state, &VAR_18);
   if (VAR_23 == -1) {
    VAR_21 = VAR_1;
    break;
   }
  }


  VAR_23 = FUNC_6(&VAR_11->rw_blocked_readers,
      &VAR_20);
  if (VAR_23 == -1) {
   FUNC_17(&VAR_15->uq_key);
   VAR_21 = VAR_1;
   break;
  }
  FUNC_7(&VAR_11->rw_blocked_readers, VAR_20-1);
  if (VAR_20 == 1) {
   VAR_23 = FUNC_6(&VAR_11->rw_state, &VAR_18);
   if (VAR_23 == -1) {
    FUNC_17(&VAR_15->uq_key);
    VAR_21 = VAR_1;
    break;
   }
   for (;;) {
    VAR_23 = FUNC_5(&VAR_11->rw_state, VAR_18,
        &VAR_19, VAR_18 & ~VAR_7);
    if (VAR_23 == -1) {
     VAR_21 = VAR_1;
     break;
    }
    if (VAR_23 == 0) {
     FUNC_1(VAR_19 == VAR_18);
     break;
    }
    VAR_18 = VAR_19;
    VAR_22 = FUNC_11(VAR_10, 0);
    if (VAR_22 != 0) {
     if (VAR_21 == 0)
      VAR_21 = VAR_22;
     break;
    }
   }
  }

  FUNC_17(&VAR_15->uq_key);
  if (VAR_21 != 0)
   break;
 }
 FUNC_9(&VAR_15->uq_key);
 if (VAR_21 == VAR_3)
  VAR_21 = VAR_2;
 return (VAR_21);
}
