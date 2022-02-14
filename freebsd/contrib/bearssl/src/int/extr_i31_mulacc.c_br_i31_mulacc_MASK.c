
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const) ;

void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_3 = (VAR_1[0] + 31) >> 5;
 VAR_4 = (VAR_2[0] + 31) >> 5;





 VAR_6 = (VAR_1[0] & 31) + (VAR_2[0] & 31);
 VAR_7 = (VAR_1[0] >> 5) + (VAR_2[0] >> 5);
 VAR_0[0] = (VAR_7 << 5) + VAR_6 + (~(uint32_t)(VAR_6 - 31) >> 31);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 ++) {
  uint32_t VAR_8;
  size_t VAR_9;
  uint32_t VAR_10;


  VAR_8 = VAR_2[1 + VAR_5];
  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9 ++) {
   uint64_t VAR_11;

   VAR_11 = (uint64_t)VAR_0[1 + VAR_5 + VAR_9] + FUNC_0(VAR_8, VAR_1[1 + VAR_9]) + VAR_10;
   VAR_10 = VAR_11 >> 31;
   VAR_0[1 + VAR_5 + VAR_9] = (uint32_t)VAR_11 & 0x7FFFFFFF;
  }
  VAR_0[1 + VAR_5 + VAR_3] = (uint32_t)VAR_10;
 }
}
