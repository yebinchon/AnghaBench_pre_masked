
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 phandle_t VAR_0;
 VAR_0 = FUNC_0("/soc/aips-bus@2000000/iomuxc-gpr@20e0000");
 if (VAR_0 != -1)
  FUNC_1(VAR_0, "status", "disabled", sizeof("disabled"));
}
