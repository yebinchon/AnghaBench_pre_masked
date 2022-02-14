
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0)
{
 FILE ** VAR_1;
 if (FUNC_1(VAR_0) != 1) {
  FUNC_2(VAR_0, 0);
  return 1;
 }

 VAR_1 = (FILE**)FUNC_3(VAR_0, 1);
 if (VAR_1 != ((void*)0) && *VAR_1 != ((void*)0)) {
  FUNC_2(VAR_0, FUNC_0(*VAR_1) == 0 ? 1 : 0);
  *VAR_1 = ((void*)0);
 } else
  FUNC_2(VAR_0, 0);

 return 1;
}
