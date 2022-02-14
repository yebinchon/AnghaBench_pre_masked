
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
 const char *VAR_1, *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 1 || VAR_3 > 2) {
  FUNC_3(VAR_0);
  return 1;
 }
 VAR_2 = FUNC_4(VAR_0, 1);
 VAR_1 = "r";
 if (VAR_3 > 1) {
  VAR_1 = FUNC_4(VAR_0, 2);
  if (VAR_1 == ((void*)0)) {
   FUNC_3(VAR_0);
   return 1;
  }
 }
 FILE * VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 != ((void*)0)) {
  FILE ** VAR_5 = (FILE**)FUNC_2(VAR_0, sizeof(FILE**));
  *VAR_5 = VAR_4;
 } else
  FUNC_3(VAR_0);
 return 1;
}
