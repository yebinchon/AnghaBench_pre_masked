
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int payload; int pci_func; int new_protocol; void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int ocs_set_port_protocol_cb_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef TYPE_1__ ocs_hw_set_port_protocol_cb_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_port_protocol_e ;
typedef int ocs_hw_get_port_protocol_cb_arg_t ;
typedef int ocs_hw_fw_write_cb_arg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_8 (int *) ;

ocs_hw_rtn_e
FUNC_9(ocs_hw_t *VAR_9, ocs_hw_port_protocol_e VAR_10,
  uint32_t VAR_11, ocs_set_port_protocol_cb_t VAR_12, void *VAR_13)
{
 uint8_t *VAR_14;
 ocs_hw_set_port_protocol_cb_arg_t *VAR_15;
 ocs_hw_rtn_e VAR_16 = VAR_1;


 if (FUNC_8(&VAR_9->sli) != VAR_7) {
  return VAR_1;
 }


 VAR_14 = FUNC_6(VAR_9->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc mbox\n");
  return VAR_2;
 }



 VAR_15 = FUNC_6(VAR_9->os, sizeof(ocs_hw_set_port_protocol_cb_arg_t), VAR_4);
 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc cb_arg\n");
  FUNC_2(VAR_9->os, VAR_14, VAR_6);
  return VAR_2;
 }

 VAR_15->cb = VAR_12;
 VAR_15->arg = VAR_13;
 VAR_15->new_protocol = VAR_10;
 VAR_15->pci_func = VAR_11;


 if (FUNC_0(VAR_9->os, &VAR_15->payload, 4096, 4)) {
  FUNC_4(VAR_9->os, "Failed to allocate DMA buffer\n");
  FUNC_2(VAR_9->os, VAR_14, VAR_6);
  FUNC_2(VAR_9->os, VAR_15, sizeof(ocs_hw_get_port_protocol_cb_arg_t));
  return VAR_2;
 }

 if (FUNC_7(&VAR_9->sli, VAR_14, VAR_6, &VAR_15->payload)) {
  VAR_16 = FUNC_3(VAR_9, VAR_14, VAR_0, VAR_8, VAR_15);
 }

 if (VAR_16 != VAR_3) {
  FUNC_5(VAR_9->os, "GET_PROFILE_CONFIG failed\n");
  FUNC_2(VAR_9->os, VAR_14, VAR_6);
  FUNC_2(VAR_9->os, VAR_15, sizeof(ocs_hw_fw_write_cb_arg_t));
  FUNC_1(VAR_9->os, &VAR_15->payload);
 }

 return VAR_16;
}
