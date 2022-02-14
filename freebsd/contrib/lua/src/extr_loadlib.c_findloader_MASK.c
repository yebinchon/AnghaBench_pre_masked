
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13 (lua_State *VAR_2, const char *VAR_3) {
  int VAR_4;
  luaL_Buffer VAR_5;
  FUNC_1(VAR_2, &VAR_5);

  if (FUNC_5(VAR_2, FUNC_12(1), "searchers") != VAR_1)
    FUNC_2(VAR_2, "'package.searchers' must be a table");

  for (VAR_4 = 1; ; VAR_4++) {
    if (FUNC_10(VAR_2, 3, VAR_4) == VAR_0) {
      FUNC_8(VAR_2, 1);
      FUNC_3(&VAR_5);
      FUNC_2(VAR_2, "module '%s' not found:%s", VAR_3, FUNC_11(VAR_2, -1));
    }
    FUNC_9(VAR_2, VAR_3);
    FUNC_4(VAR_2, 1, 2);
    if (FUNC_6(VAR_2, -2))
      return;
    else if (FUNC_7(VAR_2, -2)) {
      FUNC_8(VAR_2, 1);
      FUNC_0(&VAR_5);
    }
    else
      FUNC_8(VAR_2, 2);
  }
}
