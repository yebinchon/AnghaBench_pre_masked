
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct urwlock {int rw_state; int rw_flags; } ;
struct umtx_q {int uq_key; } ;
struct thread {struct umtx_q* td_umtxq; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int,int*,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (struct urwlock*,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct thread*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct thread *VAR_10, struct urwlock *VAR_11)
{
 struct umtx_q *VAR_12;
 uint32_t VAR_13;
 int32_t VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_12 = VAR_10->td_umtxq;
 VAR_16 = FUNC_3(&VAR_11->rw_flags, &VAR_13);
 if (VAR_16 == -1)
  return (VAR_0);
 VAR_16 = FUNC_4(VAR_11, VAR_3, FUNC_0(VAR_13), &VAR_12->uq_key);
 if (VAR_16 != 0)
  return (VAR_16);

 VAR_16 = FUNC_3(&VAR_11->rw_state, &VAR_14);
 if (VAR_16 == -1) {
  VAR_16 = VAR_0;
  goto out;
 }
 if (VAR_14 & VAR_8) {
  for (;;) {
   VAR_17 = FUNC_2(&VAR_11->rw_state, VAR_14,
       &VAR_15, VAR_14 & ~VAR_8);
   if (VAR_17 == -1) {
    VAR_16 = VAR_0;
    goto out;
   }
   if (VAR_17 == 1) {
    VAR_14 = VAR_15;
    if (!(VAR_15 & VAR_8)) {
     VAR_16 = VAR_1;
     goto out;
    }
    VAR_16 = FUNC_7(VAR_10, 1);
    if (VAR_16 != 0)
     goto out;
   } else
    break;
  }
 } else if (FUNC_1(VAR_14) != 0) {
  for (;;) {
   VAR_17 = FUNC_2(&VAR_11->rw_state, VAR_14,
       &VAR_15, VAR_14 - 1);
   if (VAR_17 == -1) {
    VAR_16 = VAR_0;
    goto out;
   }
   if (VAR_17 == 1) {
    VAR_14 = VAR_15;
    if (FUNC_1(VAR_15) == 0) {
     VAR_16 = VAR_1;
     goto out;
    }
    VAR_16 = FUNC_7(VAR_10, 1);
    if (VAR_16 != 0)
     goto out;
   } else
    break;
  }
 } else {
  VAR_16 = VAR_1;
  goto out;
 }

 VAR_19 = 0;

 if (!(VAR_13 & VAR_6)) {
  if (VAR_14 & VAR_9) {
   VAR_19 = 1;
   VAR_18 = VAR_4;
  } else if (VAR_14 & VAR_7) {
   VAR_19 = VAR_2;
   VAR_18 = VAR_5;
  }
 } else {
  if (VAR_14 & VAR_7) {
   VAR_19 = VAR_2;
   VAR_18 = VAR_5;
  } else if (VAR_14 & VAR_9) {
   VAR_19 = 1;
   VAR_18 = VAR_4;
  }
 }

 if (VAR_19) {
  FUNC_8(&VAR_12->uq_key);
  FUNC_6(&VAR_12->uq_key);
  FUNC_9(&VAR_12->uq_key, VAR_19, VAR_18);
  FUNC_10(&VAR_12->uq_key);
  FUNC_11(&VAR_12->uq_key);
 }
out:
 FUNC_5(&VAR_12->uq_key);
 return (VAR_16);
}
