
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int*,char*) ;

__attribute__((used)) static int
FUNC_1(char **VAR_2, int *VAR_3, int *VAR_4, char **VAR_5)
{
 char *VAR_6 = *VAR_2;
 int VAR_7;

 *VAR_4 = -1;
 *VAR_3 = -1;
 **VAR_5 = '\0';
 for (;;) {
  VAR_7 = VAR_1 - (VAR_6 - VAR_0);
  if (VAR_7 <= 0) {
   *VAR_2 = VAR_6;
   return(1);
  }


  if (*VAR_6 != '\t' &&
      FUNC_0(VAR_6, "%x\t%80[^\n]", VAR_3, *VAR_5) == 2)
   break;

  if (*VAR_6 == '\t' &&
      FUNC_0(VAR_6, "%x\t%80[^\n]", VAR_4, *VAR_5) == 2)
   break;


  while (*VAR_6 != '\n' && VAR_7 > 0) {
   VAR_6++;
   VAR_7--;
  }
  if (*VAR_6 == '\n') {
   VAR_6++;
   VAR_7--;
  }
 }

 while (*VAR_6 != '\n' && VAR_7 > 0) {
  VAR_6++;
  VAR_7--;
 }
 if (*VAR_6 == '\n' && VAR_7 > 0)
  VAR_6++;
 *VAR_2 = VAR_6;
 return(0);
}
