
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
 case 0x523910b9:
  return "ALi M5239 USB 2.0 controller";

 case 0x10227463:
  return "AMD 8111 USB 2.0 controller";

 case 0x20951022:
  return ("AMD CS5536 (Geode) USB 2.0 controller");
 case 0x78081022:
  return ("AMD FCH USB 2.0 controller");

 case 0x43451002:
  return "ATI SB200 USB 2.0 controller";
 case 0x43731002:
  return "ATI SB400 USB 2.0 controller";
 case 0x43961002:
  return ("AMD SB7x0/SB8x0/SB9x0 USB 2.0 controller");

 case 0x0f348086:
  return ("Intel BayTrail USB 2.0 controller");
 case 0x1c268086:
  return ("Intel Cougar Point USB 2.0 controller");
 case 0x1c2d8086:
  return ("Intel Cougar Point USB 2.0 controller");
 case 0x1d268086:
  return ("Intel Patsburg USB 2.0 controller");
 case 0x1d2d8086:
  return ("Intel Patsburg USB 2.0 controller");
 case 0x1e268086:
  return ("Intel Panther Point USB 2.0 controller");
 case 0x1e2d8086:
  return ("Intel Panther Point USB 2.0 controller");
 case 0x1f2c8086:
  return ("Intel Avoton USB 2.0 controller");
 case 0x25ad8086:
  return "Intel 6300ESB USB 2.0 controller";
 case 0x24cd8086:
  return "Intel 82801DB/L/M (ICH4) USB 2.0 controller";
 case 0x24dd8086:
  return "Intel 82801EB/R (ICH5) USB 2.0 controller";
 case 0x265c8086:
  return "Intel 82801FB (ICH6) USB 2.0 controller";
 case 0x268c8086:
  return ("Intel 63XXESB USB 2.0 controller");
 case 0x27cc8086:
  return "Intel 82801GB/R (ICH7) USB 2.0 controller";
 case 0x28368086:
  return "Intel 82801H (ICH8) USB 2.0 controller USB2-A";
 case 0x283a8086:
  return "Intel 82801H (ICH8) USB 2.0 controller USB2-B";
 case 0x293a8086:
  return "Intel 82801I (ICH9) USB 2.0 controller";
 case 0x293c8086:
  return "Intel 82801I (ICH9) USB 2.0 controller";
 case 0x3a3a8086:
  return "Intel 82801JI (ICH10) USB 2.0 controller USB-A";
 case 0x3a3c8086:
  return "Intel 82801JI (ICH10) USB 2.0 controller USB-B";
 case 0x3b348086:
  return ("Intel PCH USB 2.0 controller USB-A");
 case 0x3b3c8086:
  return ("Intel PCH USB 2.0 controller USB-B");
 case 0x8c268086:
  return ("Intel Lynx Point USB 2.0 controller USB-A");
 case 0x8c2d8086:
  return ("Intel Lynx Point USB 2.0 controller USB-B");
 case 0x8ca68086:
  return ("Intel Wildcat Point USB 2.0 controller USB-A");
 case 0x8cad8086:
  return ("Intel Wildcat Point USB 2.0 controller USB-B");
 case 0x8d268086:
  return ("Intel Wellsburg USB 2.0 controller");
 case 0x8d2d8086:
  return ("Intel Wellsburg USB 2.0 controller");
 case 0x9c268086:
  return ("Intel Lynx Point-LP USB 2.0 controller");

 case 0x00e01033:
  return ("NEC uPD 72010x USB 2.0 controller");

 case 0x006810de:
  return "NVIDIA nForce2 USB 2.0 controller";
 case 0x008810de:
  return "NVIDIA nForce2 Ultra 400 USB 2.0 controller";
 case 0x00d810de:
  return "NVIDIA nForce3 USB 2.0 controller";
 case 0x00e810de:
  return "NVIDIA nForce3 250 USB 2.0 controller";
 case 0x005b10de:
  return "NVIDIA nForce CK804 USB 2.0 controller";
 case 0x036d10de:
  return "NVIDIA nForce MCP55 USB 2.0 controller";
 case 0x03f210de:
  return "NVIDIA nForce MCP61 USB 2.0 controller";
 case 0x0aa610de:
  return "NVIDIA nForce MCP79 USB 2.0 controller";
 case 0x0aa910de:
  return "NVIDIA nForce MCP79 USB 2.0 controller";
 case 0x0aaa10de:
  return "NVIDIA nForce MCP79 USB 2.0 controller";

 case 0x15621131:
  return "Philips ISP156x USB 2.0 controller";

 case 0x70021039:
  return "SiS 968 USB 2.0 controller";

 case 0x31041106:
  return ("VIA VT6202 USB 2.0 controller");

 default:
  break;
 }

 if ((FUNC_0(VAR_3) == VAR_0)
     && (FUNC_3(VAR_3) == VAR_1)
     && (FUNC_2(VAR_3) == VAR_2)) {
  return ("EHCI (generic) USB 2.0 controller");
 }
 return (((void*)0));
}
