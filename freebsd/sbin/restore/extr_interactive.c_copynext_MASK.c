
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_1(char *VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4;
 char VAR_5;

 for (VAR_3 = VAR_1; *VAR_3 == ' ' || *VAR_3 == '\t'; VAR_3++)
                        ;
 VAR_4 = VAR_2;
 while (*VAR_3 != ' ' && *VAR_3 != '\t' && *VAR_3 != '\0') {



  if (*VAR_3 == '\\') {
   if (*++VAR_3 == '\0') {
    FUNC_0(VAR_0,
     "command lines cannot be continued\n");
    continue;
   }
   *VAR_4++ = *VAR_3++;
   continue;
  }



  if (*VAR_3 != '\'' && *VAR_3 != '"') {
   *VAR_4++ = *VAR_3++;
   continue;
  }



  VAR_5 = *VAR_3++;
  while (*VAR_3 != VAR_5 && *VAR_3 != '\0')
   *VAR_4++ = *VAR_3++;
  if (*VAR_3++ == '\0') {
   FUNC_0(VAR_0, "missing %c\n", VAR_5);
   VAR_3--;
   continue;
  }
 }
 *VAR_4 = '\0';
 return (VAR_3);
}
