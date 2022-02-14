
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (unsigned char) ;
 long FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (unsigned char) ;

int
FUNC_3(const char *VAR_1)
{
 char *VAR_2;
 long VAR_3;

 if (!FUNC_0((unsigned char)VAR_1[0]))
  return (-1);

 VAR_3 = FUNC_1(VAR_1, &VAR_2, 10);
 if (VAR_2 != ((void*)0)) {
  if (VAR_2[0] != '\0' && VAR_2[1] != '\0')
    return (-1);
  switch (FUNC_2((unsigned char)VAR_2[0])) {
  case '\0':
  case 'b':
   break;
  case 'k':
   VAR_3 <<= 10;
   break;
  case 'm':
   VAR_3 <<= 20;
   break;
  case 'g':
   VAR_3 <<= 30;
   break;
  default:
   return (-1);
  }
 }
 if (VAR_3 < 0 || VAR_3 > VAR_0)
  return (-1);

 return (VAR_3);
}
