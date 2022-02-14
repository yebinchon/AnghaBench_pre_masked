
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;
typedef int dt_version_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (char) ;

int
FUNC_2(const char *VAR_3, dt_version_t *VAR_4)
{
 int VAR_5 = 0, VAR_6[3] = { 0, 0, 0 };
 char VAR_7;

 while ((VAR_7 = *VAR_3++) != '\0') {
  if (FUNC_1(VAR_7))
   VAR_6[VAR_5] = VAR_6[VAR_5] * 10 + VAR_7 - '0';
  else if (VAR_7 != '.' || VAR_5++ >= sizeof (VAR_6) / sizeof (VAR_6[0]) - 1)
   return (-1);
 }

 if (VAR_6[0] > VAR_0 ||
     VAR_6[1] > VAR_2 ||
     VAR_6[2] > VAR_1)
  return (-1);

 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_0(VAR_6[0], VAR_6[1], VAR_6[2]);

 return (0);
}
