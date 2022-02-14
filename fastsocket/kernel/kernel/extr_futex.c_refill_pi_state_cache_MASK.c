
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct futex_pi_state {int key; int refcount; int * owner; int list; } ;
struct TYPE_2__ {struct futex_pi_state* pi_state_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_3 ;
 struct futex_pi_state* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct futex_pi_state*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct futex_pi_state *VAR_4;

 if (FUNC_3(VAR_3->pi_state_cache))
  return 0;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);

 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->list);

 VAR_4->owner = ((void*)0);
 FUNC_1(&VAR_4->refcount, 1);
 VAR_4->key = VAR_1;

 VAR_3->pi_state_cache = VAR_4;

 return 0;
}
