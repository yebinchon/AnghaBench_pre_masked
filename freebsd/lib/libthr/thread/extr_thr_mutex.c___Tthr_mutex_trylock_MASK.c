
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int m_flags; } ;
struct pthread_mutex {int m_flags; TYPE_1__ m_lock; } ;
struct pthread {int dummy; } ;
typedef int pthread_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pthread_mutex*) ;
 int FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*) ;
 scalar_t__ FUNC_3 (struct pthread*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 struct pthread* FUNC_5 () ;
 int FUNC_6 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_7 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (int *,struct pthread_mutex**) ;
 int FUNC_10 (struct pthread*,struct pthread_mutex*,int) ;
 int FUNC_11 (struct pthread_mutex*) ;

int
FUNC_12(pthread_mutex_t *VAR_3)
{
 struct pthread *VAR_4;
 struct pthread_mutex *VAR_5;
 uint32_t VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_9(VAR_3, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_4 = FUNC_5();
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_5->m_flags & VAR_1)
  FUNC_1(VAR_4);
 VAR_8 = FUNC_6(VAR_4, VAR_5);
 VAR_7 = FUNC_8(&VAR_5->m_lock, VAR_6);
 if (FUNC_4(VAR_7 == 0) || VAR_7 == VAR_0) {
  FUNC_10(VAR_4, VAR_5, VAR_7);
  if (VAR_7 == VAR_0)
   VAR_5->m_lock.m_flags |= VAR_2;
 } else if (FUNC_0(VAR_5) == VAR_6) {
  VAR_7 = FUNC_11(VAR_5);
 }
 if (VAR_8)
  FUNC_7(VAR_4, VAR_5);
 if (VAR_7 != 0 && VAR_7 != VAR_0 &&
     (VAR_5->m_flags & VAR_1) != 0)
  FUNC_2(VAR_4);
 return (VAR_7);
}
