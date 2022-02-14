
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** FUNC_0 (int,int) ;
 int FUNC_1 (char**,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(char ***VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = 0;
 VAR_4 = VAR_2;
 do {
  VAR_5++;
  VAR_3 = FUNC_2(VAR_4, ',');
  VAR_4 = (VAR_3 == ((void*)0)) ? ((void*)0) : VAR_3 + 1;
 } while (VAR_4 != ((void*)0));

 *VAR_1 = FUNC_0(VAR_5 + 1, sizeof(char *));
 if (*VAR_1 == ((void*)0))
  return (VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_3 = FUNC_2(VAR_2, ',');
  if (VAR_3 != ((void*)0))
   *VAR_3++ = '\0';
  VAR_6 = FUNC_1(*VAR_1 + VAR_7, VAR_2);
  if (VAR_6)
   return (VAR_6);
  VAR_2 = VAR_3;
 }

 return (0);
}
