
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwdarg {char* arg; int ispath; } ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, struct fwdarg *VAR_1)
{
 char *VAR_2, *VAR_3 = *VAR_0;
 int VAR_4 = 0;

 if (*VAR_3 == '\0') {
  *VAR_0 = ((void*)0);
  return -1;
 }





 if (*VAR_3 == '[') {

  for (VAR_2 = VAR_3 + 1; *VAR_2 != ']' && *VAR_2 != '\0'; VAR_2++) {
   if (*VAR_2 == '/')
    VAR_4 = 1;
  }

  if (VAR_2[0] != ']' || (VAR_2[1] != ':' && VAR_2[1] != '\0'))
   return -1;

  *VAR_2++ = '\0';
  if (*VAR_2 != '\0')
   *VAR_2++ = '\0';
  VAR_1->arg = VAR_3 + 1;
  VAR_1->ispath = VAR_4;
  *VAR_0 = VAR_2;
  return 0;
 }

 for (VAR_3 = *VAR_0; *VAR_3 != '\0'; VAR_3++) {
  switch (*VAR_3) {
  case '\\':
   FUNC_0(VAR_3, VAR_3 + 1, FUNC_1(VAR_3 + 1) + 1);
   if (*VAR_3 == '\0')
    return -1;
   break;
  case '/':
   VAR_4 = 1;
   break;
  case ':':
   *VAR_3++ = '\0';
   goto done;
  }
 }
done:
 VAR_1->arg = *VAR_0;
 VAR_1->ispath = VAR_4;
 *VAR_0 = VAR_3;
 return 0;
}
