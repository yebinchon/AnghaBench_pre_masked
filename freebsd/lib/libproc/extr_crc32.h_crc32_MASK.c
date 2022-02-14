
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static __inline uint32_t
FUNC_0(const void *VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = VAR_1;
 uint32_t VAR_4;

 VAR_4 = ~0U;
 while (VAR_2--)
  VAR_4 = VAR_0[(VAR_4 ^ *VAR_3++) & 0xFF] ^ (VAR_4 >> 8);
 return (VAR_4 ^ ~0U);
}
