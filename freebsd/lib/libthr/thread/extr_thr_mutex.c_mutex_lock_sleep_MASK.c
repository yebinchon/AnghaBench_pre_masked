
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct timespec {int tv_nsec; } ;
struct TYPE_3__ {int m_flags; int m_owner; } ;
struct pthread_mutex {int m_spinloops; int m_yieldloops; TYPE_1__ m_lock; } ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pthread_mutex*) ;
 int FUNC_1 (struct pthread*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,struct timespec const*) ;
 int FUNC_5 () ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int*,int,int) ;
 int FUNC_7 (struct pthread*,struct pthread_mutex*,int) ;
 int FUNC_8 (struct pthread_mutex*,struct timespec const*) ;

__attribute__((used)) static int
FUNC_9(struct pthread *VAR_9, struct pthread_mutex *VAR_10,
    const struct timespec *VAR_11)
{
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_10) == VAR_12)
  return (FUNC_8(VAR_10, VAR_11));







 if (FUNC_2((VAR_10->m_lock.m_flags & (VAR_6 |
     VAR_5 | VAR_7 | VAR_4)) != 0))
  goto sleep_in_kernel;

 if (!VAR_8)
  goto yield_loop;

 VAR_14 = VAR_10->m_spinloops;
 while (VAR_14--) {
  VAR_13 = VAR_10->m_lock.m_owner;
  if ((VAR_13 & ~VAR_3) == 0) {
   if (FUNC_6(&VAR_10->m_lock.m_owner, VAR_13,
       VAR_12 | VAR_13)) {
    VAR_15 = 0;
    goto done;
   }
  }
  VAR_0;
 }

yield_loop:
 VAR_14 = VAR_10->m_yieldloops;
 while (VAR_14--) {
  FUNC_5();
  VAR_13 = VAR_10->m_lock.m_owner;
  if ((VAR_13 & ~VAR_3) == 0) {
   if (FUNC_6(&VAR_10->m_lock.m_owner, VAR_13,
       VAR_12 | VAR_13)) {
    VAR_15 = 0;
    goto done;
   }
  }
 }

sleep_in_kernel:
 if (VAR_11 == ((void*)0))
  VAR_15 = FUNC_3(&VAR_10->m_lock, VAR_12);
 else if (FUNC_2(VAR_11->tv_nsec < 0 ||
     VAR_11->tv_nsec >= 1000000000))
  VAR_15 = VAR_1;
 else
  VAR_15 = FUNC_4(&VAR_10->m_lock, VAR_12, VAR_11);
done:
 if (VAR_15 == 0 || VAR_15 == VAR_2) {
  FUNC_7(VAR_9, VAR_10, VAR_15);
  if (VAR_15 == VAR_2)
   VAR_10->m_lock.m_flags |= VAR_4;
 }
 return (VAR_15);
}
