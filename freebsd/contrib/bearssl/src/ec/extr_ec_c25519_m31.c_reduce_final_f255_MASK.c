
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(uint32_t *VAR_0)
{
 uint32_t VAR_1[9];
 uint32_t VAR_2;
 int VAR_3;

 FUNC_1(VAR_1, VAR_0, sizeof VAR_1);
 VAR_2 = 19;
 for (VAR_3 = 0; VAR_3 < 9; VAR_3 ++) {
  uint32_t VAR_4;

  VAR_4 = VAR_1[VAR_3] + VAR_2;
  VAR_2 = VAR_4 >> 30;
  VAR_1[VAR_3] = VAR_4 & 0x3FFFFFFF;
 }
 VAR_2 = VAR_1[8] >> 15;
 VAR_1[8] &= 0x7FFF;
 FUNC_0(VAR_2, VAR_0, VAR_1, sizeof VAR_1);
 return VAR_2;
}
