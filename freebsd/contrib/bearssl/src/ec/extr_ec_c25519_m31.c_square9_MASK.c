
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int const,int const) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 uint64_t VAR_2[17];
 uint64_t VAR_3;
 int VAR_4;

 VAR_2[ 0] = FUNC_0(VAR_1[0], VAR_1[0]);
 VAR_2[ 1] = ((FUNC_0(VAR_1[0], VAR_1[1])) << 1);
 VAR_2[ 2] = FUNC_0(VAR_1[1], VAR_1[1])
  + ((FUNC_0(VAR_1[0], VAR_1[2])) << 1);
 VAR_2[ 3] = ((FUNC_0(VAR_1[0], VAR_1[3])
  + FUNC_0(VAR_1[1], VAR_1[2])) << 1);
 VAR_2[ 4] = FUNC_0(VAR_1[2], VAR_1[2])
  + ((FUNC_0(VAR_1[0], VAR_1[4])
  + FUNC_0(VAR_1[1], VAR_1[3])) << 1);
 VAR_2[ 5] = ((FUNC_0(VAR_1[0], VAR_1[5])
  + FUNC_0(VAR_1[1], VAR_1[4])
  + FUNC_0(VAR_1[2], VAR_1[3])) << 1);
 VAR_2[ 6] = FUNC_0(VAR_1[3], VAR_1[3])
  + ((FUNC_0(VAR_1[0], VAR_1[6])
  + FUNC_0(VAR_1[1], VAR_1[5])
  + FUNC_0(VAR_1[2], VAR_1[4])) << 1);
 VAR_2[ 7] = ((FUNC_0(VAR_1[0], VAR_1[7])
  + FUNC_0(VAR_1[1], VAR_1[6])
  + FUNC_0(VAR_1[2], VAR_1[5])
  + FUNC_0(VAR_1[3], VAR_1[4])) << 1);
 VAR_2[ 8] = FUNC_0(VAR_1[4], VAR_1[4])
  + ((FUNC_0(VAR_1[0], VAR_1[8])
  + FUNC_0(VAR_1[1], VAR_1[7])
  + FUNC_0(VAR_1[2], VAR_1[6])
  + FUNC_0(VAR_1[3], VAR_1[5])) << 1);
 VAR_2[ 9] = ((FUNC_0(VAR_1[1], VAR_1[8])
  + FUNC_0(VAR_1[2], VAR_1[7])
  + FUNC_0(VAR_1[3], VAR_1[6])
  + FUNC_0(VAR_1[4], VAR_1[5])) << 1);
 VAR_2[10] = FUNC_0(VAR_1[5], VAR_1[5])
  + ((FUNC_0(VAR_1[2], VAR_1[8])
  + FUNC_0(VAR_1[3], VAR_1[7])
  + FUNC_0(VAR_1[4], VAR_1[6])) << 1);
 VAR_2[11] = ((FUNC_0(VAR_1[3], VAR_1[8])
  + FUNC_0(VAR_1[4], VAR_1[7])
  + FUNC_0(VAR_1[5], VAR_1[6])) << 1);
 VAR_2[12] = FUNC_0(VAR_1[6], VAR_1[6])
  + ((FUNC_0(VAR_1[4], VAR_1[8])
  + FUNC_0(VAR_1[5], VAR_1[7])) << 1);
 VAR_2[13] = ((FUNC_0(VAR_1[5], VAR_1[8])
  + FUNC_0(VAR_1[6], VAR_1[7])) << 1);
 VAR_2[14] = FUNC_0(VAR_1[7], VAR_1[7])
  + ((FUNC_0(VAR_1[6], VAR_1[8])) << 1);
 VAR_2[15] = ((FUNC_0(VAR_1[7], VAR_1[8])) << 1);
 VAR_2[16] = FUNC_0(VAR_1[8], VAR_1[8]);




 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < 17; VAR_4 ++) {
  uint64_t VAR_5;

  VAR_5 = VAR_2[VAR_4] + VAR_3;
  VAR_0[VAR_4] = (uint32_t)VAR_5 & 0x3FFFFFFF;
  VAR_3 = VAR_5 >> 30;
 }
 VAR_0[17] = (uint32_t)VAR_3;
}
