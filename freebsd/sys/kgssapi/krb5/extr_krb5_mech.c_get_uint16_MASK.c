
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(const uint8_t **VAR_0, size_t *VAR_1)
{
 const uint8_t *VAR_2 = *VAR_0;
 uint16_t VAR_3;

 if (*VAR_1 < 2)
  return (0);

 VAR_3 = (VAR_2[0] << 8) | VAR_2[1];
 *VAR_0 = VAR_2 + 2;
 *VAR_1 = *VAR_1 - 2;

 return (VAR_3);
}
