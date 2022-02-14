
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const char *
FUNC_4(device_t VAR_3)
{
 uint32_t VAR_4 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 0x145c1022:
  return ("AMD KERNCZ USB 3.0 controller");
 case 0x43ba1022:
  return ("AMD X399 USB 3.0 controller");
 case 0x43b91022:
 case 0x43bb1022:
  return ("AMD 300 Series USB 3.0 controller");
 case 0x78141022:
  return ("AMD FCH USB 3.0 controller");

 case 0x01941033:
  return ("NEC uPD720200 USB 3.0 controller");
 case 0x00151912:
  return ("NEC uPD720202 USB 3.0 controller");

 case 0x10001b73:
  return ("Fresco Logic FL1000G USB 3.0 controller");
 case 0x11001b73:
  return ("Fresco Logic FL1100 USB 3.0 controller");

 case 0x10421b21:
  return ("ASMedia ASM1042 USB 3.0 controller");
 case 0x11421b21:
  return ("ASMedia ASM1042A USB 3.0 controller");

 case 0x0f358086:
  return ("Intel BayTrail USB 3.0 controller");
 case 0x19d08086:
  return ("Intel Denverton USB 3.0 controller");
 case 0x9c318086:
 case 0x1e318086:
  return ("Intel Panther Point USB 3.0 controller");
 case 0x22b58086:
  return ("Intel Braswell USB 3.0 controller");
 case 0x5aa88086:
  return ("Intel Apollo Lake USB 3.0 controller");
 case 0x8c318086:
  return ("Intel Lynx Point USB 3.0 controller");
 case 0x8cb18086:
  return ("Intel Wildcat Point USB 3.0 controller");
 case 0x8d318086:
  return ("Intel Wellsburg USB 3.0 controller");
 case 0x9cb18086:
  return ("Broadwell Integrated PCH-LP chipset USB 3.0 controller");
 case 0x9d2f8086:
  return ("Intel Sunrise Point-LP USB 3.0 controller");
 case 0xa12f8086:
  return ("Intel Sunrise Point USB 3.0 controller");
 case 0xa1af8086:
  return ("Intel Lewisburg USB 3.0 controller");
 case 0xa2af8086:
  return ("Intel Union Point USB 3.0 controller");
 case 0xa36d8086:
  return ("Intel Cannon Lake USB 3.1 controller");

 case 0xa01b177d:
  return ("Cavium ThunderX USB 3.0 controller");

 default:
  break;
 }

 if ((FUNC_0(VAR_3) == VAR_0)
     && (FUNC_3(VAR_3) == VAR_2)
     && (FUNC_2(VAR_3) == VAR_1)) {
  return ("XHCI (generic) USB 3.0 controller");
 }
 return (((void*)0));
}
