
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ m_owner; } ;
struct pthread_spinlock {TYPE_1__ s_lock; } ;
struct pthread {int dummy; } ;
typedef struct pthread_spinlock* pthread_spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pthread_spinlock* VAR_3 ;
 scalar_t__ FUNC_0 (struct pthread*,TYPE_1__*) ;
 struct pthread_spinlock* FUNC_1 (struct pthread_spinlock**,int ) ;
 struct pthread* FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;

int
FUNC_4(pthread_spinlock_t *VAR_5)
{
 struct pthread *VAR_6;
 struct pthread_spinlock *VAR_7;
 int VAR_8;

 if (VAR_5 == ((void*)0))
  return (VAR_1);
 VAR_7 = *VAR_5 == VAR_3 ? FUNC_1(VAR_5, 0) : *VAR_5;
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 VAR_6 = FUNC_2();
 VAR_8 = VAR_2;
 while (FUNC_0(VAR_6, &VAR_7->s_lock) != 0) {
  while (VAR_7->s_lock.m_owner) {
   if (!VAR_4) {
    FUNC_3();
   } else {
    VAR_0;
    if (--VAR_8 <= 0) {
     VAR_8 = VAR_2;
     FUNC_3();
    }
   }
  }
 }
 return (0);
}
