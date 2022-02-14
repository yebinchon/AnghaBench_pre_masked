
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const uint8_t *VAR_0, uint16_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;
 uint32_t VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_4 = VAR_3 = 0;
 VAR_5 = 0;
 VAR_7 = 0;
 FUNC_0(VAR_1, VAR_2 << 1);
 while (VAR_0[VAR_4] != 0 && VAR_3 < VAR_2) {
  VAR_6 = VAR_0[VAR_4++];
  if ((VAR_6 & 0xc0) != 0x80) {

   if (VAR_7 != 0) {

    VAR_1[VAR_3++] = FUNC_1(0xfffd);
   }
   if ((VAR_6 & 0xf8) == 0xf0) {
    VAR_5 = VAR_6 & 0x07;
    VAR_7 = 3;
   } else if ((VAR_6 & 0xf0) == 0xe0) {
    VAR_5 = VAR_6 & 0x0f;
    VAR_7 = 2;
   } else if ((VAR_6 & 0xe0) == 0xc0) {
    VAR_5 = VAR_6 & 0x1f;
    VAR_7 = 1;
   } else {
    VAR_5 = VAR_6 & 0x7f;
    VAR_7 = 0;
   }
  } else {

   if (VAR_7 > 0) {
    VAR_5 = (VAR_5 << 6) + (VAR_6 & 0x3f);
    VAR_7--;
   } else if (VAR_7 == 0)
    VAR_7 = ~0;
  }




  if (VAR_7 == 0) {





   if (VAR_5 >= 0x10000 && VAR_3 < VAR_2 - 1) {
    VAR_1[VAR_3++] =
        FUNC_1(0xd800 | ((VAR_5 >> 10) - 0x40));
    VAR_1[VAR_3++] =
        FUNC_1(0xdc00 | (VAR_5 & 0x3ff));
   } else
    VAR_1[VAR_3++] = (VAR_5 >= 0x10000) ? 0 :
        FUNC_1(VAR_5);
  }
 }




 if (VAR_7 != 0 && VAR_3 < VAR_2)
  VAR_1[VAR_3++] = FUNC_1(0xfffd);
}
