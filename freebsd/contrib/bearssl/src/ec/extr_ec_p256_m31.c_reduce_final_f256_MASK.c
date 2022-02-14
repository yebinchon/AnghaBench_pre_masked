
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int*,int*,int) ;
 int* VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t *VAR_1)
{
 uint32_t VAR_2[9];
 uint32_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < 9; VAR_4 ++) {
  uint32_t VAR_5;

  VAR_5 = VAR_1[VAR_4] - VAR_0[VAR_4] - VAR_3;
  VAR_3 = VAR_5 >> 31;
  VAR_2[VAR_4] = VAR_5 & 0x3FFFFFFF;
 }
 VAR_3 ^= 1;
 FUNC_0(VAR_3, VAR_1, VAR_2, sizeof VAR_2);
 return VAR_3;
}
