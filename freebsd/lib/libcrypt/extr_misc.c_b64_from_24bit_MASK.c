
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 char* VAR_0 ;

void
FUNC_0(uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, int VAR_4, char **VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 VAR_6 = (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  **VAR_5 = VAR_0[VAR_6&0x3f];
  (*VAR_5)++;
  VAR_6 >>= 6;
 }
}
