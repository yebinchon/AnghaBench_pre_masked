
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char**,char**) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int) ;
 char* VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 char FUNC_7 (unsigned char) ;
 char** VAR_1 ;

__attribute__((used)) static char **
FUNC_8(char *VAR_2, char *VAR_3)
{
 int VAR_4;
 char VAR_5, *VAR_6, **VAR_7, *VAR_8, **VAR_9, **VAR_10;

 if (VAR_3) {
  if ((int)FUNC_4(VAR_3) > 40) {
   VAR_3 = 0;
   VAR_1[0] = VAR_0;
  } else {
   VAR_1[0] = VAR_3;
   FUNC_6(VAR_3);
  }
 } else
  VAR_1[0] = VAR_0;



 for (VAR_4 = 1, VAR_6 = VAR_2; *VAR_6 && *VAR_6 != ':'; VAR_6++) {
  if (*VAR_6 == '|')
   VAR_4++;
 }



 VAR_9 = (char **)FUNC_3((VAR_4+3)*sizeof(char *));
 if (VAR_9 == 0)
  return(VAR_1);




 *VAR_9 = 0;
 VAR_7 = VAR_9+1;
 VAR_4 = 0;
 for (VAR_6 = VAR_8 = VAR_2; (VAR_5 = *VAR_6); VAR_6++) {
  if (VAR_5 == '|' || VAR_5 == ':') {
   *VAR_6++ = '\0';







   if (VAR_4 || (VAR_6 - VAR_8 > 41))
    ;
   else if (VAR_3 && (FUNC_5(VAR_3, VAR_8, VAR_6-VAR_8) == 0))
    *VAR_9 = VAR_8;
   else if (FUNC_1(VAR_8, VAR_9+1, VAR_7))
    *VAR_7++ = VAR_8;
   if (VAR_5 == ':')
    break;





   while ((VAR_5 = *VAR_6) == '|')
    VAR_6++;
   VAR_8 = VAR_6;
   VAR_4 = 0;
  }






  if ((VAR_5 == ' ') || !(!((VAR_5)&0x80)))
   VAR_4 = 1;
  else if (FUNC_2((unsigned char)VAR_5))
   *VAR_6 = FUNC_7((unsigned char)VAR_5);
 }






 if ((VAR_9[1] == VAR_2) && (FUNC_4(VAR_9[1]) == 2)) {
  --VAR_7;
  for (VAR_10 = &VAR_9[1]; VAR_10 < VAR_7; VAR_10++)
   *VAR_10 = *(VAR_10+1);
  *VAR_7++ = VAR_2;
 }






 VAR_6 = *(VAR_7-1);
 *VAR_7++ = VAR_6;
 *VAR_7 = 0;

 if (*VAR_9 == 0) {
  if (VAR_3)
   *VAR_9 = VAR_3;
  else {
   --VAR_7;
   for (VAR_10 = VAR_9; VAR_10 < VAR_7; VAR_10++)
    *VAR_10 = *(VAR_10+1);
  }
 }
 if (*VAR_9)
  return(VAR_9);
 else
  return(VAR_1);
}
