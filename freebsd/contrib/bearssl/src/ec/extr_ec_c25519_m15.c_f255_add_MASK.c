
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < 20; VAR_3 ++) {
  VAR_5 = VAR_1[VAR_3] + VAR_2[VAR_3] + VAR_4;
  VAR_0[VAR_3] = VAR_5 & 0x1FFF;
  VAR_4 = VAR_5 >> 13;
 }
 VAR_4 = FUNC_0(VAR_5 >> 8, 19);
 VAR_0[19] &= 0xFF;
 for (VAR_3 = 0; VAR_3 < 20; VAR_3 ++) {
  VAR_5 = VAR_0[VAR_3] + VAR_4;
  VAR_0[VAR_3] = VAR_5 & 0x1FFF;
  VAR_4 = VAR_5 >> 13;
 }
}
