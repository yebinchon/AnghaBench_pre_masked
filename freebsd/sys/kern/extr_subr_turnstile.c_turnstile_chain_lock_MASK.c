
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile_chain {int tc_lock; } ;
struct lock_object {int dummy; } ;


 struct turnstile_chain* FUNC_0 (struct lock_object*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lock_object *VAR_0)
{
 struct turnstile_chain *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->tc_lock);
}
