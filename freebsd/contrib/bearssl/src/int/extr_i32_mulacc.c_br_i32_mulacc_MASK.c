
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

 VAR_3 = (VAR_1[0] + 31) >> 5;
 VAR_4 = (VAR_2[0] + 31) >> 5;
 VAR_0[0] = VAR_1[0] + VAR_2[0];
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 ++) {
  uint32_t VAR_6;
  size_t VAR_7;



  uint32_t VAR_8;


  VAR_6 = VAR_2[1 + VAR_5];
  VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 ++) {
   uint64_t VAR_9;

   VAR_9 = (uint64_t)VAR_0[1 + VAR_5 + VAR_7] + FUNC_0(VAR_6, VAR_1[1 + VAR_7]) + VAR_8;
   VAR_8 = VAR_9 >> 32;
   VAR_0[1 + VAR_5 + VAR_7] = (uint32_t)VAR_9;
  }
  VAR_0[1 + VAR_5 + VAR_3] = (uint32_t)VAR_8;
 }
}
