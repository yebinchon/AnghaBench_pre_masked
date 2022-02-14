
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ linkcfg; int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_linkcfg_e ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_1, uintptr_t VAR_2, void *VAR_3)
{
 ocs_hw_t *VAR_4 = (ocs_hw_t *)VAR_3;
 if (VAR_1 == 0) {
  VAR_4->linkcfg = (ocs_hw_linkcfg_e)VAR_2;
 } else {
  VAR_4->linkcfg = VAR_0;
 }
 FUNC_0(VAR_4->os, "linkcfg=%d\n", VAR_4->linkcfg);
}
