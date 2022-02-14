
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile_chain {int tc_lock; } ;
struct turnstile {struct thread* ts_owner; int ts_lock; struct lock_object* ts_lockobj; } ;
struct thread {int dummy; } ;
struct lock_object {int dummy; } ;


 struct turnstile_chain* FUNC_0 (struct lock_object*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool
FUNC_4(struct turnstile *VAR_0, struct lock_object **VAR_1,
    struct thread **VAR_2)
{
 struct turnstile_chain *VAR_3;
 struct lock_object *VAR_4;

 if ((VAR_4 = VAR_0->ts_lockobj) == ((void*)0))
  return (0);
 VAR_3 = FUNC_0(VAR_4);
 FUNC_2(&VAR_3->tc_lock);
 FUNC_2(&VAR_0->ts_lock);
 if (FUNC_1(VAR_4 != VAR_0->ts_lockobj)) {
  FUNC_3(&VAR_3->tc_lock);
  FUNC_3(&VAR_0->ts_lock);
  return (0);
 }
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_0->ts_owner;
 return (1);
}
