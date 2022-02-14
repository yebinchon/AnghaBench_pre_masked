
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(const uint8_t *VAR_1, size_t *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4;

 if (*VAR_2 >= VAR_3)
  return VAR_0;

 VAR_4 = VAR_1[(*VAR_2)++] & 0x1f;

 if (VAR_4 != 0x1f)
  return VAR_4;

 if (*VAR_2 >= VAR_3)
  return VAR_0;

 while (VAR_1[*VAR_2] >= 0x80) {
  VAR_4 = VAR_4 * 128 + VAR_1[(*VAR_2)++] - 0x80;
  if (*VAR_2 >= VAR_3)
   return VAR_0;
 }
 return VAR_4;
}
