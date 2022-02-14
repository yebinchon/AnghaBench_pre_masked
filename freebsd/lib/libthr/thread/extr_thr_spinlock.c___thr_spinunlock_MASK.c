
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spinlock_extra {int lock; } ;
struct TYPE_3__ {struct spinlock_extra* thr_extra; } ;
typedef TYPE_1__ spinlock_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;

void
FUNC_2(spinlock_t *VAR_0)
{
 struct spinlock_extra *VAR_1;

 VAR_1 = VAR_0->thr_extra;
 FUNC_0(FUNC_1(), &VAR_1->lock);
}
