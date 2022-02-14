
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int,int *) ;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(int VAR_3)
{
 static char *VAR_4 = ((void*)0);
 static int VAR_5 = 0;

 char *VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_1; *VAR_6 != VAR_3 && *VAR_6 != '\n'; VAR_6++)
  switch (*VAR_6) {
  default:
   break;
  case '[':
   if ((VAR_6 = FUNC_3(VAR_6 + 1)) == ((void*)0)) {
    VAR_0 = "unbalanced brackets ([])";
    return ((void*)0);
   }
   break;
  case '\\':
   if (*++VAR_6 == '\n') {
    VAR_0 = "trailing backslash (\\)";
    return ((void*)0);
   }
   break;
  }
 VAR_7 = VAR_6 - VAR_1;
 FUNC_1(VAR_4, VAR_5, VAR_7 + 1, ((void*)0));
 FUNC_2(VAR_4, VAR_1, VAR_7);
 VAR_4[VAR_7] = '\0';
 VAR_1 = VAR_6;
 return (VAR_2) ? FUNC_0(VAR_4, VAR_7) : VAR_4;
}
