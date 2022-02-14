
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_sli_port_t ;
struct TYPE_5__ {scalar_t__ indicator; int * sport; int fc_id; int index; } ;
typedef TYPE_1__ ocs_remote_node_t ;
struct TYPE_6__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*,int *) ;

ocs_hw_rtn_e
FUNC_4(ocs_hw_t *VAR_4, ocs_remote_node_t *VAR_5, uint32_t VAR_6,
  ocs_sli_port_t *VAR_7)
{

 if (VAR_3 != VAR_5->indicator) {
  FUNC_1(VAR_4->os, "FCOE_RPI allocation failure addr=%#x rpi=%#x\n",
    VAR_6, VAR_5->indicator);
  return VAR_0;
 }




 if (FUNC_2(&VAR_4->sli) > 0) {
  FUNC_0(VAR_4->os, "Chip is in an error state - reset needed\n");
  return VAR_0;
 }


 VAR_5->sport = ((void*)0);

 if (FUNC_3(&VAR_4->sli, VAR_2, &VAR_5->indicator, &VAR_5->index)) {
  FUNC_1(VAR_4->os, "FCOE_RPI allocation failure addr=%#x\n",
    VAR_6);
  return VAR_0;
 }

 VAR_5->fc_id = VAR_6;
 VAR_5->sport = VAR_7;

 return VAR_1;
}
