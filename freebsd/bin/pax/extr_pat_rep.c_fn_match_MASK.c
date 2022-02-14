
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, char *VAR_2, char **VAR_3)
{
 char VAR_4;
 char VAR_5;

 *VAR_3 = ((void*)0);
 for (;;) {
  switch (VAR_4 = *VAR_1++) {
  case '\0':



   if (*VAR_2 == '\0')
    return(0);




   if ((VAR_0 == 1) || (*VAR_2 != '/'))
    return(-1);





   *VAR_3 = VAR_2;
   return(0);
  case '?':
   if ((VAR_5 = *VAR_2++) == '\0')
    return (-1);
   break;
  case '*':
   VAR_4 = *VAR_1;



   while (VAR_4 == '*')
    VAR_4 = *++VAR_1;




   if (VAR_4 == '\0')
    return (0);




   while ((VAR_5 = *VAR_2) != '\0') {
    if (!FUNC_1(VAR_1, VAR_2, VAR_3))
     return (0);
    ++VAR_2;
   }
   return (-1);
  case '[':



   if (((VAR_5 = *VAR_2++) == '\0') ||
       ((VAR_1 = FUNC_0(VAR_1, VAR_5)) == ((void*)0)))
    return (-1);
   break;
  case '\\':
  default:
   if (VAR_4 != *VAR_2++)
    return (-1);
   break;
  }
 }

}
