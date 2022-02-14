
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(const char *VAR_0)
{


 unsigned VAR_1, VAR_2 = 0;
 while (*VAR_0 != '\0') {
  VAR_2 = (VAR_2 << 4) + *VAR_0++;
  if ((VAR_1 = VAR_2 & 0xF0000000) != 0) {
   VAR_2 ^= VAR_1 >> 24;
   VAR_2 &= 0x0FFFFFFF;
  }
 }
 return VAR_2;
}
