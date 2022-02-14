
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (struct sbuf*,char const*,int) ;
 int FUNC_2 (struct sbuf*,char*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 scalar_t__ FUNC_5 (struct sbuf*) ;
 struct sbuf* FUNC_6 () ;
 int FUNC_7 (struct sbuf*,char*,char,char) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, struct sbuf **VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;





 if (*VAR_2 == '0' || *VAR_2 == '1') {
  *VAR_4 = *VAR_2 & 1;
  return (0);
 }

 *VAR_4 = 0;
 *VAR_3 = FUNC_6();
 if (*VAR_3 == ((void*)0))
  return (VAR_1);
 switch(VAR_2[0]) {




  case 'f':
   if (VAR_2[1] >= '1' && VAR_2[1] <= '9')
    VAR_5 = VAR_2[1] - '1';
   else
    VAR_5 = 0;
   FUNC_7(*VAR_3, "%c%c", 'A' + VAR_5, 'a' + VAR_5);
   break;




  case 'd':
   for(VAR_2++; *VAR_2; VAR_2++) {
    if (!FUNC_0(*VAR_2))
     continue;
    VAR_5 = *VAR_2 - '0';
    if (VAR_5 == 0)
     VAR_5 = 10;
    for (; VAR_5 > 1; VAR_5--)
     FUNC_2(*VAR_3, "Aa");
    FUNC_2(*VAR_3, "Aj");
   }
   FUNC_2(*VAR_3, "jj");
   break;







  case 's':
   for(VAR_2++; *VAR_2; VAR_2++) {
    if ((*VAR_2 >= 'a' && *VAR_2 <= 'j') ||
        (*VAR_2 >= 'A' && *VAR_2 <= 'J') ||
        *VAR_2 == 'U' || *VAR_2 <= 'u' ||
     *VAR_2 == '.')
     FUNC_1(*VAR_3, VAR_2, 1);
   }
   break;
  case 'm':
   for(VAR_2++; *VAR_2; VAR_2++) {
    if (*VAR_2 == '.')
     FUNC_2(*VAR_3, "aA");
    else if (*VAR_2 == '-')
     FUNC_2(*VAR_3, "aC");
    else if (*VAR_2 == ' ')
     FUNC_2(*VAR_3, "b");
    else if (*VAR_2 == '\n')
     FUNC_2(*VAR_3, "d");
   }
   FUNC_2(*VAR_3, "j");
   break;
  default:
   FUNC_3(*VAR_3);
   return (VAR_0);
 }
 VAR_6 = FUNC_4(*VAR_3);
 if (VAR_6 != 0 || FUNC_5(*VAR_3) == 0) {
  *VAR_3 = ((void*)0);
  return (VAR_6);
 }
 return (0);
}
