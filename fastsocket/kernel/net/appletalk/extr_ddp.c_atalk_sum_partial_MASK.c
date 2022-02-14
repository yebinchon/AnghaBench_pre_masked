
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(const unsigned char *VAR_0,
           int VAR_1, unsigned long VAR_2)
{

 while (VAR_1--) {
  VAR_2 += *VAR_0;
  VAR_2 <<= 1;
  if (VAR_2 & 0x10000) {
   VAR_2++;
   VAR_2 &= 0xffff;
  }
  VAR_0++;
 }
 return VAR_2;
}
