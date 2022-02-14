
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = (VAR_2 << 1) | (VAR_0 & 1);
  VAR_0 >>= 1;
 }
 return VAR_2;
}
