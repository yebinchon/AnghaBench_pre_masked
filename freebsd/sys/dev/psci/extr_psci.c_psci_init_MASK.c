
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int psci_callfn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 psci_callfn_t VAR_3;

 if (FUNC_1(&VAR_3) != VAR_0) {
  FUNC_0("No PSCI/SMCCC call function found\n");
  return;
 }

 VAR_1 = VAR_3;
}
