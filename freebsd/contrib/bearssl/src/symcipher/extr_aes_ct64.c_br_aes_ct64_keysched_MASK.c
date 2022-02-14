
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int* VAR_0 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,size_t,void const*) ;
 int FUNC_3 (int) ;

unsigned
FUNC_4(uint64_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 unsigned VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11[60];

 switch (VAR_3) {
 case 16:
  VAR_4 = 10;
  break;
 case 24:
  VAR_4 = 12;
  break;
 case 32:
  VAR_4 = 14;
  break;
 default:

  return 0;
 }
 VAR_8 = (int)(VAR_3 >> 2);
 VAR_9 = (int)((VAR_4 + 1) << 2);
 FUNC_2(VAR_11, (VAR_3 >> 2), VAR_2);
 VAR_10 = VAR_11[(VAR_3 >> 2) - 1];
 for (VAR_5 = VAR_8, VAR_6 = 0, VAR_7 = 0; VAR_5 < VAR_9; VAR_5 ++) {
  if (VAR_6 == 0) {
   VAR_10 = (VAR_10 << 24) | (VAR_10 >> 8);
   VAR_10 = FUNC_3(VAR_10) ^ VAR_0[VAR_7];
  } else if (VAR_8 > 6 && VAR_6 == 4) {
   VAR_10 = FUNC_3(VAR_10);
  }
  VAR_10 ^= VAR_11[VAR_5 - VAR_8];
  VAR_11[VAR_5] = VAR_10;
  if (++ VAR_6 == VAR_8) {
   VAR_6 = 0;
   VAR_7 ++;
  }
 }

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_9; VAR_5 += 4, VAR_6 += 2) {
  uint64_t VAR_12[8];

  FUNC_0(&VAR_12[0], &VAR_12[4], VAR_11 + VAR_5);
  VAR_12[1] = VAR_12[0];
  VAR_12[2] = VAR_12[0];
  VAR_12[3] = VAR_12[0];
  VAR_12[5] = VAR_12[4];
  VAR_12[6] = VAR_12[4];
  VAR_12[7] = VAR_12[4];
  FUNC_1(VAR_12);
  VAR_1[VAR_6 + 0] =
     (VAR_12[0] & (uint64_t)0x1111111111111111)
   | (VAR_12[1] & (uint64_t)0x2222222222222222)
   | (VAR_12[2] & (uint64_t)0x4444444444444444)
   | (VAR_12[3] & (uint64_t)0x8888888888888888);
  VAR_1[VAR_6 + 1] =
     (VAR_12[4] & (uint64_t)0x1111111111111111)
   | (VAR_12[5] & (uint64_t)0x2222222222222222)
   | (VAR_12[6] & (uint64_t)0x4444444444444444)
   | (VAR_12[7] & (uint64_t)0x8888888888888888);
 }
 return VAR_4;
}
