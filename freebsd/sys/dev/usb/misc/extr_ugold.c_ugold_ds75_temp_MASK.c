
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int int32_t ;



__attribute__((used)) static int
FUNC_0(uint8_t VAR_0, uint8_t VAR_1)
{


 int32_t VAR_2 = (VAR_0 << 24) | ((VAR_1 & 0xF0) << 16);
 return (((int64_t)VAR_2 * (int64_t)1000000LL) >> 24);
}
