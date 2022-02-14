
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int active_link_config_id; } ;
typedef TYPE_1__ sli4_res_common_get_reconfig_link_info_t ;
struct TYPE_8__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_linkcfg_e ;
struct TYPE_10__ {TYPE_1__* virt; } ;
struct TYPE_9__ {scalar_t__ opts; TYPE_6__ dma_cmd; int arg; int (* cb ) (int ,int ,int ) ;} ;
typedef TYPE_3__ ocs_hw_linkcfg_cb_arg_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(ocs_hw_t *VAR_2, int32_t VAR_3, uint8_t *VAR_4, void *VAR_5)
{
 ocs_hw_linkcfg_cb_arg_t *VAR_6 = (ocs_hw_linkcfg_cb_arg_t *)VAR_5;
 sli4_res_common_get_reconfig_link_info_t *VAR_7 = VAR_6->dma_cmd.virt;
 ocs_hw_linkcfg_e VAR_8 = VAR_1;

 if (VAR_3) {
  FUNC_3(VAR_2->os, "GET_RECONFIG_LINK_INFO failed, status=%d\n", VAR_3);
 } else {

  VAR_8 = FUNC_2(VAR_7->active_link_config_id);
 }


 if (VAR_6->cb) {
  VAR_6->cb(VAR_3, VAR_8, VAR_6->arg);
 }


 if (VAR_6->opts != VAR_0) {
  FUNC_0(VAR_2->os, &VAR_6->dma_cmd);
  FUNC_1(VAR_2->os, VAR_6, sizeof(*VAR_6));
 }
}
