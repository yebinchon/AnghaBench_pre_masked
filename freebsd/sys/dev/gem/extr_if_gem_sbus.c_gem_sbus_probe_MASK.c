
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{

 if (FUNC_3(FUNC_2(VAR_1), "network") == 0 &&
     FUNC_1(VAR_1) != ((void*)0) &&
     FUNC_3(FUNC_1(VAR_1), "SUNW,sbus-gem") == 0) {
  FUNC_0(VAR_1, "Sun GEM Gigabit Ethernet");
  return (0);
 }

 return (VAR_0);
}
