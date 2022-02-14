
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int dma_cmd; int opts; void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int sli4_res_common_get_reconfig_link_info_t ;
struct TYPE_18__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_port_control_cb_t ;
typedef TYPE_1__ ocs_hw_linkcfg_cb_arg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int (*) (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*),TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int,int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_8(ocs_hw_t *VAR_6, uint32_t VAR_7, ocs_hw_port_control_cb_t VAR_8, void *VAR_9)
{
 uint8_t *VAR_10;
 ocs_hw_linkcfg_cb_arg_t *VAR_11;
 ocs_hw_rtn_e VAR_12 = VAR_2;


 VAR_10 = FUNC_6(VAR_6->os, VAR_5, VAR_4 | VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_6->os, "failed to malloc mbox\n");
  return VAR_1;
 }


 VAR_11 = FUNC_6(VAR_6->os, sizeof(ocs_hw_linkcfg_cb_arg_t), VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_6->os, "failed to malloc cb_arg\n");
  FUNC_2(VAR_6->os, VAR_10, VAR_5);
  return VAR_1;
 }

 VAR_11->cb = VAR_8;
 VAR_11->arg = VAR_9;
 VAR_11->opts = VAR_7;


 if (FUNC_0(VAR_6->os, &VAR_11->dma_cmd, sizeof(sli4_res_common_get_reconfig_link_info_t), 4)) {
  FUNC_5(VAR_6->os, "Failed to allocate DMA buffer\n");
  FUNC_2(VAR_6->os, VAR_10, VAR_5);
  FUNC_2(VAR_6->os, VAR_11, sizeof(ocs_hw_linkcfg_cb_arg_t));
  return VAR_1;
 }

 if (FUNC_7(&VAR_6->sli, VAR_10, VAR_5, &VAR_11->dma_cmd)) {
  VAR_12 = FUNC_3(VAR_6, VAR_10, VAR_7, FUNC_4, VAR_11);
 }

 if (VAR_12 != VAR_2) {
  FUNC_5(VAR_6->os, "GET_RECONFIG_LINK_INFO failed\n");
  FUNC_2(VAR_6->os, VAR_10, VAR_5);
  FUNC_1(VAR_6->os, &VAR_11->dma_cmd);
  FUNC_2(VAR_6->os, VAR_11, sizeof(ocs_hw_linkcfg_cb_arg_t));
 } else if (VAR_7 == VAR_0) {

  FUNC_4(VAR_6, 0, VAR_10, VAR_11);
  FUNC_2(VAR_6->os, VAR_10, VAR_5);
  FUNC_1(VAR_6->os, &VAR_11->dma_cmd);
  FUNC_2(VAR_6->os, VAR_11, sizeof(ocs_hw_linkcfg_cb_arg_t));
 } else {

  FUNC_2(VAR_6->os, VAR_10, VAR_5);
 }

 return VAR_12;
}
