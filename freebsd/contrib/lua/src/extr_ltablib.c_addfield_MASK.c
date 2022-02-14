
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_0, luaL_Buffer *VAR_1, lua_Integer VAR_2) {
  FUNC_3(VAR_0, 1, VAR_2);
  if (!FUNC_4(VAR_0, -1))
    FUNC_1(VAR_0, "invalid value (%s) at index %d in table for 'concat'",
                  FUNC_2(VAR_0, -1), VAR_2);
  FUNC_0(VAR_1);
}
