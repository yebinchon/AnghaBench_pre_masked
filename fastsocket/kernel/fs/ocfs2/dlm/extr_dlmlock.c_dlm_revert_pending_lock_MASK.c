
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lock_resource {int dummy; } ;
struct dlm_lock {TYPE_1__* lksb; int list; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct dlm_lock_resource *VAR_1,
        struct dlm_lock *VAR_2)
{

 FUNC_0(&VAR_2->list);
 VAR_2->lksb->flags &= ~VAR_0;
}
