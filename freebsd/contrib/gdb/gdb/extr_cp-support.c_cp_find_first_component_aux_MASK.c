
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 unsigned int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_4 (const char *VAR_1, int VAR_2)
{
  unsigned int VAR_3 = 0;






  int VAR_4 = 1;

  for (;; ++VAR_3)
    {
      switch (VAR_1[VAR_3])
 {
 case '<':




   VAR_3 += 1;
   for (VAR_3 += FUNC_4 (VAR_1 + VAR_3, 1);
        VAR_1[VAR_3] != '>';
        VAR_3 += FUNC_4 (VAR_1 + VAR_3, 1))
     {
       if (VAR_1[VAR_3] != ':')
  {
    FUNC_0 (VAR_1);
    return FUNC_2 (VAR_1);
  }
       VAR_3 += 2;
     }
   VAR_4 = 1;
   break;
 case '(':

   VAR_3 += 1;
   for (VAR_3 += FUNC_4 (VAR_1 + VAR_3, 1);
        VAR_1[VAR_3] != ')';
        VAR_3 += FUNC_4 (VAR_1 + VAR_3, 1))
     {
       if (VAR_1[VAR_3] != ':')
  {
    FUNC_0 (VAR_1);
    return FUNC_2 (VAR_1);
  }
       VAR_3 += 2;
     }
   VAR_4 = 1;
   break;
 case '>':
 case ')':
   if (VAR_2)
     return VAR_3;
   else
     {
       FUNC_0 (VAR_1);
       return FUNC_2 (VAR_1);
     }
 case '\0':
 case ':':
   return VAR_3;
 case 'o':

   if (VAR_4
       && FUNC_3 (VAR_1 + VAR_3, "operator", VAR_0) == 0)
     {
       VAR_3 += VAR_0;
       while (FUNC_1(VAR_1[VAR_3]))
  ++VAR_3;
       switch (VAR_1[VAR_3])
  {



  case '<':
    if (VAR_1[VAR_3 + 1] == '<')
      VAR_3 += 1;
    else
      VAR_3 += 0;
    break;
  case '>':
  case '-':
    if (VAR_1[VAR_3 + 1] == '>')
      VAR_3 += 1;
    else
      VAR_3 += 0;
    break;
  case '(':
    VAR_3 += 1;
    break;
  default:
    VAR_3 += 0;
    break;
  }
     }
   VAR_4 = 0;
   break;
 case ' ':
 case ',':
 case '.':
 case '&':
 case '*':





   VAR_4 = 1;
   break;
 default:
   VAR_4 = 0;
   break;
 }
    }
}
