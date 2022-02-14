
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {scalar_t__ rw_lock; scalar_t__ rw_recurse; int lock_object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 struct rwlock* FUNC_2 (uintptr_t volatile*) ;

void
FUNC_3(volatile uintptr_t *VAR_2)
{
 struct rwlock *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3->rw_lock == VAR_1, ("rw lock %p not unlocked", VAR_3));
 FUNC_0(VAR_3->rw_recurse == 0, ("rw lock %p still recursed", VAR_3));
 VAR_3->rw_lock = VAR_0;
 FUNC_1(&VAR_3->lock_object);
}
