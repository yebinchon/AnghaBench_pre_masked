
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;



 int FUNC_0 (unsigned char,unsigned char) ;
 unsigned char FUNC_1 (char const**) ;
 int VAR_0 ;
 int FUNC_2 (char const*,unsigned char,char const**) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;
 const char *VAR_6, *VAR_7;
 char VAR_8;
 wchar_t VAR_9, VAR_10;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 for (;;) {
  switch (VAR_8 = *VAR_3++) {
  case '\0':
   if (*VAR_4 != '\0')
    goto backtrack;
   return 1;
  case 128:
   if (*VAR_4++ != *VAR_3++)
    goto backtrack;
   break;
  case '?':
   if (*VAR_4 == '\0')
    return 0;
   if (VAR_0) {
    VAR_9 = FUNC_1(&VAR_4);




    if (VAR_9 == 0)
     goto backtrack;
   } else
    VAR_4++;
   break;
  case '*':
   VAR_8 = *VAR_3;
   while (VAR_8 == '*')
    VAR_8 = *++VAR_3;




   if (VAR_8 == '\0')
    return 1;






   VAR_6 = VAR_3;
   VAR_7 = VAR_4;
   break;
  case '[': {
   const char *VAR_11, *VAR_12;
   int VAR_13, VAR_14;
   wchar_t VAR_15;

   VAR_11 = VAR_3, VAR_12 = VAR_4;
   VAR_13 = 0;
   if (*VAR_3 == '!' || *VAR_3 == '^') {
    VAR_13++;
    VAR_3++;
   }
   VAR_14 = 0;
   if (*VAR_4 == '\0')
    return 0;
   if (VAR_0) {
    VAR_15 = FUNC_1(&VAR_4);
    if (VAR_15 == 0)
     goto backtrack;
   } else
    VAR_15 = (unsigned char)*VAR_4++;
   VAR_8 = *VAR_3++;
   do {
    if (VAR_8 == '\0') {
     VAR_3 = VAR_11, VAR_4 = VAR_12;
     VAR_8 = '[';
     goto dft;
    }
    if (VAR_8 == '[' && *VAR_3 == ':') {
     VAR_14 |= FUNC_2(VAR_3, VAR_15, &VAR_5);
     if (VAR_5 != ((void*)0)) {
      VAR_3 = VAR_5;
      continue;
     }
    }
    if (VAR_8 == 128)
     VAR_8 = *VAR_3++;
    if (VAR_0 && VAR_8 & 0x80) {
     VAR_3--;
     VAR_9 = FUNC_1(&VAR_3);
     if (VAR_9 == 0)
      return 0;
    } else
     VAR_9 = (unsigned char)VAR_8;
    if (*VAR_3 == '-' && VAR_3[1] != ']') {
     VAR_3++;
     if (*VAR_3 == 128)
      VAR_3++;
     if (VAR_0) {
      VAR_10 = FUNC_1(&VAR_3);
      if (VAR_10 == 0)
       return 0;
     } else
      VAR_10 = (unsigned char)*VAR_3++;
     if ( FUNC_0(VAR_15, VAR_9) >= 0
         && FUNC_0(VAR_15, VAR_10) <= 0
        )
      VAR_14 = 1;
    } else {
     if (VAR_15 == VAR_9)
      VAR_14 = 1;
    }
   } while ((VAR_8 = *VAR_3++) != ']');
   if (VAR_14 == VAR_13)
    goto backtrack;
   break;
  }
dft: default:
   if (*VAR_4 == '\0')
    return 0;
   if (*VAR_4++ == VAR_8)
    break;
backtrack:





   if (VAR_6 == ((void*)0))
    return 0;
   if (*VAR_7 == '\0')
    return 0;
   VAR_7++;
   VAR_3 = VAR_6;
   VAR_4 = VAR_7;
   break;
  }
 }
}
