
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int ocs_set_nvparms_cb_t ;
struct TYPE_18__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef TYPE_1__ ocs_hw_set_nvparms_cb_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,TYPE_1__*,TYPE_1__*,TYPE_1__,int ) ;

int32_t
FUNC_6(ocs_hw_t *VAR_7, ocs_set_nvparms_cb_t VAR_8, uint8_t *VAR_9,
  uint8_t *VAR_10, uint8_t VAR_11, uint32_t VAR_12, void* VAR_13)
{
 uint8_t *VAR_14;
 ocs_hw_set_nvparms_cb_arg_t *VAR_15;
 ocs_hw_rtn_e VAR_16 = VAR_2;


 VAR_14 = FUNC_4(VAR_7->os, VAR_5, VAR_4 | VAR_3);
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc mbox\n");
  return VAR_1;
 }


 VAR_15 = FUNC_4(VAR_7->os, sizeof(ocs_hw_set_nvparms_cb_arg_t), VAR_3);
 if (VAR_15 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_7->os, VAR_14, VAR_5);
  return VAR_1;
 }

 VAR_15->cb = VAR_8;
 VAR_15->arg = VAR_13;

 if (FUNC_5(&VAR_7->sli, VAR_14, VAR_5, VAR_9, VAR_10, VAR_11, VAR_12)) {
  VAR_16 = FUNC_1(VAR_7, VAR_14, VAR_0, VAR_6, VAR_15);
 }

 if (VAR_16 != VAR_2) {
  FUNC_3(VAR_7->os, "SET_NVPARMS failed\n");
  FUNC_0(VAR_7->os, VAR_14, VAR_5);
  FUNC_0(VAR_7->os, VAR_15, sizeof(ocs_hw_set_nvparms_cb_arg_t));
 }

 return VAR_16;
}
