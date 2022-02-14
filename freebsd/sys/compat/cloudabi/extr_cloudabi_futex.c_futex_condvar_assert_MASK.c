
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_condvar {scalar_t__ fc_waitcount; int fc_lock; int fc_waiters; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(const struct futex_condvar *VAR_0)
{

 FUNC_0(VAR_0->fc_waitcount >= FUNC_2(&VAR_0->fc_waiters),
     ("Total number of waiters cannot be smaller than the wait queue"));
 FUNC_1(VAR_0->fc_lock);
}
