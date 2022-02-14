
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {scalar_t__ value; int mtx; int waiters; int cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct semaphore *VAR_2)
{
 int VAR_3 ;

 VAR_3 = 0;

 FUNC_1(&VAR_2->mtx);

 while (VAR_2->value == 0) {
  VAR_2->waiters++;
  VAR_3 = FUNC_0(&VAR_2->cv, &VAR_2->mtx);
  VAR_2->waiters--;

  if (VAR_3 == VAR_0) {
   FUNC_2(&VAR_2->mtx);
   return (-VAR_0);
  }

  if (VAR_3 == VAR_1)
   continue;
 }

 VAR_2->value--;
 FUNC_2(&VAR_2->mtx);

 return (0);
}
