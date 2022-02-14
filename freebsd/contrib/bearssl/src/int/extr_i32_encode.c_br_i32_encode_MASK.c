
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,int const) ;

void
FUNC_1(void *VAR_0, size_t VAR_1, const uint32_t *VAR_2)
{
 unsigned char *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_0;





 VAR_4 = (VAR_2[0] + 7) >> 3;
 while (VAR_1 > VAR_4) {
  *VAR_3 ++ = 0;
  VAR_1 --;
 }






 VAR_4 = (VAR_1 + 3) >> 2;
 switch (VAR_1 & 3) {
 case 3:
  *VAR_3 ++ = VAR_2[VAR_4] >> 16;

 case 2:
  *VAR_3 ++ = VAR_2[VAR_4] >> 8;

 case 1:
  *VAR_3 ++ = VAR_2[VAR_4];
  VAR_4 --;
 }




 while (VAR_4 > 0) {
  FUNC_0(VAR_3, VAR_2[VAR_4]);
  VAR_4 --;
  VAR_3 += 4;
 }
}
