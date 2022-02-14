
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pthread_mutex {int m_flags; scalar_t__ m_count; int m_lock; } ;
struct pthread {scalar_t__ nwaiter_defer; int defer_waiters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pthread_mutex*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct pthread*) ;
 struct pthread_mutex* VAR_5 ;
 scalar_t__ FUNC_3 (struct pthread*) ;
 scalar_t__ FUNC_4 (int) ;
 struct pthread* FUNC_5 () ;
 int FUNC_6 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_7 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_8 (int *,scalar_t__,int*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct pthread*,struct pthread_mutex*) ;

__attribute__((used)) static int
FUNC_11(struct pthread_mutex *VAR_6, bool VAR_7, int *VAR_8)
{
 struct pthread *VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 if (FUNC_4(VAR_6 <= VAR_5)) {
  if (VAR_6 == VAR_5)
   return (VAR_0);
  return (VAR_1);
 }

 VAR_9 = FUNC_5();
 VAR_10 = FUNC_3(VAR_9);




 if (FUNC_4(FUNC_0(VAR_6) != VAR_10))
  return (VAR_1);

 VAR_12 = 0;
 VAR_13 = (VAR_6->m_flags & VAR_3) != 0;
 if (FUNC_4(FUNC_1(VAR_6->m_flags) ==
     VAR_4 && VAR_6->m_count > 0)) {
  VAR_6->m_count--;
 } else {
  if ((VAR_6->m_flags & VAR_2) != 0) {
   VAR_11 = 1;
   VAR_6->m_flags &= ~VAR_2;
         } else
   VAR_11 = 0;

  VAR_14 = FUNC_6(VAR_9, VAR_6);
  FUNC_10(VAR_9, VAR_6);
  VAR_12 = FUNC_8(&VAR_6->m_lock, VAR_10, VAR_8);
  if (VAR_11) {
   if (VAR_8 == ((void*)0)) {
    FUNC_9(VAR_9->defer_waiters,
        VAR_9->nwaiter_defer);
    VAR_9->nwaiter_defer = 0;
   } else
    *VAR_8 = 1;
  }
  if (VAR_14)
   FUNC_7(VAR_9, VAR_6);
 }
 if (!VAR_7 && VAR_13)
  FUNC_2(VAR_9);
 return (VAR_12);
}
