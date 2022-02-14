
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_spinlock {int s_lock; } ;
typedef struct pthread_spinlock* pthread_spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pthread_spinlock* VAR_5 ;
 struct pthread_spinlock* FUNC_0 (struct pthread_spinlock**,int) ;
 int FUNC_1 (int *) ;
 struct pthread_spinlock* FUNC_2 (int) ;

int
FUNC_3(pthread_spinlock_t *VAR_6, int VAR_7)
{
 struct pthread_spinlock *VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (VAR_7 == VAR_3) {
  VAR_8 = FUNC_2(sizeof(struct pthread_spinlock));
  if (VAR_8 == ((void*)0))
   return (VAR_2);
  *VAR_6 = VAR_8;
 } else if (VAR_7 == VAR_4) {
  VAR_8 = FUNC_0(VAR_6, 1);
  if (VAR_8 == ((void*)0))
   return (VAR_0);
  *VAR_6 = VAR_5;
 } else {
  return (VAR_1);
 }
 FUNC_1(&VAR_8->s_lock);
 return (0);
}
