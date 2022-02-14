
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ wq_lastdonebatch; int wq_nwipslots; int wq_donequeue_lock; int wq_next_batchid; TYPE_1__* wq_wip; int wq_donequeue; } ;
typedef TYPE_2__ workqueue_t ;
struct TYPE_8__ {scalar_t__ wip_batchid; int * wip_td; int wip_cv; } ;
typedef TYPE_3__ wip_t ;
struct TYPE_6__ {int wip_cv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(workqueue_t *VAR_0, wip_t *VAR_1, int VAR_2)
{
 FUNC_4(&VAR_0->wq_donequeue_lock);

 while (VAR_0->wq_lastdonebatch + 1 < VAR_1->wip_batchid)
  FUNC_3(&VAR_1->wip_cv, &VAR_0->wq_donequeue_lock);
 FUNC_0(VAR_0->wq_lastdonebatch + 1 == VAR_1->wip_batchid);

 FUNC_1(VAR_0->wq_donequeue, VAR_1->wip_td);
 VAR_0->wq_lastdonebatch++;
 FUNC_2(&VAR_0->wq_wip[(VAR_2 + 1) %
     VAR_0->wq_nwipslots].wip_cv);


 VAR_1->wip_td = ((void*)0);
 VAR_1->wip_batchid = VAR_0->wq_next_batchid++;

 FUNC_5(&VAR_0->wq_donequeue_lock);
}
