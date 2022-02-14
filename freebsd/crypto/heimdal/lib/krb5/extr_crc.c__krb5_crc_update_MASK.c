
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

uint32_t
FUNC_0 (const char *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
    while (VAR_2--)
 VAR_3 = VAR_0[(VAR_3 ^ *VAR_1++) & 0xFF] ^ (VAR_3 >> 8);
    return VAR_3 & 0xFFFFFFFF;
}
