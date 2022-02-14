
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int tmm; } ;
typedef TYPE_2__ sli4_req_common_set_features_t10_pi_mem_model_t ;
struct TYPE_7__ {scalar_t__ dif_mode; } ;
struct TYPE_9__ {int os; TYPE_1__ config; int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int mode_param ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,int ,int *,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int,int ,int,int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_6)
{
 ocs_hw_rtn_e VAR_7 = VAR_3;
 uint8_t VAR_8[VAR_4];
 sli4_req_common_set_features_t10_pi_mem_model_t VAR_9;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.tmm = (VAR_6->config.dif_mode == VAR_1 ? 0 : 1);


 if (FUNC_4(&VAR_6->sli, VAR_8, VAR_4,
     VAR_5,
     sizeof(VAR_9),
     (uint32_t*)&VAR_9)) {
  VAR_7 = FUNC_0(VAR_6, VAR_8, VAR_0, ((void*)0), ((void*)0));
  if (VAR_7) {
   FUNC_1(VAR_6->os, "ocs_hw_command returns %d\n", VAR_7);
  } else {
   FUNC_2(VAR_6->os, "DIF mode set to %s\n",
    (VAR_6->config.dif_mode == VAR_1 ? "inline" : "separate"));
  }
 } else {
  FUNC_1(VAR_6->os, "sli_cmd_common_set_features failed\n");
  VAR_7 = VAR_2;
 }
 return VAR_7;
}
