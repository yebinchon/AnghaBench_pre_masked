
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_1)
{
 return ((uint32_t)VAR_0[VAR_1 >> 24] << 24)
  | ((uint32_t)VAR_0[(VAR_1 >> 16) & 0xFF] << 16)
  | ((uint32_t)VAR_0[(VAR_1 >> 8) & 0xFF] << 8)
  | (uint32_t)VAR_0[VAR_1 & 0xFF];
}
