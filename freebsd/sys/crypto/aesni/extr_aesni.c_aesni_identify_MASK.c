
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int,char*,int) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_0, device_t VAR_1)
{


 if (FUNC_1(VAR_1, "aesni", -1) == ((void*)0) &&
     FUNC_0(VAR_1, 10, "aesni", -1) == 0)
  FUNC_2("aesni: could not attach");
}
