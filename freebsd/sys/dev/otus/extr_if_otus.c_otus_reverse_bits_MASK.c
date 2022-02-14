
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static __inline uint8_t
FUNC_0(uint8_t VAR_0)
{
 VAR_0 = ((VAR_0 >> 1) & 0x55) | ((VAR_0 & 0x55) << 1);
 VAR_0 = ((VAR_0 >> 2) & 0x33) | ((VAR_0 & 0x33) << 2);
 VAR_0 = ((VAR_0 >> 4) & 0x0f) | ((VAR_0 & 0x0f) << 4);
 return VAR_0;
}
