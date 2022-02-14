
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int*,int*,int const*,int ,int*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int*,int const) ;

__attribute__((used)) static uint32_t
FUNC_4(uint16_t *VAR_0, const uint16_t *VAR_1, uint32_t VAR_2, uint16_t *VAR_3)
{
 uint16_t *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_3;
 VAR_3 += 1 + ((VAR_1[0] + 15) >> 4);




 FUNC_3(VAR_0, VAR_1[0]);
 VAR_0[1] = 1;
 FUNC_3(VAR_4, VAR_1[0]);
 VAR_4[1] = VAR_2 & 0x7FFF;
 VAR_4[2] = (VAR_2 >> 15) & 0x7FFF;
 VAR_4[3] = VAR_2 >> 30;
 VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_1, FUNC_2(VAR_1[1]), VAR_3);
 FUNC_0(VAR_0, VAR_1, (uint32_t)(1 - (VAR_0[1] & 1)));

 return VAR_5;
}
