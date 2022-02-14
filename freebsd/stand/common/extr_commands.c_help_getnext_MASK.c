
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, char **VAR_1, char **VAR_2, char **VAR_3)
{
 char VAR_4[81], *VAR_5, *VAR_6;


 *VAR_1 = *VAR_2 = *VAR_3 = ((void*)0);
 for (;;) {
  if (FUNC_0(VAR_4, 80, VAR_0) < 0)
   return (0);

  if (FUNC_4(VAR_4) < 3 || VAR_4[0] != '#' || VAR_4[1] != ' ')
   continue;

  VAR_5 = VAR_4 + 2;
  while (VAR_5 != ((void*)0) && *VAR_5 != 0) {
   VAR_6 = FUNC_2(VAR_5, ' ');
   if (*VAR_5 == 'T' && *VAR_1 == ((void*)0)) {
    if (VAR_6 != ((void*)0))
     *VAR_6++ = 0;
    *VAR_1 = FUNC_3(VAR_5 + 1);
   } else if (*VAR_5 == 'S' && *VAR_2 == ((void*)0)) {
    if (VAR_6 != ((void*)0))
     *VAR_6++ = 0;
    *VAR_2 = FUNC_3(VAR_5 + 1);
   } else if (*VAR_5 == 'D') {
    *VAR_3 = FUNC_3(VAR_5 + 1);
    VAR_6 = ((void*)0);
   }
   VAR_5 = VAR_6;
  }
  if (*VAR_1 == ((void*)0)) {
   FUNC_1(*VAR_2);
   FUNC_1(*VAR_3);
   *VAR_2 = *VAR_3 = ((void*)0);
   continue;
  }
  return (1);
 }
}
