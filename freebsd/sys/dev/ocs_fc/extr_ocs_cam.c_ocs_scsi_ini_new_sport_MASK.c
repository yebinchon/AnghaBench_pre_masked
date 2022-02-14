
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_5__ {int fc_id; TYPE_2__* tgt_data; int is_vport; int * ocs; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_6__ {int fc_id; } ;
typedef TYPE_2__ ocs_fcport ;
typedef int int32_t ;


 TYPE_2__* FUNC_0 (int *,int ) ;

int32_t
FUNC_1(ocs_sport_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;
 ocs_fcport *VAR_2 = FUNC_0(VAR_1, 0);

 if (!VAR_0->is_vport) {
  VAR_0->tgt_data = VAR_2;
  VAR_2->fc_id = VAR_0->fc_id;
 }

 return 0;
}
