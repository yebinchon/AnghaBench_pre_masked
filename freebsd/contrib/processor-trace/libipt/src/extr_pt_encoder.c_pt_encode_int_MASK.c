
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint8_t *FUNC_0(uint8_t *VAR_0, uint64_t VAR_1, int VAR_2)
{
 for (; VAR_2; --VAR_2, VAR_1 >>= 8)
  *VAR_0++ = (uint8_t) VAR_1;

 return VAR_0;
}
