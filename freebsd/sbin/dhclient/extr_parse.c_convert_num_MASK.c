
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_int8_t ;
typedef unsigned int u_int32_t ;
typedef int u_int16_t ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (unsigned char*,unsigned long) ;
 int FUNC_3 (unsigned char*,unsigned long) ;
 int FUNC_4 (unsigned char*,unsigned int) ;
 int FUNC_5 (unsigned char*,int ) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(unsigned char *VAR_0, char *VAR_1, unsigned VAR_2, int VAR_3)
{
 bool VAR_4 = 0;
 unsigned VAR_5, VAR_6;
 u_int32_t VAR_7 = 0;
 char *VAR_8 = VAR_1;

 if (*VAR_8 == '-') {
  VAR_4 = 1;
  VAR_8++;
 }


 if (!VAR_2) {
  if (VAR_8[0] == '0') {
   if (VAR_8[1] == 'x') {
    VAR_2 = 16;
    VAR_8 += 2;
   } else if (FUNC_0(VAR_8[1]) && FUNC_1(VAR_8[1])) {
    VAR_2 = 8;
    VAR_8 += 1;
   } else
    VAR_2 = 10;
  } else
   VAR_2 = 10;
 }

 do {
  VAR_5 = *VAR_8++;

  if (VAR_5 >= 'a')
   VAR_5 = VAR_5 - 'a' + 10;
  else if (VAR_5 >= 'A')
   VAR_5 = VAR_5 - 'A' + 10;
  else if (VAR_5 >= '0')
   VAR_5 -= '0';
  else {
   FUNC_6("Bogus number: %s.", VAR_1);
   break;
  }
  if (VAR_5 >= VAR_2) {
   FUNC_6("Bogus number: %s: digit %d not in base %d",
       VAR_1, VAR_5, VAR_2);
   break;
  }
  VAR_7 = VAR_7 * VAR_2 + VAR_5;
 } while (*VAR_8);

 if (VAR_4)
  VAR_6 = (1 << (VAR_3 - 1));
 else
  VAR_6 = (1 << (VAR_3 - 1)) + ((1 << (VAR_3 - 1)) - 1);
 if (VAR_7 > VAR_6) {
  switch (VAR_2) {
  case 8:
   FUNC_6("value %s%o exceeds max (%d) for precision.",
       VAR_4 ? "-" : "", VAR_7, VAR_6);
   break;
  case 16:
   FUNC_6("value %s%x exceeds max (%d) for precision.",
       VAR_4 ? "-" : "", VAR_7, VAR_6);
   break;
  default:
   FUNC_6("value %s%u exceeds max (%d) for precision.",
       VAR_4 ? "-" : "", VAR_7, VAR_6);
   break;
  }
 }

 if (VAR_4)
  switch (VAR_3) {
  case 8:
   *VAR_0 = -(unsigned long)VAR_7;
   break;
  case 16:
   FUNC_3(VAR_0, -(unsigned long)VAR_7);
   break;
  case 32:
   FUNC_2(VAR_0, -(unsigned long)VAR_7);
   break;
  default:
   FUNC_6("Unexpected integer size: %d", VAR_3);
   break;
  }
 else
  switch (VAR_3) {
  case 8:
   *VAR_0 = (u_int8_t)VAR_7;
   break;
  case 16:
   FUNC_5(VAR_0, (u_int16_t)VAR_7);
   break;
  case 32:
   FUNC_4(VAR_0, VAR_7);
   break;
  default:
   FUNC_6("Unexpected integer size: %d", VAR_3);
   break;
  }
}
