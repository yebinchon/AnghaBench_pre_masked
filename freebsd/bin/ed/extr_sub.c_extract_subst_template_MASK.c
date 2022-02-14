
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int,int *) ;
 int FUNC_1 (int ) ;
 char* VAR_0 ;
 int FUNC_2 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

char *
FUNC_3(void)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 char VAR_10;
 char VAR_11 = *VAR_2++;

 if (*VAR_2 == '%' && *(VAR_2 + 1) == VAR_11) {
  VAR_2++;
  if (!VAR_4)
   VAR_0 = "no previous substitution";
  return VAR_4;
 }
 while (*VAR_2 != VAR_11) {
  FUNC_0(VAR_4, VAR_6, VAR_9 + 2, ((void*)0));
  if ((VAR_10 = VAR_4[VAR_9++] = *VAR_2++) == '\n' && *VAR_2 == '\0') {
   VAR_9--, VAR_2--;
   break;
  } else if (VAR_10 != '\\')
   ;
  else if ((VAR_4[VAR_9++] = *VAR_2++) != '\n')
   ;
  else if (!VAR_3) {
   while ((VAR_8 = FUNC_2()) == 0 ||
       (VAR_8 > 0 && VAR_1[VAR_8 - 1] != '\n'))
    FUNC_1(VAR_7);
   if (VAR_8 < 0)
    return ((void*)0);
  }
 }
 FUNC_0(VAR_4, VAR_6, VAR_9 + 1, ((void*)0));
 VAR_4[VAR_5 = VAR_9] = '\0';
 return VAR_4;
}
