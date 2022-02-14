
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int ,int,int,char*,char const*) ;
 int FUNC_3 (struct roff*,int,char const*,int*,int*,int) ;
 int FUNC_4 (char const*,int*,char*) ;

__attribute__((used)) static int
FUNC_5(struct roff *VAR_2, int VAR_3, const char *VAR_4,
 int *VAR_5, int *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 char VAR_10;

 if (((void*)0) == VAR_5) {
  VAR_8 = 0;
  VAR_5 = &VAR_8;
 }

 if (VAR_7 & VAR_1)
  while (FUNC_1((unsigned char)VAR_4[*VAR_5]))
   (*VAR_5)++;

 if ( ! FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7))
  return 0;

 while (1) {
  if (VAR_7 & VAR_1)
   while (FUNC_1((unsigned char)VAR_4[*VAR_5]))
    (*VAR_5)++;

  if ( ! FUNC_4(VAR_4, VAR_5, &VAR_10))
   break;

  if (VAR_7 & VAR_1)
   while (FUNC_1((unsigned char)VAR_4[*VAR_5]))
    (*VAR_5)++;

  if ( ! FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_9, VAR_7))
   return 0;

  if (VAR_7 & VAR_1)
   while (FUNC_1((unsigned char)VAR_4[*VAR_5]))
    (*VAR_5)++;

  if (((void*)0) == VAR_6)
   continue;

  switch (VAR_10) {
  case '+':
   *VAR_6 += VAR_9;
   break;
  case '-':
   *VAR_6 -= VAR_9;
   break;
  case '*':
   *VAR_6 *= VAR_9;
   break;
  case '/':
   if (VAR_9 == 0) {
    FUNC_2(VAR_0,
     VAR_3, *VAR_5, "%s", VAR_4);
    *VAR_6 = 0;
    break;
   }
   *VAR_6 /= VAR_9;
   break;
  case '%':
   if (VAR_9 == 0) {
    FUNC_2(VAR_0,
     VAR_3, *VAR_5, "%s", VAR_4);
    *VAR_6 = 0;
    break;
   }
   *VAR_6 %= VAR_9;
   break;
  case '<':
   *VAR_6 = *VAR_6 < VAR_9;
   break;
  case '>':
   *VAR_6 = *VAR_6 > VAR_9;
   break;
  case 'l':
   *VAR_6 = *VAR_6 <= VAR_9;
   break;
  case 'g':
   *VAR_6 = *VAR_6 >= VAR_9;
   break;
  case '=':
   *VAR_6 = *VAR_6 == VAR_9;
   break;
  case '!':
   *VAR_6 = *VAR_6 != VAR_9;
   break;
  case '&':
   *VAR_6 = *VAR_6 && VAR_9;
   break;
  case ':':
   *VAR_6 = *VAR_6 || VAR_9;
   break;
  case 'i':
   if (VAR_9 < *VAR_6)
    *VAR_6 = VAR_9;
   break;
  case 'a':
   if (VAR_9 > *VAR_6)
    *VAR_6 = VAR_9;
   break;
  default:
   FUNC_0();
  }
 }
 return 1;
}
