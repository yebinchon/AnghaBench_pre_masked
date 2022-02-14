
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const char *VAR_0)
{
 const uint8_t *VAR_1 = (const uint8_t *)VAR_0;
 uint8_t VAR_2;
 uint32_t VAR_3 = 0;
 while ((VAR_2 = *VAR_1++) != '\0')
  VAR_3 = VAR_3 * 33 + VAR_2;
 return VAR_3 + (VAR_3 >> 5);
}
