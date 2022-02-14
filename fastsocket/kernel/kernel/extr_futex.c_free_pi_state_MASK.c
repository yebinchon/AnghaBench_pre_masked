
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct futex_pi_state {int refcount; TYPE_1__* owner; int pi_mutex; int list; } ;
struct TYPE_4__ {struct futex_pi_state* pi_state_cache; } ;
struct TYPE_3__ {int pi_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct futex_pi_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct futex_pi_state *VAR_1)
{
 if (!FUNC_0(&VAR_1->refcount))
  return;





 if (VAR_1->owner) {
  FUNC_5(&VAR_1->owner->pi_lock);
  FUNC_3(&VAR_1->list);
  FUNC_6(&VAR_1->owner->pi_lock);

  FUNC_4(&VAR_1->pi_mutex, VAR_1->owner);
 }

 if (VAR_0->pi_state_cache)
  FUNC_2(VAR_1);
 else {





  VAR_1->owner = ((void*)0);
  FUNC_1(&VAR_1->refcount, 1);
  VAR_0->pi_state_cache = VAR_1;
 }
}
