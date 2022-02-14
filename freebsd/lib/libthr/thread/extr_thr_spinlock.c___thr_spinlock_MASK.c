
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct spinlock_extra {int lock; } ;
struct TYPE_4__ {struct spinlock_extra* thr_extra; } ;
typedef TYPE_1__ spinlock_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

void
FUNC_5(spinlock_t *VAR_1)
{
 struct spinlock_extra *VAR_2;

 if (!FUNC_3())
  FUNC_0("Spinlock called when not threaded.");
 if (!VAR_0)
  FUNC_0("Spinlocks not initialized.");
 if (VAR_1->thr_extra == ((void*)0))
  FUNC_4(VAR_1);
 VAR_2 = VAR_1->thr_extra;
 FUNC_1(FUNC_2(), &VAR_2->lock);
}
