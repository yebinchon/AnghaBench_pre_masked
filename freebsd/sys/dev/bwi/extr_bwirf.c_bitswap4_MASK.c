
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static __inline uint16_t
FUNC_0(uint16_t VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = (VAR_0 & 0x8) >> 3;
 VAR_1 |= (VAR_0 & 0x4) >> 1;
 VAR_1 |= (VAR_0 & 0x2) << 1;
 VAR_1 |= (VAR_0 & 0x1) << 3;
 return VAR_1;
}
