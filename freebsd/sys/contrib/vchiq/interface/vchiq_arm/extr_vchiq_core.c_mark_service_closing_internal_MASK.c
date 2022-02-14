
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ conn_state; TYPE_3__* service_quotas; int slot_mutex; int recycle_mutex; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_6__ {int closing; size_t localport; TYPE_1__* state; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
struct TYPE_7__ {int quota_event; } ;
typedef TYPE_3__ VCHIQ_SERVICE_QUOTA_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(VCHIQ_SERVICE_T *VAR_1, int VAR_2)
{
 VCHIQ_STATE_T *VAR_3 = VAR_1->state;
 VCHIQ_SERVICE_QUOTA_T *VAR_4;

 VAR_1->closing = 1;


 FUNC_0(&VAR_3->recycle_mutex);
 FUNC_1(&VAR_3->recycle_mutex);
 if (!VAR_2 || (VAR_3->conn_state != VAR_0)) {




  FUNC_0(&VAR_3->slot_mutex);
  FUNC_1(&VAR_3->slot_mutex);
 }


 VAR_4 = &VAR_3->service_quotas[VAR_1->localport];
 FUNC_2(&VAR_4->quota_event);
}
