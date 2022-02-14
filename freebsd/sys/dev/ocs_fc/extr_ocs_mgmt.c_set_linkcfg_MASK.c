
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_8__ {scalar_t__ status; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_linkcfg_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ ocs_hw_linkcfg_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,uintptr_t,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(ocs_t *VAR_3, char *VAR_4, char *VAR_5)
{
 ocs_hw_linkcfg_e VAR_6;
 ocs_mgmt_linkcfg_arg_t VAR_7;
 ocs_hw_rtn_e VAR_8;

 FUNC_4(&VAR_7.semaphore, 0, "mgmt_linkcfg");


 VAR_6 = FUNC_0(VAR_5);


 VAR_8 = FUNC_1(&VAR_3->hw, VAR_0,
          (uintptr_t)VAR_6, VAR_2, &VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_3, "ocs_hw_set_linkcfg failed\n");
  return -1;
 }

 if (FUNC_5(&VAR_7.semaphore, VAR_1)) {
  FUNC_2(VAR_3, "ocs_sem_p failed\n");
  return -1;
 }

 if (VAR_7.status) {
  FUNC_3(VAR_3, "failed to set linkcfg from HW status=%d\n",
        VAR_7.status);
  return -1;
 }

 return 0;
}
