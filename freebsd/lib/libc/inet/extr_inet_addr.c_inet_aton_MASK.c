
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
typedef int u_int8_t ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;

int
FUNC_6(const char *VAR_0, struct in_addr *VAR_1) {
 u_long VAR_2;
 int VAR_3, VAR_4;
 char VAR_5;
 u_int8_t VAR_6[4];
 u_int8_t *VAR_7 = VAR_6;
 int VAR_8;

 VAR_5 = *VAR_0;
 for (;;) {





  if (!FUNC_2((unsigned char)VAR_5))
   return (0);
  VAR_2 = 0; VAR_3 = 10; VAR_8 = 0;
  if (VAR_5 == '0') {
   VAR_5 = *++VAR_0;
   if (VAR_5 == 'x' || VAR_5 == 'X')
    VAR_3 = 16, VAR_5 = *++VAR_0;
   else {
    VAR_3 = 8;
    VAR_8 = 1 ;
   }
  }
  for (;;) {
   if (FUNC_1(VAR_5) && FUNC_2((unsigned char)VAR_5)) {
    if (VAR_3 == 8 && (VAR_5 == '8' || VAR_5 == '9'))
     return (0);
    VAR_2 = (VAR_2 * VAR_3) + (VAR_5 - '0');
    VAR_5 = *++VAR_0;
    VAR_8 = 1;
   } else if (VAR_3 == 16 && FUNC_1(VAR_5) &&
       FUNC_5((unsigned char)VAR_5)) {
    VAR_2 = (VAR_2 << 4) |
     (VAR_5 + 10 - (FUNC_3((unsigned char)VAR_5) ? 'a' : 'A'));
    VAR_5 = *++VAR_0;
    VAR_8 = 1;
   } else
    break;
  }
  if (VAR_5 == '.') {






   if (VAR_7 >= VAR_6 + 3 || VAR_2 > 0xffU)
    return (0);
   *VAR_7++ = VAR_2;
   VAR_5 = *++VAR_0;
  } else
   break;
 }



 if (VAR_5 != '\0' && (!FUNC_1(VAR_5) || !FUNC_4((unsigned char)VAR_5)))
  return (0);



 if (!VAR_8)
  return (0);




 VAR_4 = VAR_7 - VAR_6 + 1;
 switch (VAR_4) {
 case 1:
  break;

 case 2:
  if (VAR_2 > 0xffffffU)
   return (0);
  VAR_2 |= (uint32_t)VAR_6[0] << 24;
  break;

 case 3:
  if (VAR_2 > 0xffffU)
   return (0);
  VAR_2 |= ((uint32_t)VAR_6[0] << 24) | (VAR_6[1] << 16);
  break;

 case 4:
  if (VAR_2 > 0xffU)
   return (0);
  VAR_2 |= ((uint32_t)VAR_6[0] << 24) | (VAR_6[1] << 16) |
      (VAR_6[2] << 8);
  break;
 }
 if (VAR_1 != ((void*)0))
  VAR_1->s_addr = FUNC_0(VAR_2);
 return (1);
}
