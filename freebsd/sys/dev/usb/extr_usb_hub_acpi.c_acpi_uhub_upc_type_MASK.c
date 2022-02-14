
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int typelist ;



__attribute__((used)) static const char *
FUNC_0(uint8_t VAR_0)
{
 const char *VAR_1[] = {"TypeA", "MiniAB", "Express",
      "USB3-A", "USB3-B", "USB-MicroB",
      "USB3-MicroAB", "USB3-PowerB",
      "TypeC-USB2", "TypeC-Switch",
      "TypeC-nonSwitch"};
 const int VAR_2 = sizeof(VAR_1) / sizeof(VAR_1[0]);

 if (VAR_0 == 0xff) {
  return "Proprietary";
 }

 return (VAR_0 < VAR_2) ? VAR_1[VAR_0] : "Unknown";
}
