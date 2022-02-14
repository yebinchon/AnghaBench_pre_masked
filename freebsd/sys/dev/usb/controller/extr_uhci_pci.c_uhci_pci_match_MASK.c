
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
 case 0x26888086:
  return ("Intel 631XESB/632XESB/3100 USB controller USB-1");

 case 0x26898086:
  return ("Intel 631XESB/632XESB/3100 USB controller USB-2");

 case 0x268a8086:
  return ("Intel 631XESB/632XESB/3100 USB controller USB-3");

 case 0x268b8086:
  return ("Intel 631XESB/632XESB/3100 USB controller USB-4");

 case 0x70208086:
  return ("Intel 82371SB (PIIX3) USB controller");

 case 0x71128086:
  return ("Intel 82371AB/EB (PIIX4) USB controller");

 case 0x24128086:
  return ("Intel 82801AA (ICH) USB controller");

 case 0x24228086:
  return ("Intel 82801AB (ICH0) USB controller");

 case 0x24428086:
  return ("Intel 82801BA/BAM (ICH2) USB controller USB-A");

 case 0x24448086:
  return ("Intel 82801BA/BAM (ICH2) USB controller USB-B");

 case 0x24828086:
  return ("Intel 82801CA/CAM (ICH3) USB controller USB-A");

 case 0x24848086:
  return ("Intel 82801CA/CAM (ICH3) USB controller USB-B");

 case 0x24878086:
  return ("Intel 82801CA/CAM (ICH3) USB controller USB-C");

 case 0x24c28086:
  return ("Intel 82801DB (ICH4) USB controller USB-A");

 case 0x24c48086:
  return ("Intel 82801DB (ICH4) USB controller USB-B");

 case 0x24c78086:
  return ("Intel 82801DB (ICH4) USB controller USB-C");

 case 0x24d28086:
  return ("Intel 82801EB (ICH5) USB controller USB-A");

 case 0x24d48086:
  return ("Intel 82801EB (ICH5) USB controller USB-B");

 case 0x24d78086:
  return ("Intel 82801EB (ICH5) USB controller USB-C");

 case 0x24de8086:
  return ("Intel 82801EB (ICH5) USB controller USB-D");

 case 0x25a98086:
  return ("Intel 6300ESB USB controller USB-A");

 case 0x25aa8086:
  return ("Intel 6300ESB USB controller USB-B");

 case 0x26588086:
  return ("Intel 82801FB/FR/FW/FRW (ICH6) USB controller USB-A");

 case 0x26598086:
  return ("Intel 82801FB/FR/FW/FRW (ICH6) USB controller USB-B");

 case 0x265a8086:
  return ("Intel 82801FB/FR/FW/FRW (ICH6) USB controller USB-C");

 case 0x265b8086:
  return ("Intel 82801FB/FR/FW/FRW (ICH6) USB controller USB-D");

 case 0x27c88086:
  return ("Intel 82801G (ICH7) USB controller USB-A");
 case 0x27c98086:
  return ("Intel 82801G (ICH7) USB controller USB-B");
 case 0x27ca8086:
  return ("Intel 82801G (ICH7) USB controller USB-C");
 case 0x27cb8086:
  return ("Intel 82801G (ICH7) USB controller USB-D");

 case 0x28308086:
  return ("Intel 82801H (ICH8) USB controller USB-A");
 case 0x28318086:
  return ("Intel 82801H (ICH8) USB controller USB-B");
 case 0x28328086:
  return ("Intel 82801H (ICH8) USB controller USB-C");
 case 0x28348086:
  return ("Intel 82801H (ICH8) USB controller USB-D");
 case 0x28358086:
  return ("Intel 82801H (ICH8) USB controller USB-E");
 case 0x29348086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x29358086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x29368086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x29378086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x29388086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x29398086:
  return ("Intel 82801I (ICH9) USB controller");
 case 0x3a348086:
  return ("Intel 82801JI (ICH10) USB controller USB-A");
 case 0x3a358086:
  return ("Intel 82801JI (ICH10) USB controller USB-B");
 case 0x3a368086:
  return ("Intel 82801JI (ICH10) USB controller USB-C");
 case 0x3a378086:
  return ("Intel 82801JI (ICH10) USB controller USB-D");
 case 0x3a388086:
  return ("Intel 82801JI (ICH10) USB controller USB-E");
 case 0x3a398086:
  return ("Intel 82801JI (ICH10) USB controller USB-F");

 case 0x719a8086:
  return ("Intel 82443MX USB controller");

 case 0x76028086:
  return ("Intel 82372FB/82468GX USB controller");

 case 0x3300103c:
  return ("HP iLO Standard Virtual USB controller");

 case 0x30381106:
  return ("VIA 83C572 USB controller");

 default:
  break;
 }

 if ((FUNC_0(VAR_3) == VAR_0) &&
     (FUNC_3(VAR_3) == VAR_1) &&
     (FUNC_2(VAR_3) == VAR_2)) {
  return ("UHCI (generic) USB controller");
 }
 return (((void*)0));
}
