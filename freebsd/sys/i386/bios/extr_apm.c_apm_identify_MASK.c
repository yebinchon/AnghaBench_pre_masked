
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_1, device_t VAR_2)
{
 device_t VAR_3;

 if (!VAR_0) {
  FUNC_2("Don't load this driver from userland!!\n");
  return;
 }

 if (FUNC_3("apm", 0))
  return;

 VAR_3 = FUNC_0(VAR_2, 0, "apm", 0);
 if (VAR_3 == ((void*)0))
  FUNC_1("apm_identify");
}
