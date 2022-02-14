
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int termbuf ;


 char* VAR_0 ;
 scalar_t__* VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,scalar_t__*,int) ;

void
FUNC_2(char *VAR_2[])
{
 static char VAR_3[128] = "TERM=";
 char *VAR_4, *VAR_5;
 char **VAR_6;

 VAR_6 = VAR_2;
 if (VAR_1 && *VAR_1) {
  FUNC_1(VAR_3, VAR_1, sizeof(VAR_3));
  *VAR_6++ = VAR_3;
 }
 if ((VAR_4 = VAR_0)) {
  VAR_5 = VAR_4;
  while ((VAR_5 = FUNC_0(VAR_5, ','))) {
   *VAR_5++ = '\0';
   *VAR_6++ = VAR_4;
   VAR_4 = VAR_5;
  }
  if (*VAR_4)
   *VAR_6++ = VAR_4;
 }
 *VAR_6 = (char *)0;
}
