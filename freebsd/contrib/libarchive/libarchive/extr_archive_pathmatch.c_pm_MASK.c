
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*,char const*,char const,int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4;




 if (VAR_2[0] == '.' && VAR_2[1] == '/')
  VAR_2 = FUNC_2(VAR_2 + 1);
 if (VAR_1[0] == '.' && VAR_1[1] == '/')
  VAR_1 = FUNC_2(VAR_1 + 1);

 for (;;) {
  switch (*VAR_1) {
  case '\0':
   if (VAR_2[0] == '/') {
    if (VAR_3 & VAR_0)
     return (1);

    VAR_2 = FUNC_2(VAR_2);
   }
   return (*VAR_2 == '\0');
  case '?':

   if (*VAR_2 == '\0')
    return (0);
   break;
  case '*':

   while (*VAR_1 == '*')
    ++VAR_1;

   if (*VAR_1 == '\0')
    return (1);
   while (*VAR_2) {
    if (FUNC_0(VAR_1, VAR_2, VAR_3))
     return (1);
    ++VAR_2;
   }
   return (0);
  case '[':




   VAR_4 = VAR_1 + 1;
   while (*VAR_4 != '\0' && *VAR_4 != ']') {
    if (*VAR_4 == '\\' && VAR_4[1] != '\0')
     ++VAR_4;
    ++VAR_4;
   }
   if (*VAR_4 == ']') {

    if (!FUNC_1(VAR_1 + 1, VAR_4, *VAR_2, VAR_3))
     return (0);
    VAR_1 = VAR_4;
    break;
   } else

    if (*VAR_1 != *VAR_2)
     return (0);
   break;
  case '\\':

   if (VAR_1[1] == '\0') {
    if (*VAR_2 != '\\')
     return (0);
   } else {
    ++VAR_1;
    if (*VAR_1 != *VAR_2)
     return (0);
   }
   break;
  case '/':
   if (*VAR_2 != '/' && *VAR_2 != '\0')
    return (0);


   VAR_1 = FUNC_2(VAR_1);
   VAR_2 = FUNC_2(VAR_2);
   if (*VAR_1 == '\0' && (VAR_3 & VAR_0))
    return (1);
   --VAR_1;
   --VAR_2;
   break;
  case '$':


   if (VAR_1[1] == '\0' && (VAR_3 & VAR_0)){

    return (*FUNC_2(VAR_2) == '\0');
   }


  default:
   if (*VAR_1 != *VAR_2)
    return (0);
   break;
  }
  ++VAR_1;
  ++VAR_2;
 }
}
