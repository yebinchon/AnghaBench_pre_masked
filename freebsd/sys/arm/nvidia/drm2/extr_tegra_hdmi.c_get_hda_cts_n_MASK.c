
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(uint32_t VAR_0, uint32_t VAR_1,
    uint32_t *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int64_t VAR_11;
 int64_t VAR_12;
 int64_t VAR_13;
 int64_t VAR_14;
 int64_t VAR_15;
 bool VAR_16;







 VAR_5 = 128 * VAR_0 / 1500;
 VAR_6 = 128 * VAR_0 / 300;
 VAR_7 = 128 * VAR_0 / 1000;
 VAR_12 = FUNC_0(100);
 VAR_15 = FUNC_0(1) / 2;

 *VAR_3 = 0;
 *VAR_2 = 0;
 *VAR_4 = 0;

 for (VAR_8 = VAR_5; VAR_8 <= VAR_6; VAR_8++) {
  VAR_13 = FUNC_0(VAR_1);
  VAR_13 *= VAR_8;
  VAR_13 /= 128 * VAR_0;
  VAR_9 = FUNC_1(VAR_13 + VAR_15);
  VAR_11 = VAR_13 - FUNC_0(VAR_9);
  if (VAR_11 < 0)
   VAR_11 = -VAR_11;
  VAR_14 = FUNC_0(24000000);
  VAR_14 *= VAR_8;
  VAR_14 /= 128 * VAR_0;
  VAR_10 = FUNC_1(VAR_14);

  VAR_16 = FUNC_2(VAR_8 - VAR_7) < FUNC_2((int)(*VAR_3) - VAR_7);
  if (FUNC_0(VAR_10) == VAR_14 &&
      (VAR_11 < VAR_12 || (VAR_11 == VAR_12 && VAR_16))) {

   VAR_12 = VAR_11;
   *VAR_3 = (uint32_t)VAR_8;
   *VAR_2 = (uint32_t)VAR_9;
   *VAR_4 = (uint32_t)VAR_10;

   if (VAR_11 == 0 && VAR_8 == VAR_7)
    break;
  }
 }
 return (0);
}
