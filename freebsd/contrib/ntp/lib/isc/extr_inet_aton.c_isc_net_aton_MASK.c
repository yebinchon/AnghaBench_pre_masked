
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int isc_uint8_t ;


 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;

int
FUNC_6(const char *VAR_0, struct in_addr *VAR_1) {
 unsigned long VAR_2;
 int VAR_3;
 unsigned char VAR_4;
 isc_uint8_t VAR_5[4];
 isc_uint8_t *VAR_6 = VAR_5;
 int VAR_7;

 VAR_4 = *VAR_0;
 for (;;) {





  if (!FUNC_2(VAR_4 & 0xff))
   return (0);
  VAR_2 = 0; VAR_3 = 10; VAR_7 = 0;
  if (VAR_4 == '0') {
   VAR_4 = *++VAR_0;
   if (VAR_4 == 'x' || VAR_4 == 'X')
    VAR_3 = 16, VAR_4 = *++VAR_0;
   else {
    VAR_3 = 8;
    VAR_7 = 1;
   }
  }
  for (;;) {






   if (FUNC_1(VAR_4) && FUNC_2(VAR_4)) {
    if (VAR_3 == 8 && (VAR_4 == '8' || VAR_4 == '9'))
     return (0);
    VAR_2 = (VAR_2 * VAR_3) + (VAR_4 - '0');
    VAR_4 = *++VAR_0;
    VAR_7 = 1;
   } else if (VAR_3 == 16 && FUNC_1(VAR_4) && FUNC_5(VAR_4)) {
    VAR_2 = (VAR_2 << 4) |
     (VAR_4 + 10 - (FUNC_3(VAR_4) ? 'a' : 'A'));
    VAR_4 = *++VAR_0;
    VAR_7 = 1;
   } else
    break;
  }
  if (VAR_4 == '.') {






   if (VAR_6 >= VAR_5 + 3 || VAR_2 > 0xffU)
    return (0);
   *VAR_6++ = (isc_uint8_t)VAR_2;
   VAR_4 = *++VAR_0;
  } else
   break;
 }



 if (VAR_4 != '\0' && (!FUNC_1(VAR_4) || !FUNC_4(VAR_4)))
  return (0);



 if (!VAR_7)
  return (0);




 switch (VAR_6 - VAR_5 + 1) {
 case 1:
  break;

 case 2:
  if (VAR_2 > 0xffffffU)
   return (0);
  VAR_2 |= VAR_5[0] << 24;
  break;

 case 3:
  if (VAR_2 > 0xffffU)
   return (0);
  VAR_2 |= (VAR_5[0] << 24) | (VAR_5[1] << 16);
  break;

 case 4:
  if (VAR_2 > 0xffU)
   return (0);
  VAR_2 |= (VAR_5[0] << 24) | (VAR_5[1] << 16) | (VAR_5[2] << 8);
  break;
 }
 if (VAR_1 != ((void*)0))
  VAR_1->s_addr = FUNC_0(VAR_2);

 return (1);
}
