
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int*,int*,int) ;
 int* VAR_0 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(uint32_t *VAR_1)
{
 uint32_t VAR_2[20];
 uint32_t VAR_3;
 int VAR_4;

 FUNC_1(VAR_2, VAR_1, sizeof VAR_2);
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < 20; VAR_4 ++) {
  uint32_t VAR_5;

  VAR_5 = VAR_2[VAR_4] - VAR_0[VAR_4] - VAR_3;
  VAR_3 = VAR_5 >> 31;
  VAR_2[VAR_4] = VAR_5 & 0x1FFF;
 }
 VAR_3 ^= 1;
 FUNC_0(VAR_3, VAR_1, VAR_2, sizeof VAR_2);
 return VAR_3;
}
