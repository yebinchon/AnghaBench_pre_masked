
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(const char* VAR_0, size_t VAR_1,
  uint8_t* VAR_2, size_t VAR_3,
  bool VAR_4, bool VAR_5)
{
 size_t VAR_6 = 0;
 char VAR_7 = '\0';
 uint8_t VAR_8[8];
 uint8_t* VAR_9 = VAR_2;

 while (VAR_1) {

  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {

   do {
    VAR_7 = *VAR_0++;
    --VAR_1;

   } while (FUNC_0((unsigned char)VAR_7) && VAR_1 > 0);

   if (VAR_7 == '=' || VAR_7 == '\0')
    break;

   else if (VAR_4)

    if (VAR_7 >= '0' && VAR_7 <= '9')
     VAR_8[VAR_6] = (uint8_t)VAR_7 - '0';
    else if (VAR_7 >= 'a' && VAR_7 <= 'v')
     VAR_8[VAR_6] = (uint8_t)VAR_7 - 'a' + 10;
    else if (VAR_7 >= 'A' && VAR_7 <= 'V')
     VAR_8[VAR_6] = (uint8_t)VAR_7 - 'A' + 10;
    else
     return -1;

   else if (VAR_7 >= 'a' && VAR_7 <= 'z')
    VAR_8[VAR_6] = (uint8_t)VAR_7 - 'a';
   else if (VAR_7 >= 'A' && VAR_7 <= 'Z')
    VAR_8[VAR_6] = (uint8_t)VAR_7 - 'A';
   else if (VAR_7 >= '2' && VAR_7 <= '7')
    VAR_8[VAR_6] = (uint8_t)VAR_7 - '2' + 26;
   else
    return -1;
  }

  if (VAR_6 < 8)
   break;


  if (VAR_3 < 5)
   return -1;



  VAR_2[0] = VAR_8[0] << 3 | VAR_8[1] >> 2;




  VAR_2[1] = VAR_8[1] << 6 | VAR_8[2] << 1 | VAR_8[3] >> 4;



  VAR_2[2] = VAR_8[3] << 4 | VAR_8[4] >> 1;




  VAR_2[3] = VAR_8[4] << 7 | VAR_8[5] << 2 | VAR_8[6] >> 3;



  VAR_2[4] = VAR_8[6] << 5 | VAR_8[7];

  VAR_2 += 5;
  VAR_3 -= 5;
 }

 if (VAR_6 > 0 && VAR_6 < 8) {


  if (VAR_3 < (VAR_6 + 1) / 2)
   return -1;

  switch (VAR_6) {
  case 7:


   VAR_2[3] = VAR_8[4] << 7 | VAR_8[5] << 2 | VAR_8[6] >> 3;

  case 5:

   VAR_2[2] = VAR_8[3] << 4 | VAR_8[4] >> 1;

  case 4:


   VAR_2[1] = VAR_8[1] << 6 | VAR_8[2] << 1 | VAR_8[3] >> 4;

  case 2:

   VAR_2[0] = VAR_8[0] << 3 | VAR_8[1] >> 2;

   break;

  default:
   return -1;
  }
  VAR_2 += (VAR_6 + 1) / 2;

  if (VAR_5) {

   if (VAR_7 != '=')
    return -1;


   for (VAR_6 = 8 - VAR_6 - 1; VAR_6 > 0; VAR_6--) {

    do {
     if (VAR_1 == 0)
      return -1;
     VAR_7 = *VAR_0++;
     VAR_1--;

    } while (FUNC_0((unsigned char)VAR_7));

    if (VAR_7 != '=')
     return -1;
   }
  }
 }
 return VAR_2 - VAR_9;
}
