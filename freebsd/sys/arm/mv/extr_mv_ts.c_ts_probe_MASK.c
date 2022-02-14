
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 if (!FUNC_3(VAR_1))
  return (VAR_0);

 if (!FUNC_2(VAR_1, "mrvl,ts"))
  return (VAR_0);
 FUNC_4(&VAR_2, &VAR_3);
 switch (VAR_2) {
 case 128:
  break;
 default:
  FUNC_0(VAR_1, "unsupported SoC (ID: 0x%08X)!\n", VAR_2);
  return (VAR_0);
 }
 FUNC_1(VAR_1, "Marvell Thermal Sensor");

 return (0);
}
