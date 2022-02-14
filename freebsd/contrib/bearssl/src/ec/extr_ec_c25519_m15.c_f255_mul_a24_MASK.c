
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3, VAR_4;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < 20; VAR_2 ++) {
  VAR_4 = FUNC_0(VAR_1[VAR_2], 121665) + VAR_3;
  VAR_0[VAR_2] = VAR_4 & 0x1FFF;
  VAR_3 = VAR_4 >> 13;
 }
 VAR_3 = FUNC_0(VAR_4 >> 8, 19);
 VAR_0[19] &= 0xFF;
 for (VAR_2 = 0; VAR_2 < 20; VAR_2 ++) {
  VAR_4 = VAR_0[VAR_2] + VAR_3;
  VAR_0[VAR_2] = VAR_4 & 0x1FFF;
  VAR_3 = VAR_4 >> 13;
 }
}
