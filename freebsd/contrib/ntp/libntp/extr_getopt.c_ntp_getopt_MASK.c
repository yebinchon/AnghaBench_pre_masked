
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char) ;
 char* VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;

int
FUNC_1(
 int VAR_6,
 char *VAR_7[],
 const char *VAR_8
 )
{
 register char VAR_9;
 register const char *VAR_10;

 VAR_4 = VAR_7[0];
 VAR_1 = ((void*)0);

 if (VAR_2 == 0) {
  VAR_5 = ((void*)0);
  VAR_2++;
 }

 if (VAR_5 == ((void*)0) || *VAR_5 == '\0') {
  if (VAR_2 >= VAR_6
      || VAR_7[VAR_2][0] != '-'
      || VAR_7[VAR_2][1] == '\0') {
   return (VAR_0);
  }
  if (VAR_7[VAR_2][1] == '-'
      && VAR_7[VAR_2][2] == '\0') {
   VAR_2++;
   return (VAR_0);
  }

  VAR_5 = VAR_7[VAR_2++]+1;
 }

 VAR_9 = *VAR_5++;
 VAR_3 = VAR_9 & 0377;
 for (VAR_10 = VAR_8; VAR_10 != ((void*)0) && *VAR_10 != '\0'; ++VAR_10)
     if (*VAR_10 == VAR_9)
  break;

 if (VAR_10 == ((void*)0) || *VAR_10 == '\0' || VAR_9 == ':' || VAR_9 == '?') {
  return (FUNC_0(": unknown option -", VAR_9));
 }

 VAR_10++;
 if (*VAR_10 == ':') {
  if (*VAR_5 != '\0') {
   VAR_1 = VAR_5;
   VAR_5 = ((void*)0);
  } else if (VAR_2 >= VAR_6) {
   return (FUNC_0(": option requires argument -", VAR_9));
  } else {
   VAR_1 = VAR_7[VAR_2++];
  }
 }

 return (VAR_9 & 0377);
}
