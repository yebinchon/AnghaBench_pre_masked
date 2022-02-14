
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_owner; } ;
struct umtx_key {int dummy; } ;
struct thread {int td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int*,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (struct umutex*,int ,int ,struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct umtx_key*) ;
 int FUNC_8 (struct thread*,int) ;
 int FUNC_9 (struct umtx_key*) ;
 int FUNC_10 (struct umtx_key*) ;
 int FUNC_11 (struct umtx_key*,int) ;
 int FUNC_12 (struct umtx_key*) ;
 int FUNC_13 (struct umtx_key*) ;

__attribute__((used)) static int
FUNC_14(struct thread *VAR_5, struct umutex *VAR_6, uint32_t VAR_7, bool VAR_8)
{
 struct umtx_key VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_5->td_tid;

again:



 VAR_14 = FUNC_3(&VAR_6->m_owner, &VAR_10);
 if (VAR_14 == -1)
  return (VAR_0);

 if ((VAR_10 & ~VAR_4) != VAR_12)
  return (VAR_2);

 VAR_13 = FUNC_6(VAR_7, VAR_8);
 if ((VAR_10 & VAR_4) == 0) {
  VAR_14 = FUNC_2(&VAR_6->m_owner, VAR_10, &VAR_11, VAR_13);
  if (VAR_14 == -1)
   return (VAR_0);
  if (VAR_14 == 1) {
   VAR_14 = FUNC_8(VAR_5, 0);
   if (VAR_14 != 0)
    return (VAR_14);
   goto again;
  }
  FUNC_1(VAR_11 == VAR_10);
  return (0);
 }


 if ((VAR_14 = FUNC_4(VAR_6, VAR_3, FUNC_0(VAR_7),
     &VAR_9)) != 0)
  return (VAR_14);

 FUNC_10(&VAR_9);
 FUNC_7(&VAR_9);
 VAR_15 = FUNC_9(&VAR_9);
 FUNC_13(&VAR_9);






 if (VAR_15 > 1)
  VAR_13 |= VAR_4;
 VAR_14 = FUNC_2(&VAR_6->m_owner, VAR_10, &VAR_11, VAR_13);
 FUNC_10(&VAR_9);
 FUNC_11(&VAR_9, 1);
 FUNC_12(&VAR_9);
 FUNC_13(&VAR_9);
 FUNC_5(&VAR_9);
 if (VAR_14 == -1)
  return (VAR_0);
 if (VAR_14 == 1) {
  if (VAR_11 != VAR_10)
   return (VAR_1);
  VAR_14 = FUNC_8(VAR_5, 0);
  if (VAR_14 != 0)
   return (VAR_14);
  goto again;
 }
 return (0);
}
