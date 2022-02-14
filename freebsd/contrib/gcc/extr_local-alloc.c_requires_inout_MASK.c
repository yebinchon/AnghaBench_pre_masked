
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,char const*) ;
 int FUNC_1 (char,char const*) ;
 int FUNC_2 (char const) ;
 int VAR_0 ;
 int FUNC_3 (char,char const*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_1)
{
  char VAR_2;
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = 0;
  int VAR_6;

  for ( ; (VAR_2 = *VAR_1); VAR_1 += VAR_6)
    {
      VAR_6 = FUNC_0 (VAR_2, VAR_1);
      switch (VAR_2)
 {
 case '=': case '+': case '?':
 case '#': case '&': case '!':
 case '*': case '%':
 case 'm': case '<': case '>': case 'V': case 'o':
 case 'E': case 'F': case 'G': case 'H':
 case 's': case 'i': case 'n':
 case 'I': case 'J': case 'K': case 'L':
 case 'M': case 'N': case 'O': case 'P':
 case 'X':

   break;

 case ',':
   if (VAR_3 && ! VAR_4)
     VAR_5++;

   VAR_3 = VAR_4 = 0;
   break;

 case '0':
   VAR_3 = 1;
   break;

 case '1': case '2': case '3': case '4': case '5':
 case '6': case '7': case '8': case '9':

   do
     VAR_1++;
   while (FUNC_2 (*VAR_1));
   VAR_6 = 0;
   break;

 default:
   if (FUNC_3 (VAR_2, VAR_1) == VAR_0
       && !FUNC_1 (VAR_2, VAR_1))
     break;

 case 'p':
 case 'g': case 'r':
   VAR_4 = 1;
   break;
 }
    }

  if (VAR_3 && ! VAR_4)
    VAR_5++;

  return VAR_5;
}
