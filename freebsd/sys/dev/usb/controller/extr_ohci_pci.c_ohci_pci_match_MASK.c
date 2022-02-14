
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
 case 0x523710b9:
  return ("AcerLabs M5237 (Aladdin-V) USB controller");

 case 0x740c1022:
  return ("AMD-756 USB Controller");
 case 0x74141022:
  return ("AMD-766 USB Controller");
 case 0x78071022:
  return ("AMD FCH USB Controller");

 case 0x43741002:
  return "ATI SB400 USB Controller";
 case 0x43751002:
  return "ATI SB400 USB Controller";
 case 0x43971002:
  return ("AMD SB7x0/SB8x0/SB9x0 USB controller");
 case 0x43981002:
  return ("AMD SB7x0/SB8x0/SB9x0 USB controller");
 case 0x43991002:
  return ("AMD SB7x0/SB8x0/SB9x0 USB controller");

 case 0x06701095:
  return ("CMD Tech 670 (USB0670) USB controller");

 case 0x06731095:
  return ("CMD Tech 673 (USB0673) USB controller");

 case 0xc8611045:
  return ("OPTi 82C861 (FireLink) USB controller");

 case 0x00351033:
  return ("NEC uPD 9210 USB controller");

 case 0x00d710de:
  return ("nVidia nForce3 USB Controller");

 case 0x005a10de:
  return ("nVidia nForce CK804 USB Controller");
 case 0x036c10de:
  return ("nVidia nForce MCP55 USB Controller");
 case 0x03f110de:
  return ("nVidia nForce MCP61 USB Controller");
 case 0x0aa510de:
  return ("nVidia nForce MCP79 USB Controller");
 case 0x0aa710de:
  return ("nVidia nForce MCP79 USB Controller");
 case 0x0aa810de:
  return ("nVidia nForce MCP79 USB Controller");

 case 0x70011039:
  return ("SiS 5571 USB controller");

 case 0x1103108e:
  return "Sun PCIO-2 USB controller";

 case 0x0019106b:
  return ("Apple KeyLargo USB controller");
 case 0x003f106b:
  return ("Apple KeyLargo/Intrepid USB controller");

 default:
  break;
 }
 if ((FUNC_0(VAR_3) == VAR_0) &&
     (FUNC_3(VAR_3) == VAR_1) &&
     (FUNC_2(VAR_3) == VAR_2)) {
  return ("OHCI (generic) USB controller");
 }
 return (((void*)0));
}
