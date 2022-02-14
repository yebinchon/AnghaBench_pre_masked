
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (void*,int*,int ) ;

int
FUNC_4(const char *VAR_1, void *VAR_2)
{
 uint32_t VAR_3;
 u_int VAR_4;
 ptrdiff_t VAR_5;
 unsigned char VAR_6;
 u_int VAR_7[4];
 u_int *VAR_8 = VAR_7;

 VAR_6 = *VAR_1;
 for (;;) {





  if (!FUNC_1(VAR_6))
   return (0);
  VAR_3 = 0;
  if (VAR_6 == '0') {
   VAR_6 = *++VAR_1;
   if (VAR_6 == 'x' || VAR_6 == 'X')
    return (0);
   else if (FUNC_1(VAR_6) && VAR_6 != '9')
    return (0);
  }
  for (;;) {
   if (FUNC_1(VAR_6)) {
    VAR_4 = VAR_6 - '0';
    if (VAR_4 >= 10)
     break;
    VAR_3 = (VAR_3 * 10) + VAR_4;
    VAR_6 = *++VAR_1;
   } else
    break;
  }
  if (VAR_6 == '.') {







   if (VAR_8 >= VAR_7 + 3)
    return (0);
   *VAR_8++ = VAR_3;
   VAR_6 = *++VAR_1;
  } else
   break;
 }



 if (VAR_6 != '\0' && !FUNC_2(VAR_6))
  return (0);





 VAR_5 = VAR_8 - VAR_7 + 1;
 if (VAR_5 != 4)
  return (0);






 if ((VAR_7[0] | VAR_7[1] | VAR_7[2] | VAR_3) > 0xff)
  return (0);



 VAR_3 |= (VAR_7[0] << 24) | (VAR_7[1] << 16) | (VAR_7[2] << 8);
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_3);
  FUNC_3(VAR_2, &VAR_3, VAR_0);
 }
 return (1);
}
