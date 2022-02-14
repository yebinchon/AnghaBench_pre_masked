
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_18__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_port_control_cb_t ;
typedef int ocs_hw_linkcfg_e ;
typedef TYPE_1__ ocs_hw_linkcfg_cb_arg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,scalar_t__,int (*) (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*),TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_1__* FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int,int *,int ,scalar_t__) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_8(ocs_hw_t *VAR_7, ocs_hw_linkcfg_e VAR_8, uint32_t VAR_9, ocs_hw_port_control_cb_t VAR_10, void *VAR_11)
{
 uint8_t *VAR_12;
 ocs_hw_linkcfg_cb_arg_t *VAR_13;
 ocs_hw_rtn_e VAR_14 = VAR_3;
 uint32_t VAR_15;

 VAR_15 = FUNC_2(VAR_8);

 if (VAR_15 == 0) {
  FUNC_5(VAR_7->os, "Link config %d not supported by Skyhawk\n", VAR_8);
  return VAR_1;
 }


 VAR_12 = FUNC_6(VAR_7->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_7->os, "failed to malloc mbox\n");
  return VAR_2;
 }


 VAR_13 = FUNC_6(VAR_7->os, sizeof(ocs_hw_linkcfg_cb_arg_t), VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_7->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_7->os, VAR_12, VAR_6);
  return VAR_2;
 }

 VAR_13->cb = VAR_10;
 VAR_13->arg = VAR_11;

 if (FUNC_7(&VAR_7->sli, VAR_12, VAR_6, ((void*)0), 0, VAR_15)) {
  VAR_14 = FUNC_1(VAR_7, VAR_12, VAR_9, FUNC_3, VAR_13);
 }

 if (VAR_14 != VAR_3) {
  FUNC_4(VAR_7->os, "SET_RECONFIG_LINK_ID failed\n");
  FUNC_0(VAR_7->os, VAR_12, VAR_6);
  FUNC_0(VAR_7->os, VAR_13, sizeof(ocs_hw_linkcfg_cb_arg_t));
 } else if (VAR_9 == VAR_0) {

  FUNC_3(VAR_7, 0, VAR_12, VAR_13);
  FUNC_0(VAR_7->os, VAR_12, VAR_6);
  FUNC_0(VAR_7->os, VAR_13, sizeof(ocs_hw_linkcfg_cb_arg_t));
 } else {

  FUNC_0(VAR_7->os, VAR_12, VAR_6);
 }

 return VAR_14;
}
