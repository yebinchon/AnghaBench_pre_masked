
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 () ;
 char* VAR_1 ;
 char* FUNC_2 (int*,int) ;
 int FUNC_3 () ;
 char* VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 char* VAR_3 ;
 int FUNC_5 (char*,char*) ;
 char* VAR_4 ;

char *
FUNC_6(void)
{
 static char *VAR_5 = ((void*)0);
 static int VAR_6 = 0;

 int VAR_7;

 if (*VAR_2 != '\n') {
  FUNC_1();
  if (*VAR_2 == '\n') {
   VAR_1 = "invalid filename";
   return ((void*)0);
  } else if ((VAR_2 = FUNC_2(&VAR_7, 1)) == ((void*)0))
   return ((void*)0);
  else if (*VAR_2 == '!') {
   VAR_2++;
   if ((VAR_7 = FUNC_3()) < 0)
    return ((void*)0);
   if (VAR_7)
    FUNC_5("%s\n", VAR_4 + 1);
   return VAR_4;
  } else if (VAR_7 > VAR_0 - 1) {
   VAR_1 = "filename too long";
   return ((void*)0);
  }
 }

 else if (*VAR_3 == '\0') {
  VAR_1 = "no current filename";
  return ((void*)0);
 }

 FUNC_0(VAR_5, VAR_6, VAR_0, ((void*)0));
 for (VAR_7 = 0; *VAR_2 != '\n';)
  VAR_5[VAR_7++] = *VAR_2++;
 VAR_5[VAR_7] = '\0';
 return FUNC_4(VAR_5) ? VAR_5 : ((void*)0);
}
