
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
 int FUNC_8 (int,int,int const) ;
 int FUNC_9 (int*,int*,size_t) ;

void
FUNC_10(uint32_t *VAR_0, uint32_t VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3;
 unsigned VAR_4;
 size_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15;
 uint32_t VAR_16;





 VAR_3 = VAR_2[0];
 if (VAR_3 == 0) {
  return;
 }
 if (VAR_3 <= 31) {
  uint32_t VAR_17;

  VAR_10 = VAR_0[1] >> 1;
  VAR_17 = (VAR_0[1] << 31) | VAR_1;
  VAR_0[1] = FUNC_8(VAR_10, VAR_17, VAR_2[1]);
  return;
 }
 VAR_6 = (VAR_3 + 31) >> 5;
 VAR_4 = (unsigned)VAR_3 & 31;
 VAR_10 = VAR_0[VAR_6];
 if (VAR_4 == 0) {
  VAR_7 = VAR_0[VAR_6];
  FUNC_9(VAR_0 + 2, VAR_0 + 1, (VAR_6 - 1) * sizeof *VAR_0);
  VAR_0[1] = VAR_1;
  VAR_8 = VAR_0[VAR_6];
  VAR_9 = VAR_2[VAR_6];
 } else {
  VAR_7 = ((VAR_0[VAR_6] << (31 - VAR_4)) | (VAR_0[VAR_6 - 1] >> VAR_4))
   & 0x7FFFFFFF;
  FUNC_9(VAR_0 + 2, VAR_0 + 1, (VAR_6 - 1) * sizeof *VAR_0);
  VAR_0[1] = VAR_1;
  VAR_8 = ((VAR_0[VAR_6] << (31 - VAR_4)) | (VAR_0[VAR_6 - 1] >> VAR_4))
   & 0x7FFFFFFF;
  VAR_9 = ((VAR_2[VAR_6] << (31 - VAR_4)) | (VAR_2[VAR_6 - 1] >> VAR_4))
   & 0x7FFFFFFF;
 }
 VAR_11 = FUNC_5(VAR_7 >> 1, VAR_8 | (VAR_7 << 31), VAR_9);
 VAR_12 = FUNC_4(FUNC_0(VAR_7, VAR_9), 0x7FFFFFFF, FUNC_4(FUNC_0(VAR_11, 0), 0, VAR_11 - 1));
 VAR_16 = 0;
 VAR_13 = 1;
 for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5 ++) {
  uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
  uint64_t VAR_22;

  VAR_18 = VAR_2[VAR_5];
  VAR_22 = FUNC_3(VAR_18, VAR_12) + VAR_16;
  VAR_16 = (uint32_t)(VAR_22 >> 31);
  VAR_19 = (uint32_t)VAR_22 & (uint32_t)0x7FFFFFFF;
  VAR_20 = VAR_0[VAR_5];
  VAR_21 = VAR_20 - VAR_19;
  VAR_16 += VAR_21 >> 31;
  VAR_21 &= 0x7FFFFFFF;
  VAR_0[VAR_5] = VAR_21;
  VAR_13 = FUNC_4(FUNC_0(VAR_21, VAR_18), VAR_13, FUNC_1(VAR_21, VAR_18));
 }
 VAR_15 = FUNC_1(VAR_16, VAR_10);
 VAR_14 = ~VAR_15 & (VAR_13 | FUNC_2(VAR_16, VAR_10));
 FUNC_6(VAR_0, VAR_2, VAR_15);
 FUNC_7(VAR_0, VAR_2, VAR_14);
}
