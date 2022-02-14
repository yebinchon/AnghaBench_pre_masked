
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dlm_lock_resource {int granted; } ;
struct TYPE_3__ {int convert_type; } ;
struct dlm_lock {TYPE_2__* lksb; TYPE_1__ ml; int list; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct dlm_lock_resource *VAR_3,
    struct dlm_lock *VAR_4)
{

 FUNC_0(&VAR_4->list, &VAR_3->granted);
 VAR_4->ml.convert_type = VAR_2;
 VAR_4->lksb->flags &= ~(VAR_0|VAR_1);
}
