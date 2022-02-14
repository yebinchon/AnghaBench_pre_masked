
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int*,void const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_8, const void *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_8, VAR_9);




 for (VAR_10 = 0; VAR_10 < 16; VAR_10 ++) {
  uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
  int VAR_15;

  VAR_11 = VAR_8[(VAR_10 << 1) + 0];
  VAR_12 = VAR_8[(VAR_10 << 1) + 1];
  VAR_13 = 0;
  VAR_14 = 0;
  for (VAR_15 = 0; VAR_15 < 16; VAR_15 ++) {
   VAR_13 <<= 1;
   VAR_14 <<= 1;
   VAR_13 |= ((VAR_11 >> VAR_0[VAR_15]) & (uint32_t)1) << 16;
   VAR_13 |= (VAR_12 >> VAR_2[VAR_15]) & (uint32_t)1;
   VAR_14 |= ((VAR_11 >> VAR_1[VAR_15]) & (uint32_t)1) << 16;
   VAR_14 |= (VAR_12 >> VAR_3[VAR_15]) & (uint32_t)1;
  }

  VAR_8[(VAR_10 << 1) + 0] = VAR_13;
  VAR_8[(VAR_10 << 1) + 1] = VAR_14;
 }
}
