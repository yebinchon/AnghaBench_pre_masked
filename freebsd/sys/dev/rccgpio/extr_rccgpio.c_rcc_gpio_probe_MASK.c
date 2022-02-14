
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 char *VAR_4;
 int VAR_5;




 if (FUNC_1(VAR_3) != 0)
  return (VAR_1);




 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != VAR_2)
  return (VAR_1);

 VAR_4 = FUNC_3("smbios.system.product");
 if (VAR_4 == ((void*)0) ||
     (FUNC_4(VAR_4, "RCC-VE") != 0 && FUNC_4(VAR_4, "RCC-DFF") != 0))
  return (VAR_1);

 FUNC_0(VAR_3, "RCC-VE/DFF GPIO controller");

 return (VAR_0);
}
