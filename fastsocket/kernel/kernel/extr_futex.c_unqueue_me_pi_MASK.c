
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int plist; } ;
struct futex_q {int key; int lock_ptr; int * pi_state; TYPE_1__ list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct futex_q *VAR_0)
{
 FUNC_1(FUNC_5(&VAR_0->list));
 FUNC_4(&VAR_0->list, &VAR_0->list.plist);

 FUNC_0(!VAR_0->pi_state);
 FUNC_3(VAR_0->pi_state);
 VAR_0->pi_state = ((void*)0);

 FUNC_6(VAR_0->lock_ptr);

 FUNC_2(&VAR_0->key);
}
