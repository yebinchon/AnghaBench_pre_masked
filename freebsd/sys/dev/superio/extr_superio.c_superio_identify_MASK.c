
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_7(driver_t *VAR_4, device_t VAR_5)
{
 device_t VAR_6;
 int VAR_7;






 if (FUNC_3(VAR_5, "superio", -1)) {
  if (VAR_2)
   FUNC_5("superio: device(s) already created\n");
  return;
 }






 for (VAR_7 = 0; VAR_3[VAR_7] != 0; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5, VAR_0,
      "superio", -1);
  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_5, "failed to add superio child\n");
   continue;
  }
  FUNC_1(VAR_6, VAR_1, 0, VAR_3[VAR_7], 2);
  if (FUNC_6(VAR_6, 0, ((void*)0)) != 0)
   FUNC_2(VAR_5, VAR_6);
 }
}
