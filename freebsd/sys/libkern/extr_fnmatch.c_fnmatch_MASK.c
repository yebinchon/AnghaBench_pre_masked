
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (char const*,char const,int,char**) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (unsigned char) ;

int
FUNC_3(const char *VAR_6, const char *VAR_7, int VAR_8)
{
 const char *VAR_9;
 char *VAR_10;
 char VAR_11, VAR_12;

 for (VAR_9 = VAR_7;;)
  switch (VAR_11 = *VAR_6++) {
  case 131:
   if ((VAR_8 & VAR_1) && *VAR_7 == '/')
    return (0);
   return (*VAR_7 == 131 ? 0 : VAR_3);
  case '?':
   if (*VAR_7 == 131)
    return (VAR_3);
   if (*VAR_7 == '/' && (VAR_8 & VAR_4))
    return (VAR_3);
   if (*VAR_7 == '.' && (VAR_8 & VAR_5) &&
       (VAR_7 == VAR_9 ||
       ((VAR_8 & VAR_4) && *(VAR_7 - 1) == '/')))
    return (VAR_3);
   ++VAR_7;
   break;
  case '*':
   VAR_11 = *VAR_6;

   while (VAR_11 == '*')
    VAR_11 = *++VAR_6;

   if (*VAR_7 == '.' && (VAR_8 & VAR_5) &&
       (VAR_7 == VAR_9 ||
       ((VAR_8 & VAR_4) && *(VAR_7 - 1) == '/')))
    return (VAR_3);


   if (VAR_11 == 131)
    if (VAR_8 & VAR_4)
     return ((VAR_8 & VAR_1) ||
         FUNC_1(VAR_7, '/') == ((void*)0) ?
         0 : VAR_3);
    else
     return (0);
   else if (VAR_11 == '/' && VAR_8 & VAR_4) {
    if ((VAR_7 = FUNC_1(VAR_7, '/')) == ((void*)0))
     return (VAR_3);
    break;
   }


   while ((VAR_12 = *VAR_7) != 131) {
    if (!FUNC_3(VAR_6, VAR_7, VAR_8 & ~VAR_5))
     return (0);
    if (VAR_12 == '/' && VAR_8 & VAR_4)
     break;
    ++VAR_7;
   }
   return (VAR_3);
  case '[':
   if (*VAR_7 == 131)
    return (VAR_3);
   if (*VAR_7 == '/' && (VAR_8 & VAR_4))
    return (VAR_3);
   if (*VAR_7 == '.' && (VAR_8 & VAR_5) &&
       (VAR_7 == VAR_9 ||
       ((VAR_8 & VAR_4) && *(VAR_7 - 1) == '/')))
    return (VAR_3);

   switch (FUNC_0(VAR_6, *VAR_7, VAR_8, &VAR_10)) {
   case 130:
    goto norm;
   case 129:
    VAR_6 = VAR_10;
    break;
   case 128:
    return (VAR_3);
   }
   ++VAR_7;
   break;
  case '\\':
   if (!(VAR_8 & VAR_2)) {
    if ((VAR_11 = *VAR_6++) == 131) {
     VAR_11 = '\\';
     --VAR_6;
    }
   }

  default:
  norm:
   if (VAR_11 == *VAR_7)
    ;
   else if ((VAR_8 & VAR_0) &&
     (FUNC_2((unsigned char)VAR_11) ==
      FUNC_2((unsigned char)*VAR_7)))
    ;
   else
    return (VAR_3);
   VAR_7++;
   break;
  }

}
