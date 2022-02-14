
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 u_int32_t VAR_4;

 VAR_4 = FUNC_3(VAR_3);

 switch (VAR_4) {


 case 0x30501106:
  return (VAR_0);

 default:
  break;
 }

 if (FUNC_2(VAR_3) == VAR_1 &&
     FUNC_4(VAR_3) == VAR_2) {
  FUNC_1(VAR_3, "Host to PCI bridge");
  FUNC_0(VAR_3);
  return (-10000);
 }
 return (VAR_0);
}
