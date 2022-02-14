
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int,char*,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_0, device_t VAR_1)
{
 device_t VAR_2;

 if (FUNC_4("mmcnull", 0))
  return;

 if (FUNC_2(VAR_1) != 0)
  return;


 if (FUNC_1(VAR_1, "mmcnull", -1))
  return;

 VAR_2 = FUNC_0(VAR_1, 20, "mmcnull", 0);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_1, "add MMCNULL child failed\n");
  return;
 }
}
