
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int strmbs ;
typedef int mbstate_t ;
typedef int bt_strmbs ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 size_t FUNC_0 (int*,char const*,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char const*,int,int,char**,int *) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_7, const char *VAR_8, const char *VAR_9,
    int VAR_10, mbstate_t VAR_11, mbstate_t VAR_12)
{
 const char *VAR_13, *VAR_14;
 mbstate_t VAR_15, VAR_16;
 char *VAR_17;
 char VAR_18;
 wchar_t VAR_19, VAR_20;
 size_t VAR_21, VAR_22;

 VAR_13 = VAR_14 = ((void*)0);
 for (;;) {
  VAR_21 = FUNC_0(&VAR_19, VAR_7, VAR_6, &VAR_11);
  if (VAR_21 == (size_t)-1 || VAR_21 == (size_t)-2)
   return (VAR_3);
  VAR_7 += VAR_21;
  VAR_22 = FUNC_0(&VAR_20, VAR_8, VAR_6, &VAR_12);
  if (VAR_22 == (size_t)-1 || VAR_22 == (size_t)-2) {
   VAR_20 = (unsigned char)*VAR_8;
   VAR_22 = 1;
   FUNC_1(&VAR_12, 0, sizeof(VAR_12));
  }
  switch (VAR_19) {
  case 131:
   if ((VAR_10 & VAR_1) && VAR_20 == '/')
    return (0);
   if (VAR_20 == 131)
    return (0);
   goto backtrack;
  case '?':
   if (VAR_20 == 131)
    return (VAR_3);
   if (VAR_20 == '/' && (VAR_10 & VAR_4))
    goto backtrack;
   if (VAR_20 == '.' && (VAR_10 & VAR_5) &&
       (VAR_8 == VAR_9 ||
       ((VAR_10 & VAR_4) && *(VAR_8 - 1) == '/')))
    goto backtrack;
   VAR_8 += VAR_22;
   break;
  case '*':
   VAR_18 = *VAR_7;

   while (VAR_18 == '*')
    VAR_18 = *++VAR_7;

   if (VAR_20 == '.' && (VAR_10 & VAR_5) &&
       (VAR_8 == VAR_9 ||
       ((VAR_10 & VAR_4) && *(VAR_8 - 1) == '/')))
    goto backtrack;


   if (VAR_18 == 131)
    if (VAR_10 & VAR_4)
     return ((VAR_10 & VAR_1) ||
         FUNC_3(VAR_8, '/') == ((void*)0) ?
         0 : VAR_3);
    else
     return (0);
   else if (VAR_18 == '/' && VAR_10 & VAR_4) {
    if ((VAR_8 = FUNC_3(VAR_8, '/')) == ((void*)0))
     return (VAR_3);
    break;
   }







   VAR_13 = VAR_7, VAR_15 = VAR_11;
   VAR_14 = VAR_8, VAR_16 = VAR_12;
   break;
  case '[':
   if (VAR_20 == 131)
    return (VAR_3);
   if (VAR_20 == '/' && (VAR_10 & VAR_4))
    goto backtrack;
   if (VAR_20 == '.' && (VAR_10 & VAR_5) &&
       (VAR_8 == VAR_9 ||
       ((VAR_10 & VAR_4) && *(VAR_8 - 1) == '/')))
    goto backtrack;

   switch (FUNC_2(VAR_7, VAR_20, VAR_10, &VAR_17,
       &VAR_11)) {
   case 130:
    goto norm;
   case 129:
    VAR_7 = VAR_17;
    break;
   case 128:
    goto backtrack;
   }
   VAR_8 += VAR_22;
   break;
  case '\\':
   if (!(VAR_10 & VAR_2)) {
    VAR_21 = FUNC_0(&VAR_19, VAR_7, VAR_6,
        &VAR_11);
    if (VAR_21 == 0 || VAR_21 == (size_t)-1 ||
        VAR_21 == (size_t)-2)
     return (VAR_3);
    VAR_7 += VAR_21;
   }

  default:
  norm:
   VAR_8 += VAR_22;
   if (VAR_19 == VAR_20)
    ;
   else if ((VAR_10 & VAR_0) &&
     (FUNC_4(VAR_19) == FUNC_4(VAR_20)))
    ;
   else {
  backtrack:






    if (VAR_13 == ((void*)0))
     return (VAR_3);
    VAR_22 = FUNC_0(&VAR_20, VAR_14, VAR_6,
        &VAR_16);
    if (VAR_22 == (size_t)-1 ||
        VAR_22 == (size_t)-2) {
     VAR_20 = (unsigned char)*VAR_14;
     VAR_22 = 1;
     FUNC_1(&VAR_16, 0,
         sizeof(VAR_16));
    }
    if (VAR_20 == 131)
     return (VAR_3);
    if (VAR_20 == '/' && VAR_10 & VAR_4)
     return (VAR_3);
    VAR_14 += VAR_22;
    VAR_7 = VAR_13, VAR_11 = VAR_15;
    VAR_8 = VAR_14, VAR_12 = VAR_16;
   }
   break;
  }
 }

}
