
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int payload; void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int sli4_res_common_get_profile_list_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef TYPE_1__ ocs_hw_get_profile_list_cb_arg_t ;
typedef int ocs_get_profile_list_cb_t ;


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
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int,int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;

ocs_hw_rtn_e
FUNC_9(ocs_hw_t *VAR_9, ocs_get_profile_list_cb_t VAR_10, void* VAR_11)
{
 uint8_t *VAR_12;
 ocs_hw_get_profile_list_cb_arg_t *VAR_13;
 ocs_hw_rtn_e VAR_14 = VAR_3;


 if (FUNC_8(&VAR_9->sli) != VAR_7) {
  return VAR_1;
 }


 VAR_12 = FUNC_6(VAR_9->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc mbox\n");
  return VAR_2;
 }



 VAR_13 = FUNC_6(VAR_9->os, sizeof(ocs_hw_get_profile_list_cb_arg_t), VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_9->os, "failed to malloc cb_arg\n");
  FUNC_2(VAR_9->os, VAR_12, VAR_6);
  return VAR_2;
 }

 VAR_13->cb = VAR_10;
 VAR_13->arg = VAR_11;


 if (FUNC_0(VAR_9->os, &VAR_13->payload, sizeof(sli4_res_common_get_profile_list_t), 4)) {
  FUNC_4(VAR_9->os, "Failed to allocate DMA buffer\n");
  FUNC_2(VAR_9->os, VAR_12, VAR_6);
  FUNC_2(VAR_9->os, VAR_13, sizeof(ocs_hw_get_profile_list_cb_arg_t));
  return VAR_2;
 }

 if (FUNC_7(&VAR_9->sli, VAR_12, VAR_6, 0, &VAR_13->payload)) {
  VAR_14 = FUNC_3(VAR_9, VAR_12, VAR_0, VAR_8, VAR_13);
 }

 if (VAR_14 != VAR_3) {
  FUNC_5(VAR_9->os, "GET_PROFILE_LIST failed\n");
  FUNC_2(VAR_9->os, VAR_12, VAR_6);
  FUNC_1(VAR_9->os, &VAR_13->payload);
  FUNC_2(VAR_9->os, VAR_13, sizeof(ocs_hw_get_profile_list_cb_arg_t));
 }

 return VAR_14;
}
