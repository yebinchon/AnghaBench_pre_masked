
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const char*
FUNC_4(device_t VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_0
     || FUNC_3(VAR_2) != VAR_1)
  return (((void*)0));

 if (FUNC_0(VAR_2) == 0)
  return (((void*)0));

 switch (FUNC_2(VAR_2)) {

 case 0x71808086:
  return ("Intel 82443LX (440 LX) host to PCI bridge");
 case 0x71908086:
  return ("Intel 82443BX (440 BX) host to PCI bridge");
  case 0x71a08086:
   return ("Intel 82443GX host to PCI bridge");
  case 0x71a18086:
   return ("Intel 82443GX host to AGP bridge");
 case 0x11308086:
  return ("Intel 82815 (i815 GMCH) host to PCI bridge");
 case 0x25008086:
 case 0x25018086:
  return ("Intel 82820 host to AGP bridge");
 case 0x35758086:
  return ("Intel 82830 host to AGP bridge");
 case 0x1a218086:
  return ("Intel 82840 host to AGP bridge");
 case 0x1a308086:
  return ("Intel 82845 host to AGP bridge");
 case 0x25308086:
  return ("Intel 82850 host to AGP bridge");
 case 0x33408086:
  return ("Intel 82855 host to AGP bridge");
 case 0x25318086:
  return ("Intel 82860 host to AGP bridge");
 case 0x25708086:
  return ("Intel 82865 host to AGP bridge");
 case 0x255d8086:
  return ("Intel E7205 host to AGP bridge");
 case 0x25508086:
  return ("Intel E7505 host to AGP bridge");
 case 0x25788086:
  return ("Intel 82875P host to AGP bridge");
 case 0x25608086:
  return ("Intel 82845G host to AGP bridge");
 case 0x35808086:
  return ("Intel 82855GM host to AGP bridge");
 }

 return (((void*)0));
}
