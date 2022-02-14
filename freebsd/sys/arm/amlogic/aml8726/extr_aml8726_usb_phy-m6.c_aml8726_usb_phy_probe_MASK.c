
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (!FUNC_2(VAR_3))
  return (VAR_1);

 if (!FUNC_1(VAR_3, "amlogic,aml8726-m6-usb-phy") &&
     !FUNC_1(VAR_3, "amlogic,aml8726-m8-usb-phy"))
  return (VAR_1);

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_0(VAR_3, "Amlogic aml8726-m8 USB PHY");
  break;
 default:
  FUNC_0(VAR_3, "Amlogic aml8726-m6 USB PHY");
  break;
 }

 return (VAR_0);
}
