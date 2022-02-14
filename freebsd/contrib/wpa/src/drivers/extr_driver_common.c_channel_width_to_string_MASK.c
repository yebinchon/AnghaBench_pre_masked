
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum chan_width { ____Placeholder_chan_width } chan_width ;
const char * FUNC_0(enum chan_width VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "20 MHz (no HT)";
 case 132:
  return "20 MHz";
 case 130:
  return "40 MHz";
 case 129:
  return "80 MHz";
 case 128:
  return "80+80 MHz";
 case 133:
  return "160 MHz";
 default:
  return "unknown";
 }
}
