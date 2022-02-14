
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (size_t) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

const char **
FUNC_3(char *VAR_1)
{
 const char **VAR_2;
 int VAR_3;
 char *VAR_4;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 if (VAR_1[0] == 'n' && VAR_1[1] == 'o') {
  VAR_1 += 2;
  VAR_0 = 1;
 }
 for (VAR_3 = 0, VAR_4 = VAR_1; *VAR_4; VAR_4++)
  if (*VAR_4 == ',')
   VAR_3++;
 if ((VAR_2 = FUNC_0((size_t)(VAR_3 + 2) * sizeof(char *))) == ((void*)0)) {
  FUNC_2("malloc failed");
  return (((void*)0));
 }
 VAR_4 = VAR_1;
 VAR_3 = 0;
 VAR_2[VAR_3++] = VAR_4;
 while ((VAR_4 = FUNC_1(VAR_4, ',')) != ((void*)0)) {
  *VAR_4++ = '\0';
  VAR_2[VAR_3++] = VAR_4;
 }
 VAR_2[VAR_3++] = ((void*)0);
 return (VAR_2);
}
