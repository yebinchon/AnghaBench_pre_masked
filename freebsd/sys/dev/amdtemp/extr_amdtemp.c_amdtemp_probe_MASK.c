
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 uint32_t VAR_5, VAR_6;

 if (FUNC_5("amdtemp", 0))
  return (VAR_2);
 if (!FUNC_2(FUNC_3(VAR_4), ((void*)0)))
  return (VAR_2);

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 switch (VAR_5) {
 case 0x0f:
  if ((VAR_6 == 0x04 && (VAR_3 & VAR_1) == 0) ||
      (VAR_6 == 0x05 && (VAR_3 & VAR_1) <= 1))
   return (VAR_2);
  break;
 case 0x10:
 case 0x11:
 case 0x12:
 case 0x14:
 case 0x15:
 case 0x16:
 case 0x17:
  break;
 default:
  return (VAR_2);
 }
 FUNC_4(VAR_4, "AMD CPU On-Die Thermal Sensors");

 return (VAR_0);
}
