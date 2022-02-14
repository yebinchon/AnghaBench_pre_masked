
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int * FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 void* FUNC_7 (int) ;
 char** FUNC_8 (char**,size_t,int) ;

void
FUNC_9(char ***VAR_0, u_int *VAR_1, const char *VAR_2,
 const char *VAR_3)
{
 char **VAR_4;
 u_int VAR_5;
 u_int VAR_6, VAR_7;

 if (FUNC_4(VAR_2, '=') != ((void*)0)) {
  FUNC_0("Invalid environment variable \"%.100s\"", VAR_2);
  return;
 }





 if (*VAR_0 == ((void*)0) && *VAR_1 == 0) {
  *VAR_0 = FUNC_7(sizeof(char *));
  *VAR_0[0] = ((void*)0);
  *VAR_1 = 1;
 }






 VAR_4 = *VAR_0;
 VAR_7 = FUNC_5(VAR_2);
 for (VAR_6 = 0; VAR_4[VAR_6]; VAR_6++)
  if (FUNC_6(VAR_4[VAR_6], VAR_2, VAR_7) == 0 && VAR_4[VAR_6][VAR_7] == '=')
   break;
 if (VAR_4[VAR_6]) {

  FUNC_2(VAR_4[VAR_6]);
 } else {

  VAR_5 = *VAR_1;
  if (VAR_6 >= VAR_5 - 1) {
   if (VAR_5 >= 1000)
    FUNC_1("child_set_env: too many env vars");
   VAR_5 += 50;
   VAR_4 = (*VAR_0) = FUNC_8(VAR_4, VAR_5, sizeof(char *));
   *VAR_1 = VAR_5;
  }

  VAR_4[VAR_6 + 1] = ((void*)0);
 }



 VAR_4[VAR_6] = FUNC_7(FUNC_5(VAR_2) + 1 + FUNC_5(VAR_3) + 1);
 FUNC_3(VAR_4[VAR_6], FUNC_5(VAR_2) + 1 + FUNC_5(VAR_3) + 1, "%s=%s", VAR_2, VAR_3);
}
