
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_5__ {int is_vport; int * ocs; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_6__ {scalar_t__ fc_id; } ;
typedef TYPE_2__ ocs_fcport ;


 TYPE_2__* FUNC_0 (int *,int ) ;

void
FUNC_1(ocs_sport_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;
 ocs_fcport *VAR_2 = FUNC_0(VAR_1, 0);

 if (!VAR_0->is_vport) {
  VAR_2->fc_id = 0;
 }
}
