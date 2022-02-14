
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int*,int const*,int) ;
 int FUNC_6 (int*,int const*,int) ;
 int FUNC_7 (int,int const,int*) ;
 int FUNC_8 (int*,int*,size_t) ;

void
FUNC_9(uint16_t *VAR_0, uint16_t VAR_1, const uint16_t *VAR_2)
{




 unsigned VAR_3, VAR_4;
 size_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;




 VAR_3 = VAR_2[0];
 if (VAR_3 == 0) {
  return;
 }
 if (VAR_3 <= 15) {
  uint32_t VAR_16;

  FUNC_7(((uint32_t)VAR_0[1] << 15) | VAR_1, VAR_2[1], &VAR_16);
  VAR_0[1] = VAR_16;
  return;
 }
 VAR_6 = (VAR_3 + 15) >> 4;
 VAR_4 = VAR_3 & 15;
 VAR_7 = VAR_0[VAR_6];
 if (VAR_4 == 0) {
  VAR_8 = VAR_0[VAR_6];
  FUNC_8(VAR_0 + 2, VAR_0 + 1, (VAR_6 - 1) * sizeof *VAR_0);
  VAR_0[1] = VAR_1;
  VAR_9 = (VAR_8 << 15) + VAR_0[VAR_6];
  VAR_10 = VAR_2[VAR_6];
 } else {
  VAR_8 = (VAR_0[VAR_6] << (15 - VAR_4)) | (VAR_0[VAR_6 - 1] >> VAR_4);
  FUNC_8(VAR_0 + 2, VAR_0 + 1, (VAR_6 - 1) * sizeof *VAR_0);
  VAR_0[1] = VAR_1;
  VAR_9 = (VAR_8 << 15) | (((VAR_0[VAR_6] << (15 - VAR_4))
   | (VAR_0[VAR_6 - 1] >> VAR_4)) & 0x7FFF);
  VAR_10 = (VAR_2[VAR_6] << (15 - VAR_4)) | (VAR_2[VAR_6 - 1] >> VAR_4);
 }
 VAR_11 = FUNC_7(VAR_9, VAR_10, ((void*)0));
 VAR_11 = FUNC_4(FUNC_0(VAR_10, VAR_8), 0x7FFF, VAR_11 - 1 + ((VAR_11 - 1) >> 31));
 VAR_12 = 0;
 VAR_13 = 1;
 for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5 ++) {
  uint32_t VAR_17, VAR_18, VAR_19, VAR_20;

  VAR_17 = VAR_2[VAR_5];
  VAR_18 = FUNC_3(VAR_17, VAR_11) + VAR_12;
  VAR_12 = VAR_18 >> 15;
  VAR_18 &= 0x7FFF;
  VAR_19 = VAR_0[VAR_5];
  VAR_20 = VAR_19 - VAR_18;
  VAR_12 += VAR_20 >> 31;
  VAR_20 &= 0x7FFF;
  VAR_0[VAR_5] = VAR_20;
  VAR_13 = FUNC_4(FUNC_0(VAR_20, VAR_17), VAR_13, FUNC_1(VAR_20, VAR_17));
 }
 VAR_14 = FUNC_1(VAR_12, VAR_7);
 VAR_15 = ~VAR_14 & (VAR_13 | FUNC_2(VAR_12, VAR_7));
 FUNC_5(VAR_0, VAR_2, VAR_14);
 FUNC_6(VAR_0, VAR_2, VAR_15);
}
