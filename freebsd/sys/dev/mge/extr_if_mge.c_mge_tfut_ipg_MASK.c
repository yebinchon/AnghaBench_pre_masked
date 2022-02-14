
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 1:
  return ((VAR_0 & 0x3fff) << 4);
 case 2:
 default:
  return ((VAR_0 & 0xffff) << 4);
 }
}
