
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {scalar_t__ value; int mtx; int waiters; int cv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct semaphore *VAR_0)
{

 FUNC_1(&VAR_0->mtx);
 while (VAR_0->value == 0) {
  VAR_0->waiters++;
  FUNC_0(&VAR_0->cv, &VAR_0->mtx);
  VAR_0->waiters--;
 }

 VAR_0->value--;
 FUNC_2(&VAR_0->mtx);
}
