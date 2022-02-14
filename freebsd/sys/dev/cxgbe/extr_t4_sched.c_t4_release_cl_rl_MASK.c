
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_cl_rl_params {scalar_t__ refcount; } ;
struct TYPE_8__ {int nports; } ;
struct adapter {int tc_lock; TYPE_3__** port; TYPE_1__* chip_params; TYPE_4__ params; } ;
struct TYPE_7__ {TYPE_2__* sched_params; } ;
struct TYPE_6__ {struct tx_cl_rl_params* cl_rl; } ;
struct TYPE_5__ {int nsched_cls; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct adapter *VAR_0, int VAR_1, int VAR_2)
{
 struct tx_cl_rl_params *VAR_3;

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->params.nports);
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0->chip_params->nsched_cls);

 FUNC_1(&VAR_0->tc_lock);
 VAR_3 = &VAR_0->port[VAR_1]->sched_params->cl_rl[VAR_2];
 FUNC_0(VAR_3->refcount > 0);
 VAR_3->refcount--;
 FUNC_2(&VAR_0->tc_lock);
}
