
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int* VAR_0 ;
 int FUNC_0 (int) ;

uint32_t FUNC_1(uint64_t VAR_1)
{
 uint32_t VAR_2;
 uint8_t VAR_3;
 uint32_t VAR_4;


 VAR_4 = 0xffffffff;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  VAR_3 = (uint8_t)(VAR_1 >> ((5-VAR_2)*8));
  VAR_4 = VAR_4 ^ VAR_3;
  VAR_4 = VAR_0[VAR_4&0xff] ^ (VAR_4>>8);
 }

 VAR_4 = FUNC_0(VAR_4);
 return VAR_4;
}
