
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
__attribute__((used)) static const char *FUNC_0(u8 VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "Power budget exceeded";
 case 131:
  return "Long Range for non MLNX cable";
 case 135:
  return "Bus stuck(I2C or data shorted)";
 case 130:
  return "No EEPROM/retry timeout";
 case 133:
  return "Enforce part number list";
 case 128:
  return "Unknown identifier";
 case 132:
  return "High Temperature";
 case 134:
  return "Bad or shorted cable/module";
 default:
  return "Unknown error type";
 }
}
