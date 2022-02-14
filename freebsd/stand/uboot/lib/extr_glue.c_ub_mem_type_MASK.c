
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(int VAR_0)
{

 switch (VAR_0 & 0x000F) {
 case 129:
  return ("FLASH");
 case 130:
  return ("DRAM");
 case 128:
  return ("SRAM");
 default:
  return ("Unknown");
 }
}
