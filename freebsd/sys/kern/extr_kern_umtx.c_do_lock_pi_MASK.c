
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct umutex {int m_owner; } ;
struct umtx_q {int uq_key; } ;
struct umtx_pi {int pi_key; } ;
struct thread {scalar_t__ td_tid; struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct _umtx_time {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct umutex*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 struct umtx_pi* FUNC_7 (int ) ;
 int FUNC_8 (struct umtx_pi*,struct thread*) ;
 int FUNC_9 (struct umtx_pi*) ;
 int FUNC_10 (struct umtx_pi*) ;
 struct umtx_pi* FUNC_11 (int *) ;
 int FUNC_12 (struct umtx_pi*) ;
 int FUNC_13 (struct umtx_pi*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct thread*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct umtx_q*,struct umtx_pi*,scalar_t__,char*,struct abs_timeout*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(struct thread *VAR_15, struct umutex *VAR_16, uint32_t VAR_17,
    struct _umtx_time *VAR_18, int VAR_19)
{
 struct abs_timeout VAR_20;
 struct umtx_q *VAR_21;
 struct umtx_pi *VAR_22, *VAR_23;
 uint32_t VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;

 VAR_24 = VAR_15->td_tid;
 VAR_21 = VAR_15->td_umtxq;

 if ((VAR_28 = FUNC_5(VAR_16, (VAR_17 & VAR_12) != 0 ?
     VAR_7 : VAR_8, FUNC_0(VAR_17),
     &VAR_21->uq_key)) != 0)
  return (VAR_28);

 if (VAR_18 != ((void*)0))
  FUNC_2(&VAR_20, VAR_18);

 FUNC_16(&VAR_21->uq_key);
 VAR_22 = FUNC_11(&VAR_21->uq_key);
 if (VAR_22 == ((void*)0)) {
  VAR_23 = FUNC_7(VAR_5);
  if (VAR_23 == ((void*)0)) {
   FUNC_20(&VAR_21->uq_key);
   VAR_23 = FUNC_7(VAR_6);
   FUNC_16(&VAR_21->uq_key);
   VAR_22 = FUNC_11(&VAR_21->uq_key);
   if (VAR_22 != ((void*)0)) {
    FUNC_9(VAR_23);
    VAR_23 = ((void*)0);
   }
  }
  if (VAR_23 != ((void*)0)) {
   VAR_23->pi_key = VAR_21->uq_key;
   FUNC_10(VAR_23);
   VAR_22 = VAR_23;
  }
 }
 FUNC_12(VAR_22);
 FUNC_20(&VAR_21->uq_key);





 for (;;) {



  VAR_29 = FUNC_3(&VAR_16->m_owner, VAR_13, &VAR_26, VAR_24);

  if (VAR_29 == -1) {
   VAR_28 = VAR_2;
   break;
  }

  if (VAR_29 == 0) {
   FUNC_1(VAR_26 == VAR_13);
   VAR_28 = 0;
   break;
  }

  if (VAR_26 == VAR_10) {
   VAR_28 = VAR_3;
   break;
  }





  if (VAR_28 == 0) {
   VAR_28 = FUNC_15(VAR_15, 1);
   if (VAR_28 != 0)
    break;
  }


  if (VAR_26 == VAR_9 || VAR_26 == VAR_11) {
   VAR_25 = VAR_26;
   VAR_29 = FUNC_3(&VAR_16->m_owner, VAR_26, &VAR_26,
       VAR_24 | VAR_9);

   if (VAR_29 == -1) {
    VAR_28 = VAR_2;
    break;
   }
   if (VAR_29 == 1) {
    if (VAR_28 == 0) {
     VAR_28 = FUNC_15(VAR_15, 1);
     if (VAR_28 != 0)
      break;
    }





    continue;
   }

   FUNC_1(VAR_29 == 0);
   FUNC_1(VAR_26 == VAR_25);
   FUNC_16(&VAR_21->uq_key);
   FUNC_14(&VAR_21->uq_key);
   VAR_28 = FUNC_8(VAR_22, VAR_15);
   FUNC_18(&VAR_21->uq_key);
   FUNC_20(&VAR_21->uq_key);
   if (VAR_28 != 0) {






    (void)FUNC_4(&VAR_16->m_owner,
        VAR_24 | VAR_9, VAR_25);
   }
   if (VAR_28 == 0 && VAR_25 == VAR_11)
    VAR_28 = VAR_4;
   break;
  }

  if ((VAR_26 & ~VAR_9) == VAR_24) {
   VAR_28 = VAR_1;
   break;
  }

  if (VAR_19 != 0) {
   VAR_28 = VAR_0;
   break;
  }





  if (VAR_28 != 0)
   break;

  FUNC_16(&VAR_21->uq_key);
  FUNC_14(&VAR_21->uq_key);
  FUNC_20(&VAR_21->uq_key);







  VAR_29 = FUNC_3(&VAR_16->m_owner, VAR_26, &VAR_27, VAR_26 |
      VAR_9);


  if (VAR_29 == -1) {
   FUNC_19(&VAR_21->uq_key);
   VAR_28 = VAR_2;
   break;
  }
  if (VAR_29 == 1) {
   FUNC_19(&VAR_21->uq_key);
   VAR_28 = FUNC_15(VAR_15, 1);
   if (VAR_28 != 0)
    break;







   continue;
  }

  FUNC_16(&VAR_21->uq_key);


  FUNC_1(VAR_27 == VAR_26);
  VAR_28 = FUNC_17(VAR_21, VAR_22, VAR_26 & ~VAR_9,
      "umtxpi", VAR_18 == ((void*)0) ? ((void*)0) : &VAR_20,
      (VAR_17 & VAR_14) != 0);
  if (VAR_28 != 0)
   continue;

  VAR_28 = FUNC_15(VAR_15, 0);
  if (VAR_28 != 0)
   break;
 }

 FUNC_16(&VAR_21->uq_key);
 FUNC_13(VAR_22);
 FUNC_20(&VAR_21->uq_key);

 FUNC_6(&VAR_21->uq_key);
 return (VAR_28);
}
