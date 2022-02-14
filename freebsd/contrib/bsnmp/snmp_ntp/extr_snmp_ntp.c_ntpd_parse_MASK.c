
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(u_char **VAR_0, size_t *VAR_1, char **VAR_2, char **VAR_3)
{
 u_char *VAR_4 = *VAR_0;
 u_char *VAR_5 = VAR_4 + *VAR_1;
 char *VAR_6;
 char VAR_7;


 while (VAR_4 < VAR_5 && FUNC_0((int)*VAR_4))
  VAR_4++;

 if (VAR_4 == VAR_5)
  return (0);

 *VAR_2 = VAR_4;


 while (VAR_4 < VAR_5 && !FUNC_0((int)*VAR_4) && *VAR_4 != '=' && *VAR_4 != ',')
  VAR_4++;
 VAR_7 = *VAR_4;
 *VAR_4++ = '\0';


 while (VAR_4 < VAR_5 && FUNC_0((int)*VAR_4))
  VAR_4++;

 if (VAR_4 == VAR_5 || VAR_7 == ',') {

  *VAR_3 = ((void*)0);
  *VAR_1 -= VAR_4 - *VAR_0;
  *VAR_0 = VAR_4;
  return (1);
 }

 if (*VAR_4 == '"') {

  VAR_4++;
  *VAR_3 = VAR_4;
  while (VAR_4 < VAR_5 && *VAR_4 != '"')
   VAR_4++;
  if (VAR_4 == VAR_5)
   return (0);

  *VAR_4++ = '\0';


  while (VAR_4 < VAR_5 && FUNC_0((int)*VAR_4) && *VAR_4 == ',')
   VAR_4++;
 } else {
  *VAR_3 = VAR_4;


  while (VAR_4 < VAR_5 && *VAR_4 != ',')
   VAR_4++;


  for (VAR_6 = VAR_4; VAR_6 > *VAR_3; VAR_6--)
   if (!FUNC_0((int)VAR_6[-1]))
    break;
  *VAR_6 = '\0';

  if (VAR_4 < VAR_5)
   VAR_4++;
 }

 *VAR_1 -= VAR_4 - *VAR_0;
 *VAR_0 = VAR_4;

 return (1);
}
