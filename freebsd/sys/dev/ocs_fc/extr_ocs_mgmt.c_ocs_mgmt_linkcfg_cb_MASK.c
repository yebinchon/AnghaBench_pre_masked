
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int semaphore; scalar_t__ linkcfg; int status; } ;
typedef TYPE_1__ ocs_mgmt_linkcfg_arg_t ;
typedef scalar_t__ ocs_hw_linkcfg_e ;
typedef int int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_0, uintptr_t VAR_1, void *VAR_2)
{
 ocs_mgmt_linkcfg_arg_t *VAR_3 = (ocs_mgmt_linkcfg_arg_t *)VAR_2;
 VAR_3->status = VAR_0;
 VAR_3->linkcfg = (ocs_hw_linkcfg_e)VAR_1;
 FUNC_0(&VAR_3->semaphore);
}
