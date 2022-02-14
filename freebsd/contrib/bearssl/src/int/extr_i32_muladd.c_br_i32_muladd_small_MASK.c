
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int*,int const*,int) ;
 int FUNC_7 (int*,int const*,int) ;
 int FUNC_8 (int const*,int) ;
 int FUNC_9 (int,int,int const) ;
 int FUNC_10 (int*,int*,size_t) ;

void
FUNC_11(uint32_t *VAR_0, uint32_t VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
 uint64_t VAR_17;





 VAR_3 = VAR_2[0];
 if (VAR_3 == 0) {
  return;
 }
 if (VAR_3 <= 32) {
  VAR_0[1] = FUNC_9(VAR_0[1], VAR_1, VAR_2[1]);
  return;
 }
 VAR_5 = (VAR_3 + 31) >> 5;
 VAR_6 = FUNC_8(VAR_0, VAR_3 - 32);
 VAR_9 = VAR_0[VAR_5];
 FUNC_10(VAR_0 + 2, VAR_0 + 1, (VAR_5 - 1) * sizeof *VAR_0);
 VAR_0[1] = VAR_1;
 VAR_7 = FUNC_8(VAR_0, VAR_3 - 32);
 VAR_8 = FUNC_8(VAR_2, VAR_3 - 32);
 VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8);
 VAR_11 = FUNC_4(FUNC_0(VAR_6, VAR_8), 0xFFFFFFFF, FUNC_4(FUNC_0(VAR_10, 0), 0, VAR_10 - 1));
 VAR_17 = 0;
 VAR_12 = 1;
 for (VAR_4 = 1; VAR_4 <= VAR_5; VAR_4 ++) {
  uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
  uint64_t VAR_22;

  VAR_18 = VAR_2[VAR_4];
  VAR_22 = FUNC_3(VAR_18, VAR_11) + VAR_17;
  VAR_17 = (uint32_t)(VAR_22 >> 32);
  VAR_19 = (uint32_t)VAR_22;
  VAR_20 = VAR_0[VAR_4];
  VAR_21 = VAR_20 - VAR_19;
  VAR_17 += (uint64_t)FUNC_1(VAR_21, VAR_20);
  VAR_0[VAR_4] = VAR_21;
  VAR_12 = FUNC_4(FUNC_0(VAR_21, VAR_18), VAR_12, FUNC_1(VAR_21, VAR_18));
 }
 VAR_13 = (uint32_t)(VAR_17 >> 32);
 VAR_14 = (uint32_t)VAR_17;
 VAR_16 = VAR_13 | FUNC_1(VAR_14, VAR_9);
 VAR_15 = ~VAR_16 & (VAR_12 | (~VAR_13 & FUNC_2(VAR_14, VAR_9)));
 FUNC_6(VAR_0, VAR_2, VAR_16);
 FUNC_7(VAR_0, VAR_2, VAR_15);
}
