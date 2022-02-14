
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 size_t FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, char **VAR_1, size_t VAR_2)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 if (VAR_2 > 0) {
  u_int VAR_3, VAR_4 = FUNC_0(VAR_1[0]);


  for (VAR_3 = 1; VAR_1[VAR_3]; VAR_3++) {
   u_int VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    if (VAR_1[0][VAR_5] != VAR_1[VAR_3][VAR_5])
     break;

   VAR_4 = VAR_5;
  }

  if (VAR_4 > FUNC_0(VAR_0)) {
   char *VAR_6 = FUNC_1(VAR_1[0]);

   VAR_6[VAR_4] = '\0';
   return VAR_6;
  }
 }

 return FUNC_1(VAR_0);
}
