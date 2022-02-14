
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_owner; } ;
struct umtx_q {int uq_key; } ;
struct thread {int td_tid; struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct _umtx_time {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_3 (int *,int,int*,int) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (struct umutex*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct thread*,int) ;
 int FUNC_9 (struct umtx_q*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct umtx_q*) ;
 int FUNC_12 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_11, struct umutex *VAR_12, uint32_t VAR_13,
    struct _umtx_time *VAR_14, int VAR_15)
{
 struct abs_timeout VAR_16;
 struct umtx_q *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;

 VAR_20 = VAR_11->td_tid;
 VAR_17 = VAR_11->td_umtxq;
 VAR_21 = 0;
 if (VAR_14 != ((void*)0))
  FUNC_2(&VAR_16, VAR_14);





 for (;;) {
  VAR_22 = FUNC_4(&VAR_12->m_owner, &VAR_18);
  if (VAR_22 == -1)
   return (VAR_1);
  if (VAR_15 == VAR_10) {
   if (VAR_18 == VAR_8 ||
       VAR_18 == VAR_5 ||
       VAR_18 == VAR_7 ||
       VAR_18 == VAR_6)
    return (0);
  } else {






   if (VAR_18 == VAR_7) {
    VAR_22 = FUNC_3(&VAR_12->m_owner,
        VAR_7, &VAR_18,
        VAR_20 | VAR_5);
    if (VAR_22 == -1)
     return (VAR_1);
    if (VAR_22 == 0) {
     FUNC_1(VAR_18 == VAR_7);
     return (VAR_3);
    }
    FUNC_1(VAR_22 == 1);
    VAR_22 = FUNC_8(VAR_11, 0);
    if (VAR_22 != 0)
     return (VAR_22);
    continue;
   }
   if (VAR_18 == VAR_6)
    return (VAR_2);





   VAR_22 = FUNC_3(&VAR_12->m_owner, VAR_8,
       &VAR_18, VAR_20);

   if (VAR_22 == -1)
    return (VAR_1);


   if (VAR_22 == 0) {
    FUNC_1(VAR_18 == VAR_8);
    return (0);
   }





   FUNC_1(VAR_22 == 1);
   if (VAR_18 == VAR_5) {
    VAR_22 = FUNC_3(&VAR_12->m_owner,
        VAR_5, &VAR_18,
        VAR_20 | VAR_5);

    if (VAR_22 == -1)
     return (VAR_1);
    if (VAR_22 == 0) {
     FUNC_1(VAR_18 == VAR_5);
     return (0);
    }
    if (VAR_22 == 1) {
     VAR_22 = FUNC_8(VAR_11, 0);
     if (VAR_22 != 0)
      return (VAR_22);
    }





    continue;
   }


   VAR_22 = FUNC_8(VAR_11, 0);
   if (VAR_22 != 0)
    return (VAR_22);
  }

  if (VAR_15 == VAR_9)
   return (VAR_0);





  if (VAR_21 != 0)
   return (VAR_21);

  if ((VAR_21 = FUNC_5(VAR_12, VAR_4,
      FUNC_0(VAR_13), &VAR_17->uq_key)) != 0)
   return (VAR_21);

  FUNC_10(&VAR_17->uq_key);
  FUNC_7(&VAR_17->uq_key);
  FUNC_9(VAR_17);
  FUNC_14(&VAR_17->uq_key);







  VAR_22 = FUNC_3(&VAR_12->m_owner, VAR_18, &VAR_19,
      VAR_18 | VAR_5);


  if (VAR_22 == -1 || VAR_22 == 1) {
   FUNC_10(&VAR_17->uq_key);
   FUNC_11(VAR_17);
   FUNC_13(&VAR_17->uq_key);
   FUNC_14(&VAR_17->uq_key);
   FUNC_6(&VAR_17->uq_key);
   if (VAR_22 == -1)
    return (VAR_1);
   if (VAR_22 == 1) {
    VAR_22 = FUNC_8(VAR_11, 0);
    if (VAR_22 != 0)
     return (VAR_22);
   }
   continue;
  }






  FUNC_10(&VAR_17->uq_key);
  FUNC_13(&VAR_17->uq_key);
  FUNC_1(VAR_19 == VAR_18);
  VAR_21 = FUNC_12(VAR_17, "umtxn", VAR_14 == ((void*)0) ?
      ((void*)0) : &VAR_16);
  FUNC_11(VAR_17);
  FUNC_14(&VAR_17->uq_key);
  FUNC_6(&VAR_17->uq_key);

  if (VAR_21 == 0)
   VAR_21 = FUNC_8(VAR_11, 0);
 }

 return (0);
}
