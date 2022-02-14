
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct sleepqueue {int dummy; } ;
struct TYPE_4__ {int m_owner; int m_flags; } ;
struct pthread_mutex {TYPE_2__ m_lock; } ;
struct TYPE_3__ {int c_clockid; } ;
struct pthread_cond {int __has_user_waiters; TYPE_1__ kcond; } ;
struct pthread {scalar_t__ nwaiter_defer; struct pthread_mutex* mutex_obj; int * wchan; int defer_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct pthread*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 (struct pthread_mutex*,int,int) ;
 int FUNC_5 (struct pthread_mutex*,int*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pthread_cond*,struct pthread*) ;
 int FUNC_8 (struct pthread_cond*) ;
 struct sleepqueue* FUNC_9 (struct pthread_cond*) ;
 void* FUNC_10 (struct sleepqueue*,struct pthread*) ;
 int FUNC_11 (struct pthread_cond*) ;
 int FUNC_12 (struct pthread*,int ) ;
 int FUNC_13 (struct pthread*,int ) ;
 int FUNC_14 (struct pthread*) ;
 int FUNC_15 (struct pthread*,int ,struct timespec const*) ;
 int FUNC_16 (struct pthread*) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_19(struct pthread_cond *VAR_4, struct pthread_mutex *VAR_5,
    const struct timespec *VAR_6, int VAR_7)
{
 struct pthread *VAR_8;
 struct sleepqueue *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_8 = FUNC_3();
 if (VAR_8->wchan != ((void*)0))
  FUNC_0("thread %p was already on queue.", VAR_8);

 if (VAR_7)
  FUNC_16(VAR_8);

 FUNC_8(VAR_4);




 VAR_4->__has_user_waiters = 1;
 VAR_10 = 0;
 (void)FUNC_5(VAR_5, &VAR_13, &VAR_10);
 VAR_8->mutex_obj = VAR_5;
 FUNC_7(VAR_4, VAR_8);
 for(;;) {
  FUNC_14(VAR_8);
  FUNC_11(VAR_4);
  if (VAR_10) {
   VAR_10 = 0;
   if ((VAR_5->m_lock.m_owner & VAR_3) == 0)
    (void)FUNC_18(&VAR_5->m_lock,
        VAR_2, VAR_5->m_lock.m_flags,
        0, 0);
  }
  if (VAR_8->nwaiter_defer > 0) {
   FUNC_17(VAR_8->defer_waiters,
       VAR_8->nwaiter_defer);
   VAR_8->nwaiter_defer = 0;
  }

  if (VAR_7)
   FUNC_12(VAR_8, 0);
  VAR_11 = FUNC_15(VAR_8, VAR_4->kcond.c_clockid, VAR_6);
  if (VAR_7)
   FUNC_13(VAR_8, 0);

  FUNC_8(VAR_4);
  if (VAR_8->wchan == ((void*)0)) {
   VAR_11 = 0;
   break;
  } else if (VAR_7 && FUNC_1(VAR_8)) {
   VAR_9 = FUNC_9(VAR_4);
   VAR_4->__has_user_waiters = FUNC_10(VAR_9, VAR_8);
   FUNC_11(VAR_4);
   VAR_8->mutex_obj = ((void*)0);
   VAR_12 = FUNC_4(VAR_5, VAR_13, 0);
   if (!FUNC_2(VAR_8))
    FUNC_6(VAR_1);
   else
    return (VAR_12);
  } else if (VAR_11 == VAR_0) {
   VAR_9 = FUNC_9(VAR_4);
   VAR_4->__has_user_waiters =
       FUNC_10(VAR_9, VAR_8);
   break;
  }
 }
 FUNC_11(VAR_4);
 VAR_8->mutex_obj = ((void*)0);
 VAR_12 = FUNC_4(VAR_5, VAR_13, 0);
 if (VAR_11 == 0)
  VAR_11 = VAR_12;
 return (VAR_11);
}
