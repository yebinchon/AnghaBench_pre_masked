
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_t ;
typedef int byte ;



int
FUNC_0(
 int VAR_0,
 int VAR_1,
 unicode_t *VAR_2,
 byte *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_1 != 8 && VAR_1 != 16) {
  VAR_4 = -1;
 } else {

  VAR_3[0] = VAR_1;

  VAR_4 = 1;
  VAR_5 = 0;
  while (VAR_5 < VAR_0) {
   if (VAR_1 == 16) {



    VAR_3[VAR_4++] =
        (VAR_2[VAR_5] & 0xFF00) >> 8;
   }

   VAR_3[VAR_4++] =
       VAR_2[VAR_5] & 0x00FF;
   VAR_5++;
  }
 }
 return(VAR_4);
}
