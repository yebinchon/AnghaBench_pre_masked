
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_t ;
typedef int byte ;



int
FUNC_0(
 int VAR_0,
 byte *VAR_1,
 unicode_t *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;


 VAR_3 = VAR_1[0];


 if (VAR_3 != 8 && VAR_3 != 16) {
  VAR_4 = -1;
 } else {
  VAR_5 = 0;
  VAR_6 = 1;


  while (VAR_6 < VAR_0) {
   if (VAR_3 == 16) {



    VAR_2[VAR_5] =
        VAR_1[VAR_6++] << 8;
   } else {
    VAR_2[VAR_5] = 0;
   }
   if (VAR_6 < VAR_0) {

    VAR_2[VAR_5] |=
        VAR_1[VAR_6++];
   }
   VAR_5++;
  }
  VAR_4 = VAR_5;
 }
 return(VAR_4);
}
