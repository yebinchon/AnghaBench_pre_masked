
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_flags; int* m_ceilings; int m_owner; } ;
struct umtx_q {int uq_key; } ;
struct thread {int td_tid; struct umtx_q* td_umtxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int*,int,int*,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct umutex*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct umtx_q*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct umtx_q*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct umtx_q*,char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_13, struct umutex *VAR_14, uint32_t VAR_15,
    uint32_t *VAR_16)
{
 struct umtx_q *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_22 = FUNC_3(&VAR_14->m_flags, &VAR_18);
 if (VAR_22 == -1)
  return (VAR_0);
 if ((VAR_18 & VAR_9) == 0)
  return (VAR_1);
 if (VAR_15 > VAR_5)
  return (VAR_1);
 VAR_19 = VAR_13->td_tid;
 VAR_17 = VAR_13->td_umtxq;
 if ((VAR_22 = FUNC_5(VAR_14, (VAR_18 & VAR_12) != 0 ?
     VAR_6 : VAR_7, FUNC_0(VAR_18),
     &VAR_17->uq_key)) != 0)
  return (VAR_22);
 for (;;) {
  FUNC_9(&VAR_17->uq_key);
  FUNC_7(&VAR_17->uq_key);
  FUNC_14(&VAR_17->uq_key);

  VAR_23 = FUNC_3(&VAR_14->m_ceilings[0], &VAR_21);
  if (VAR_23 == -1) {
   VAR_22 = VAR_0;
   break;
  }

  VAR_23 = FUNC_2(&VAR_14->m_owner, VAR_8, &VAR_20,
      VAR_19 | VAR_8);
  if (VAR_23 == -1) {
   VAR_22 = VAR_0;
   break;
  }

  if (VAR_23 == 0) {
   FUNC_1(VAR_20 == VAR_8);
   VAR_23 = FUNC_4(&VAR_14->m_ceilings[0], VAR_15);
   VAR_24 = FUNC_4(&VAR_14->m_owner, VAR_8);
   VAR_22 = (VAR_23 == 0 && VAR_24 == 0) ? 0: VAR_0;
   break;
  }

  if ((VAR_20 & ~VAR_8) == VAR_19) {
   VAR_23 = FUNC_4(&VAR_14->m_ceilings[0], VAR_15);
   VAR_22 = VAR_23 == 0 ? 0 : VAR_0;
   break;
  }

  if (VAR_20 == VAR_11) {
   VAR_22 = VAR_3;
   break;
  } else if (VAR_20 == VAR_10) {
   VAR_22 = VAR_2;
   break;
  }





  if (VAR_22 != 0)
   break;






  FUNC_9(&VAR_17->uq_key);
  FUNC_8(VAR_17);
  FUNC_13(&VAR_17->uq_key);
  VAR_22 = FUNC_12(VAR_17, "umtxpp", ((void*)0));
  FUNC_10(VAR_17);
  FUNC_14(&VAR_17->uq_key);
 }
 FUNC_9(&VAR_17->uq_key);
 if (VAR_22 == 0)
  FUNC_11(&VAR_17->uq_key, VAR_4);
 FUNC_13(&VAR_17->uq_key);
 FUNC_14(&VAR_17->uq_key);
 FUNC_6(&VAR_17->uq_key);
 if (VAR_22 == 0 && VAR_16 != ((void*)0)) {
  VAR_23 = FUNC_4(VAR_16, VAR_21);
  VAR_22 = VAR_23 == 0 ? 0 : VAR_0;
 }
 return (VAR_22);
}
