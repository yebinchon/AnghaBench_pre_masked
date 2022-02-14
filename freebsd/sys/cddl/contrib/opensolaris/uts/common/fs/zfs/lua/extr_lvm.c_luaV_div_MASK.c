
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ n ;
typedef unsigned int lua_Unsigned ;
typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static lua_Number FUNC_1 (lua_State *VAR_0, lua_Number VAR_1, lua_Number VAR_2) {
  if ((lua_Unsigned)(VAR_2) + 1u <= 1u) {
    if (VAR_2 == 0)
      FUNC_0(VAR_0, "attempt to divide by zero");
    return (0 - VAR_1);
  }
  else {
    lua_Number VAR_3 = VAR_1 / VAR_2;
    if ((VAR_1 ^ VAR_2) < 0 && VAR_1 % VAR_2 != 0)
      VAR_3 -= 1;
    return VAR_3;
  }
}
