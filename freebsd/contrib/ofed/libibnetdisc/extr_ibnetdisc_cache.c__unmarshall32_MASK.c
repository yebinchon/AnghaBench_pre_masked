
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static size_t FUNC_0(uint8_t * VAR_0, uint32_t * VAR_1)
{
 (*VAR_1) = (uint32_t) VAR_0[0];
 (*VAR_1) |= ((uint32_t) VAR_0[1] << 8);
 (*VAR_1) |= ((uint32_t) VAR_0[2] << 16);
 (*VAR_1) |= ((uint32_t) VAR_0[3] << 24);

 return (sizeof(*VAR_1));
}
