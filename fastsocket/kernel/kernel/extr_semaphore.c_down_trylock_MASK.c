
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {int count; int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct semaphore *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_2 = VAR_0->count - 1;
 if (FUNC_0(VAR_2 >= 0))
  VAR_0->count = VAR_2;
 FUNC_2(&VAR_0->lock, VAR_1);

 return (VAR_2 < 0);
}
