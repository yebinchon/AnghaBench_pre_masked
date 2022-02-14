
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef TYPE_1__ ocs_hw_get_nvparms_cb_arg_t ;
typedef int ocs_get_nvparms_cb_t ;
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
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int) ;

int32_t
FUNC_6(ocs_hw_t *VAR_7, ocs_get_nvparms_cb_t VAR_8, void* VAR_9)
{
 uint8_t *VAR_10;
 ocs_hw_get_nvparms_cb_arg_t *VAR_11;
 ocs_hw_rtn_e VAR_12 = VAR_2;


 VAR_10 = FUNC_4(VAR_7->os, VAR_5, VAR_4 | VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc mbox\n");
  return VAR_1;
 }


 VAR_11 = FUNC_4(VAR_7->os, sizeof(ocs_hw_get_nvparms_cb_arg_t), VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_7->os, VAR_10, VAR_5);
  return VAR_1;
 }

 VAR_11->cb = VAR_8;
 VAR_11->arg = VAR_9;

 if (FUNC_5(&VAR_7->sli, VAR_10, VAR_5)) {
  VAR_12 = FUNC_1(VAR_7, VAR_10, VAR_0, VAR_6, VAR_11);
 }

 if (VAR_12 != VAR_2) {
  FUNC_3(VAR_7->os, "READ_NVPARMS failed\n");
  FUNC_0(VAR_7->os, VAR_10, VAR_5);
  FUNC_0(VAR_7->os, VAR_11, sizeof(ocs_hw_get_nvparms_cb_arg_t));
 }

 return VAR_12;
}
