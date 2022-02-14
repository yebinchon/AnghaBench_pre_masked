
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int qlnx_callout; scalar_t__ storm_stats_gather; int hw_stats; int cdev; int err_task; int err_taskqueue; scalar_t__ error_recovery; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int *,int ,void (*) (void*),TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 qlnx_host_t *VAR_2;

 VAR_2 = (qlnx_host_t *)VAR_1;

 if (VAR_2->error_recovery) {
  VAR_2->error_recovery = 0;
  FUNC_3(VAR_2->err_taskqueue, &VAR_2->err_task);
  return;
 }

        FUNC_1(&VAR_2->cdev, &VAR_2->hw_stats);

 if (VAR_2->storm_stats_gather)
  FUNC_2(VAR_2);

 FUNC_0(&VAR_2->qlnx_callout, VAR_0, FUNC_4, VAR_2);

 return;
}
