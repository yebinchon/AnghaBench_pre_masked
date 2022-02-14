
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int *) ;
 int * FUNC_2 (int ,char*) ;
 int * VAR_3 ;
 char* VAR_4 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*,int ,char**) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5, char **VAR_6)
{
 char *VAR_7, *VAR_8;
 char *VAR_9;
 char *VAR_10;

 *VAR_6 = ((void*)0);

 if ((VAR_3 == ((void*)0)) && ((VAR_3 = FUNC_2(VAR_0, "r")) == ((void*)0)))
  return (-1);

 while (1) {
  if (FUNC_1(VAR_4, VAR_1, VAR_3) == ((void*)0)) {
   if (FUNC_0(VAR_3))
    return (-1);
   return (0);
  }

  if (VAR_4[0] == '#')
   continue;


  VAR_8 = FUNC_3(VAR_4, '\0') - 1;
  while (VAR_8 >= VAR_4 && ('\n' == *VAR_8 || ' ' == *VAR_8 ||
   '\t' == *VAR_8)) {
   *VAR_8 = '\0';
   VAR_8--;
  }

  VAR_9 = VAR_4;
  if ((VAR_7 = FUNC_5(VAR_9, VAR_2, &VAR_10)) != ((void*)0)) {
   if (FUNC_4(VAR_5, VAR_7) == 0) {

    *VAR_6 = VAR_10;
    return (0);
   }
  }
 }
}
