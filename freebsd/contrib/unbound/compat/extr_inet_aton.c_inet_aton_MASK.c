
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;

int
FUNC_6(const char *VAR_0, struct in_addr *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3, VAR_4;
 char VAR_5;
 unsigned int VAR_6[4];
 unsigned int *VAR_7 = VAR_6;

 VAR_5 = *VAR_0;
 for (;;) {





  if (!FUNC_2((unsigned char)VAR_5))
   return (0);
  VAR_2 = 0; VAR_3 = 10;
  if (VAR_5 == '0') {
   VAR_5 = *++VAR_0;
   if (VAR_5 == 'x' || VAR_5 == 'X')
    VAR_3 = 16, VAR_5 = *++VAR_0;
   else
    VAR_3 = 8;
  }
  for (;;) {
   if (FUNC_1((unsigned char)VAR_5) && FUNC_2((unsigned char)VAR_5)) {
    VAR_2 = (VAR_2 * VAR_3) + (VAR_5 - '0');
    VAR_5 = *++VAR_0;
   } else if (VAR_3 == 16 && FUNC_1((unsigned char)VAR_5) && FUNC_5((unsigned char)VAR_5)) {
    VAR_2 = (VAR_2 << 4) |
     (VAR_5 + 10 - (FUNC_3((unsigned char)VAR_5) ? 'a' : 'A'));
    VAR_5 = *++VAR_0;
   } else
    break;
  }
  if (VAR_5 == '.') {






   if (VAR_7 >= VAR_6 + 3)
    return (0);
   *VAR_7++ = VAR_2;
   VAR_5 = *++VAR_0;
  } else
   break;
 }



 if (VAR_5 != '\0' && (!FUNC_1((unsigned char)VAR_5) || !FUNC_4((unsigned char)VAR_5)))
  return (0);




 VAR_4 = VAR_7 - VAR_6 + 1;
 switch (VAR_4) {

 case 0:
  return (0);

 case 1:
  break;

 case 2:
  if ((VAR_2 > 0xffffff) || (VAR_6[0] > 0xff))
   return (0);
  VAR_2 |= VAR_6[0] << 24;
  break;

 case 3:
  if ((VAR_2 > 0xffff) || (VAR_6[0] > 0xff) || (VAR_6[1] > 0xff))
   return (0);
  VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16);
  break;

 case 4:
  if ((VAR_2 > 0xff) || (VAR_6[0] > 0xff) || (VAR_6[1] > 0xff) || (VAR_6[2] > 0xff))
   return (0);
  VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8);
  break;
 }
 if (VAR_1)
  VAR_1->s_addr = FUNC_0(VAR_2);
 return (1);
}
