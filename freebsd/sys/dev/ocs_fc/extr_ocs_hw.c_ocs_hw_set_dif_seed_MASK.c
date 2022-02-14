
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int seed; } ;
typedef TYPE_2__ sli4_req_common_set_features_dif_seed_t ;
typedef int seed_param ;
struct TYPE_7__ {int dif_seed; } ;
struct TYPE_9__ {int os; TYPE_1__ config; int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,int ,int *,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int,int ,int,int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_5)
{
 ocs_hw_rtn_e VAR_6 = VAR_2;
 uint8_t VAR_7[VAR_3];
 sli4_req_common_set_features_dif_seed_t VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.seed = VAR_5->config.dif_seed;


 if (FUNC_4(&VAR_5->sli, VAR_7, VAR_3,
     VAR_4,
     4,
     (uint32_t*)&VAR_8)) {
  VAR_6 = FUNC_0(VAR_5, VAR_7, VAR_0, ((void*)0), ((void*)0));
  if (VAR_6) {
   FUNC_2(VAR_5->os, "ocs_hw_command returns %d\n", VAR_6);
  } else {
   FUNC_1(VAR_5->os, "DIF seed set to 0x%x\n",
     VAR_5->config.dif_seed);
  }
 } else {
  FUNC_2(VAR_5->os, "sli_cmd_common_set_features failed\n");
  VAR_6 = VAR_1;
 }
 return VAR_6;
}
