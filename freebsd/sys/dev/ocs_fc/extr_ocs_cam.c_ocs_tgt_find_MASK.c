
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ocs_node_t ;
struct TYPE_4__ {TYPE_2__* tgt; } ;
typedef TYPE_1__ ocs_fcport ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ wwpn; } ;
typedef TYPE_2__ ocs_fc_target_t ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

int32_t
FUNC_1(ocs_fcport *VAR_2, ocs_node_t *VAR_3)
{
 ocs_fc_target_t *VAR_4 = ((void*)0);
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_2->tgt[VAR_5];

  if (VAR_4->state == VAR_1)
   continue;

  if (FUNC_0(VAR_3) == VAR_4->wwpn) {
   return VAR_5;
  }
 }

 return -1;
}
