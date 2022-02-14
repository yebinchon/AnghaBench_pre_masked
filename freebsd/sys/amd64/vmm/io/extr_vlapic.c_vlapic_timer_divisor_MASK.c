
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_0)
{
 switch (VAR_0 & 0xB) {
 case 135:
  return (1);
 case 132:
  return (2);
 case 130:
  return (4);
 case 128:
  return (8);
 case 133:
  return (16);
 case 131:
  return (32);
 case 129:
  return (64);
 case 134:
  return (128);
 default:
  FUNC_0("vlapic_timer_divisor: invalid dcr 0x%08x", VAR_0);
 }
}
