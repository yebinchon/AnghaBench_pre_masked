
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock {scalar_t__ lk_lock; scalar_t__ lk_recurse; scalar_t__ lk_exslpfail; int lock_object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lock *VAR_1)
{

 FUNC_0(VAR_1->lk_lock == VAR_0, ("lockmgr still held"));
 FUNC_0(VAR_1->lk_recurse == 0, ("lockmgr still recursed"));
 FUNC_0(VAR_1->lk_exslpfail == 0, ("lockmgr still exclusive waiters"));
 FUNC_1(&VAR_1->lock_object);
}
