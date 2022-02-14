
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0, lua_Debug *VAR_1) {
  int VAR_2 = FUNC_3(VAR_0);
  FUNC_2(VAR_0, "f", VAR_1);
  FUNC_5(VAR_0);
  if (FUNC_0(VAR_0, VAR_2 + 1, 2)) {
    FUNC_1(VAR_0, -1, VAR_2 + 1);
    FUNC_4(VAR_0, 2);
    return 1;
  }
  else {
    FUNC_6(VAR_0, VAR_2);
    return 0;
  }
}
