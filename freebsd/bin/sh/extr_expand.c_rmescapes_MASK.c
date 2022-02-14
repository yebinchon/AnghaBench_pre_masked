
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;

void
FUNC_0(char *VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_4 = VAR_3;
 while (*VAR_4 != VAR_0 && *VAR_4 != VAR_2 && *VAR_4 != VAR_1) {
  if (*VAR_4++ == '\0')
   return;
 }
 VAR_5 = VAR_4;
 while (*VAR_4) {
  if (*VAR_4 == VAR_2 || *VAR_4 == VAR_1) {
   VAR_4++;
   continue;
  }
  if (*VAR_4 == VAR_0)
   VAR_4++;
  *VAR_5++ = *VAR_4++;
 }
 *VAR_5 = '\0';
}
