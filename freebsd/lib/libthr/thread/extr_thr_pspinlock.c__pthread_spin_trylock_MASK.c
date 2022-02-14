
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_spinlock {int s_lock; } ;
typedef struct pthread_spinlock* pthread_spinlock_t ;


 int VAR_0 ;
 struct pthread_spinlock* VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct pthread_spinlock* FUNC_1 (struct pthread_spinlock**,int ) ;
 int FUNC_2 () ;

int
FUNC_3(pthread_spinlock_t *VAR_2)
{
 struct pthread_spinlock *VAR_3;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  return (VAR_0);
 VAR_3 = *VAR_2 == VAR_1 ? FUNC_1(VAR_2, 0) : *VAR_2;
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(FUNC_2(), &VAR_3->s_lock));
}
