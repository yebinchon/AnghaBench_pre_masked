
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(unsigned int VAR_0)
{
 unsigned VAR_1 = 0;

 if (VAR_0 >= 0x10000) {
  VAR_0 >>= 16;
  VAR_1 += 16;
 }
 if (VAR_0 >= 0x100) {
  VAR_0 >>= 8;
  VAR_1 += 8;
 }
 if (VAR_0 >= 0x10) {
  VAR_0 >>= 4;
  VAR_1 += 4;
 }
 if (VAR_0 >= 4) {
  VAR_0 >>= 2;
  VAR_1 += 2;
 }
 if (VAR_0 >= 2)
  VAR_1++;
 return VAR_1;
}
