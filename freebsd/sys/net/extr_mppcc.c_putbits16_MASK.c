
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void __inline
FUNC_0(uint8_t *VAR_0, uint32_t VAR_1, const uint32_t VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
    VAR_0 += *VAR_3;
    if (*VAR_4 >= VAR_2 - 8) {
 (*VAR_3)++;
 *VAR_4 = 8 - VAR_2 + (*VAR_4);
 VAR_1 <<= *VAR_4;
 *VAR_0 = *VAR_0 | ((VAR_1 >> 8) & 0xff);
 *(++VAR_0) = VAR_1 & 0xff;
 if (*VAR_4 == 0) {
     *VAR_4 = 8;
     (*VAR_3)++;
     *(++VAR_0) = 0;
 }
    } else {
 (*VAR_3)++; (*VAR_3)++;
 *VAR_4 = 16 - VAR_2 + (*VAR_4);
 VAR_1 <<= *VAR_4;
 *VAR_0 = *VAR_0 | ((VAR_1 >> 16) & 0xff);
 *(++VAR_0) = (VAR_1 >> 8) & 0xff;
 *(++VAR_0) = VAR_1 & 0xff;
    }
}
