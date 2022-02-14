
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_flags; } ;
struct pthread_mutex {TYPE_1__ m_lock; } ;
struct pthread {int dummy; } ;
typedef struct pthread_mutex* pthread_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pthread_mutex*) ;
 struct pthread_mutex* VAR_2 ;
 struct pthread_mutex* VAR_3 ;
 scalar_t__ FUNC_1 (struct pthread*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct pthread_mutex* FUNC_2 (struct pthread_mutex**,int ) ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 (struct pthread_mutex*,int *) ;

int
FUNC_5(pthread_mutex_t *VAR_6)
{
 struct pthread_mutex *VAR_7;
 struct pthread *VAR_8;

 if (*VAR_6 == VAR_3) {
  VAR_7 = FUNC_2(VAR_6, 0);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  FUNC_4(VAR_7, ((void*)0));
 } else {
  VAR_7 = *VAR_6;
  if (VAR_7 <= VAR_2)
   return (VAR_0);
 }
 VAR_8 = FUNC_3();
 if ((VAR_7->m_lock.m_flags & (VAR_5 | VAR_4)) !=
     (VAR_5 | VAR_4))
  return (VAR_0);
 if (FUNC_0(VAR_7) != FUNC_1(VAR_8))
  return (VAR_1);
 VAR_7->m_lock.m_flags &= ~VAR_4;
 return (0);
}
