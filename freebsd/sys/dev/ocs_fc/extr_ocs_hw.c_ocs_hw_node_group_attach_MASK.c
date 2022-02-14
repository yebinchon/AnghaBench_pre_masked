
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int index; int indicator; int fc_id; scalar_t__ attached; } ;
typedef TYPE_1__ ocs_remote_node_t ;
struct TYPE_9__ {int index; int indicator; } ;
typedef TYPE_2__ ocs_remote_node_group_t ;
struct TYPE_10__ {int os; int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,TYPE_3__*,...) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_3, ocs_remote_node_group_t *VAR_4, ocs_remote_node_t *VAR_5)
{

 if (!VAR_3 || !VAR_4 || !VAR_5) {
  FUNC_0(((void*)0), "bad parameter hw=%p ngroup=%p rnode=%p\n",
       VAR_3, VAR_4, VAR_5);
  return VAR_0;
 }

 if (VAR_5->attached) {
  FUNC_0(VAR_3->os, "node already attached RPI=%#x addr=%#x\n",
       VAR_5->indicator, VAR_5->fc_id);
  return VAR_0;
 }

 if (FUNC_1(&VAR_3->sli, VAR_2, VAR_5->indicator)) {
  FUNC_0(VAR_3->os, "FCOE_RPI free failure RPI=%#x\n",
    VAR_5->indicator);
  return VAR_0;
 }

 VAR_5->indicator = VAR_4->indicator;
 VAR_5->index = VAR_4->index;

 return VAR_1;
}
