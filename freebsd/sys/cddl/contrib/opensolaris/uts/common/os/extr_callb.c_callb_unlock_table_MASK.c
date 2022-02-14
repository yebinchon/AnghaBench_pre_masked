
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ct_busy; int ct_lock; int ct_busy_cv; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void)
{
 FUNC_2(&VAR_0->ct_lock);
 FUNC_0(VAR_0->ct_busy != 0);
 VAR_0->ct_busy = 0;
 FUNC_1(&VAR_0->ct_busy_cv);
 FUNC_3(&VAR_0->ct_lock);
}
