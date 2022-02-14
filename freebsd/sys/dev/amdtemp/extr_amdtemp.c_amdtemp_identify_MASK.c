
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_0, device_t VAR_1)
{
 device_t VAR_2;


 if (FUNC_2(VAR_1, "amdtemp", -1) != ((void*)0))
  return;

 if (FUNC_0(VAR_1, ((void*)0))) {
  VAR_2 = FUNC_1(VAR_1, "amdtemp", -1);
  if (VAR_2 == ((void*)0))
   FUNC_3(VAR_1, "add amdtemp child failed\n");
 }
}
