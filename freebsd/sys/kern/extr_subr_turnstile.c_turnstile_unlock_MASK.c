
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct turnstile_chain {int tc_lock; } ;
struct turnstile {int * ts_lockobj; int ts_lock; } ;
struct lock_object {int dummy; } ;
struct TYPE_2__ {struct turnstile* td_turnstile; } ;


 int VAR_0 ;
 struct turnstile_chain* FUNC_0 (struct lock_object*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct turnstile *VAR_2, struct lock_object *VAR_3)
{
 struct turnstile_chain *VAR_4;

 FUNC_1(&VAR_2->ts_lock, VAR_0);
 FUNC_2(&VAR_2->ts_lock);
 if (VAR_2 == VAR_1->td_turnstile)
  VAR_2->ts_lockobj = ((void*)0);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(&VAR_4->tc_lock);
}
