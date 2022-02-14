
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_0("/");

 if (FUNC_1(VAR_3, "altr,socfpga-stratix10"))
  return (VAR_1);


 return (VAR_0);
}
