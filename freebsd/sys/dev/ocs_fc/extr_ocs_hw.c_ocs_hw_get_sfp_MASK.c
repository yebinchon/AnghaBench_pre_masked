
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int payload; void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint16_t ;
typedef int sli4_res_common_read_transceiver_data_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_sfp_cb_t ;
typedef TYPE_1__ ocs_hw_sfp_cb_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 TYPE_1__* FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int,int ,int *) ;

ocs_hw_rtn_e
FUNC_8(ocs_hw_t *VAR_9, uint16_t VAR_10, ocs_hw_sfp_cb_t VAR_11, void *VAR_12)
{
 ocs_hw_rtn_e VAR_13 = VAR_1;
 ocs_hw_sfp_cb_arg_t *VAR_14;
 uint8_t *VAR_15;


 VAR_15 = FUNC_6(VAR_9->os, VAR_7, VAR_6 | VAR_5);
 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc mbox\n");
  return VAR_2;
 }


 VAR_14 = FUNC_6(VAR_9->os, sizeof(ocs_hw_sfp_cb_arg_t), VAR_5);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc cb_arg\n");
  FUNC_2(VAR_9->os, VAR_15, VAR_7);
  return VAR_2;
 }

 VAR_14->cb = VAR_11;
 VAR_14->arg = VAR_12;


 if (FUNC_0(VAR_9->os, &VAR_14->payload, sizeof(sli4_res_common_read_transceiver_data_t),
     VAR_4)) {
  FUNC_4(VAR_9->os, "Failed to allocate DMA buffer\n");
  FUNC_2(VAR_9->os, VAR_14, sizeof(ocs_hw_sfp_cb_arg_t));
  FUNC_2(VAR_9->os, VAR_15, VAR_7);
  return VAR_2;
 }


 if (FUNC_7(&VAR_9->sli, VAR_15, VAR_7, VAR_10,
     &VAR_14->payload)) {
  VAR_13 = FUNC_3(VAR_9, VAR_15, VAR_0, VAR_8, VAR_14);
 }

 if (VAR_13 != VAR_3) {
  FUNC_5(VAR_9->os, "READ_TRANSCEIVER_DATA failed with status %d\n",
    VAR_13);
  FUNC_1(VAR_9->os, &VAR_14->payload);
  FUNC_2(VAR_9->os, VAR_14, sizeof(ocs_hw_sfp_cb_arg_t));
  FUNC_2(VAR_9->os, VAR_15, VAR_7);
 }

 return VAR_13;
}
