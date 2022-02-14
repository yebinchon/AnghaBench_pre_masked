
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int*,int const) ;

uint32_t
FUNC_4(uint32_t *VAR_0, const void *VAR_1, size_t VAR_2, const uint32_t *VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5;
 size_t VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_1;







 VAR_8 = (VAR_3[0] + 7) >> 3;
 VAR_5 = 0;
 for (VAR_6 = (VAR_8 > VAR_2) ? VAR_8 : VAR_2; VAR_6 > 0; VAR_6 --) {
  uint32_t VAR_9, VAR_10;

  VAR_7 = VAR_6 - 1;
  if (VAR_7 >= VAR_8) {
   VAR_9 = 0;
  } else {
   VAR_9 = (VAR_3[1 + (VAR_7 >> 2)] >> ((VAR_7 & 3) << 3)) & 0xFF;
  }
  if (VAR_7 >= VAR_2) {
   VAR_10 = 0;
  } else {
   VAR_10 = VAR_4[VAR_2 - VAR_6];
  }
  VAR_5 = FUNC_2(FUNC_1(VAR_5, 0), (uint32_t)FUNC_0(VAR_10, VAR_9), VAR_5);
 }





 VAR_5 >>= 24;
 FUNC_3(VAR_0, VAR_3[0]);
 VAR_6 = (VAR_8 > VAR_2) ? VAR_2 : VAR_8;
 while (VAR_6 > 0) {
  uint32_t VAR_11;

  VAR_11 = VAR_4[VAR_2 - VAR_6] & VAR_5;
  VAR_6 --;
  VAR_0[1 + (VAR_6 >> 2)] |= VAR_11 << ((VAR_6 & 3) << 3);
 }
 return VAR_5 >> 7;
}
