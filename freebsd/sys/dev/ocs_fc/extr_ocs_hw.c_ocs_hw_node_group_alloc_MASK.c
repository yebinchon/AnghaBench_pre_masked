
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int indicator; int index; } ;
typedef TYPE_1__ ocs_remote_node_group_t ;
struct TYPE_7__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,TYPE_2__*,...) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_3, ocs_remote_node_group_t *VAR_4)
{

 if (!VAR_3 || !VAR_4) {
  FUNC_0(((void*)0), "bad parameter hw=%p ngroup=%p\n",
    VAR_3, VAR_4);
  return VAR_0;
 }

 if (FUNC_1(&VAR_3->sli, VAR_2, &VAR_4->indicator,
    &VAR_4->index)) {
  FUNC_0(VAR_3->os, "FCOE_RPI allocation failure addr=%#x\n",
    VAR_4->indicator);
  return VAR_0;
 }

 return VAR_1;
}
