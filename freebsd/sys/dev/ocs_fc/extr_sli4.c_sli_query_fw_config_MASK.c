
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int dual_ulp_capable; int* is_ulp_fc; scalar_t__* max_qcount; } ;
struct TYPE_10__ {scalar_t__ virt; } ;
struct TYPE_13__ {int os; TYPE_3__ config; int physical_port; TYPE_1__ bmbx; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_11__ {scalar_t__ status; } ;
struct TYPE_14__ {int function_mode; int ulp0_mode; int ulp1_mode; scalar_t__ ulp1_toe_defrq_total; scalar_t__ ulp1_toe_wq_total; scalar_t__ ulp0_toe_defrq_total; scalar_t__ ulp0_toe_wq_total; int physical_port; TYPE_2__ hdr; } ;
typedef TYPE_5__ sli4_res_common_query_fw_config_t ;
typedef int int32_t ;
struct TYPE_15__ {int embed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 TYPE_9__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_5(sli4_t *VAR_8)
{





 if (FUNC_4(VAR_8, VAR_8->bmbx.virt, VAR_0)) {
  sli4_res_common_query_fw_config_t *VAR_9 =
   (sli4_res_common_query_fw_config_t *)
   (((uint8_t *)VAR_8->bmbx.virt) + FUNC_2(VAR_7, VAR_6.embed));

  if (FUNC_3(VAR_8)) {
   FUNC_0(VAR_8->os, "bootstrap mailbox write fail (QUERY_FW_CONFIG)\n");
   return -1;
  }
  if (VAR_9->hdr.status) {
   FUNC_1(VAR_8->os, "COMMON_QUERY_FW_CONFIG bad status %#x\n",
    VAR_9->hdr.status);
   return -1;
  }

  VAR_8->physical_port = VAR_9->physical_port;
  VAR_8->config.dual_ulp_capable = ((VAR_9->function_mode & VAR_1) == 0 ? 0 : 1);
  VAR_8->config.is_ulp_fc[0] = ((VAR_9->ulp0_mode &
           (VAR_2 |
            VAR_3)) == 0 ? 0 : 1);
  VAR_8->config.is_ulp_fc[1] = ((VAR_9->ulp1_mode &
           (VAR_2 |
            VAR_3)) == 0 ? 0 : 1);

  if (VAR_8->config.dual_ulp_capable) {




   if (VAR_8->config.is_ulp_fc[0] &&
       VAR_8->config.is_ulp_fc[1]) {
    VAR_8->config.max_qcount[VAR_5] = VAR_9->ulp0_toe_wq_total + VAR_9->ulp1_toe_wq_total;
    VAR_8->config.max_qcount[VAR_4] = VAR_9->ulp0_toe_defrq_total + VAR_9->ulp1_toe_defrq_total;
   } else if (VAR_8->config.is_ulp_fc[0]) {
    VAR_8->config.max_qcount[VAR_5] = VAR_9->ulp0_toe_wq_total;
    VAR_8->config.max_qcount[VAR_4] = VAR_9->ulp0_toe_defrq_total;
   } else {
    VAR_8->config.max_qcount[VAR_5] = VAR_9->ulp1_toe_wq_total;
    VAR_8->config.max_qcount[VAR_4] = VAR_9->ulp1_toe_defrq_total;
   }
  }
 } else {
  FUNC_1(VAR_8->os, "bad QUERY_FW_CONFIG write\n");
  return -1;
 }
 return 0;
}
