
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_port_control_cb_t ;
typedef int ocs_hw_linkcfg_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,void*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,void*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_4, ocs_hw_linkcfg_e VAR_5, uint32_t VAR_6, ocs_hw_port_control_cb_t VAR_7, void *VAR_8)
{
 if (!FUNC_5(&VAR_4->sli)) {
  FUNC_2(VAR_4->os, "Function not supported\n");
  return VAR_0;
 }

 if (VAR_3 == FUNC_4(&VAR_4->sli)) {
  return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else if ((VAR_1 == FUNC_4(&VAR_4->sli)) ||
     (VAR_2 == FUNC_4(&VAR_4->sli))) {
  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else {
  FUNC_3(VAR_4->os, "Function not supported for this IF_TYPE\n");
  return VAR_0;
 }
}
