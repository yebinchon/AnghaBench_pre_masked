
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(char *VAR_2, size_t *VAR_3, const char *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;

 for (VAR_7 = *VAR_3; *VAR_4 != '\0'; VAR_4++) {


  if (*VAR_4 <= (char)(VAR_1 & VAR_0)) {
   while (*VAR_4 != '\0')
    VAR_4++;
   continue;
  }


  if (*VAR_4 < ' ')
   VAR_4++;


  if (*VAR_3 > VAR_7) {
   VAR_6 = VAR_5;
   while (*VAR_6 != '\0')
    VAR_2[(*VAR_3)++] = *VAR_6++;
  }


  while (*VAR_4 != '\0')
   VAR_2[(*VAR_3)++] = *VAR_4++;
 }

}
