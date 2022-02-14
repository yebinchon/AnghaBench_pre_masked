
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,char const*) ;

char *FUNC_1(char **VAR_0, const char *VAR_1)
{
 char* VAR_2;
 char* VAR_3;
 if(VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
  return ((void*)0);
 VAR_3 = *VAR_0;
 VAR_2 = *VAR_0;
 while(*VAR_2 && !FUNC_0(*VAR_2, VAR_1))
  VAR_2++;
 if(*VAR_2) {
  *VAR_2 = 0;
  *VAR_0 = VAR_2+1;
 } else {
  *VAR_0 = ((void*)0);
 }
 return VAR_3;
}
