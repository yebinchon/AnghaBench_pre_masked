
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef TYPE_1__ ocs_hw_fw_write_cb_arg_t ;
typedef int ocs_hw_fw_cb_t ;
typedef int ocs_dma_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,int,int,int ,int ,char*,int *) ;
 scalar_t__ FUNC_6 (int *) ;

ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_9, ocs_dma_t *VAR_10, uint32_t VAR_11, uint32_t VAR_12, int VAR_13, ocs_hw_fw_cb_t VAR_14, void *VAR_15)
{
 ocs_hw_rtn_e VAR_16 = VAR_1;
 uint8_t *VAR_17;
 ocs_hw_fw_write_cb_arg_t *VAR_18;
 int VAR_19=0;

 if (VAR_7 != FUNC_6(&VAR_9->sli)) {
  FUNC_3(VAR_9->os, "Function only supported for I/F type 2\n");
  return VAR_1;
 }

 VAR_17 = FUNC_4(VAR_9->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_17 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc mbox\n");
  return VAR_2;
 }

 VAR_18 = FUNC_4(VAR_9->os, sizeof(ocs_hw_fw_write_cb_arg_t), VAR_4);
 if (VAR_18 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_9->os, VAR_17, VAR_6);
  return VAR_2;
 }

 VAR_18->cb = VAR_14;
 VAR_18->arg = VAR_15;

 if (FUNC_5(&VAR_9->sli, VAR_17, VAR_6, VAR_19, VAR_13,
   VAR_11, VAR_12, "/prg/", VAR_10)) {
  VAR_16 = FUNC_1(VAR_9, VAR_17, VAR_0, VAR_8, VAR_18);
 }

 if (VAR_16 != VAR_3) {
  FUNC_3(VAR_9->os, "COMMON_WRITE_OBJECT failed\n");
  FUNC_0(VAR_9->os, VAR_17, VAR_6);
  FUNC_0(VAR_9->os, VAR_18, sizeof(ocs_hw_fw_write_cb_arg_t));
 }

 return VAR_16;

}
