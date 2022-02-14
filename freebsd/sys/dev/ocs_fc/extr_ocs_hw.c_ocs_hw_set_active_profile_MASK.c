
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint32_t ;
typedef int ocs_set_active_profile_cb_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef TYPE_1__ ocs_hw_set_active_profile_cb_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

int32_t
FUNC_7(ocs_hw_t *VAR_9, ocs_set_active_profile_cb_t VAR_10, uint32_t VAR_11, void* VAR_12)
{
 uint8_t *VAR_13;
 ocs_hw_set_active_profile_cb_arg_t *VAR_14;
 ocs_hw_rtn_e VAR_15 = VAR_3;


 if (FUNC_6(&VAR_9->sli) != VAR_7) {
  return VAR_1;
 }


 VAR_13 = FUNC_4(VAR_9->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc mbox\n");
  return VAR_2;
 }



 VAR_14 = FUNC_4(VAR_9->os, sizeof(ocs_hw_set_active_profile_cb_arg_t), VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_9->os, VAR_13, VAR_6);
  return VAR_2;
 }

 VAR_14->cb = VAR_10;
 VAR_14->arg = VAR_12;

 if (FUNC_5(&VAR_9->sli, VAR_13, VAR_6, 0, VAR_11)) {
  VAR_15 = FUNC_1(VAR_9, VAR_13, VAR_0, VAR_8, VAR_14);
 }

 if (VAR_15 != VAR_3) {
  FUNC_3(VAR_9->os, "SET_ACTIVE_PROFILE failed\n");
  FUNC_0(VAR_9->os, VAR_13, VAR_6);
  FUNC_0(VAR_9->os, VAR_14, sizeof(ocs_hw_set_active_profile_cb_arg_t));
 }

 return VAR_15;
}
