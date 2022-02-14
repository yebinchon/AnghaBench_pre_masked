
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int *) ;
 char* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_3 (char*,char*,int) ;

char *
FUNC_4(int *VAR_3, int VAR_4)
{
 static char *VAR_5 = ((void*)0);
 static int VAR_6 = 0;

 int VAR_7, VAR_8;
 char *VAR_9 = VAR_2;

 while (*VAR_9++ != '\n')
  ;
 if ((VAR_7 = VAR_9 - VAR_2) < 2 || !FUNC_2(VAR_2, VAR_2 + VAR_7 - 1)) {
  *VAR_3 = VAR_7;
  return VAR_2;
 }
 *VAR_3 = -1;
 FUNC_0(VAR_5, VAR_6, VAR_7, ((void*)0));
 FUNC_3(VAR_5, VAR_2, VAR_7);
 *(VAR_5 + --VAR_7 - 1) = '\n';
 if (VAR_4) VAR_7--;
 for (;;) {
  if ((VAR_8 = FUNC_1()) < 0)
   return ((void*)0);
  else if (VAR_8 == 0 || VAR_1[VAR_8 - 1] != '\n') {
   VAR_0 = "unexpected end-of-file";
   return ((void*)0);
  }
  FUNC_0(VAR_5, VAR_6, VAR_7 + VAR_8, ((void*)0));
  FUNC_3(VAR_5 + VAR_7, VAR_1, VAR_8);
  VAR_7 += VAR_8;
  if (VAR_8 < 2 || !FUNC_2(VAR_5, VAR_5 + VAR_7 - 1))
   break;
  *(VAR_5 + --VAR_7 - 1) = '\n';
  if (VAR_4) VAR_7--;
 }
 FUNC_0(VAR_5, VAR_6, VAR_7 + 1, ((void*)0));
 VAR_5[VAR_7] = '\0';
 *VAR_3 = VAR_7;
 return VAR_5;
}
