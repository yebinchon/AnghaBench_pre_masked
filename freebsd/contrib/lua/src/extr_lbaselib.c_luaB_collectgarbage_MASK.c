
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;




 int VAR_0 ;






 size_t FUNC_0 (int *,int,char*,char const* const*) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
  static const char *const VAR_2[] = {"stop", "restart", "collect",
    "count", "step", "setpause", "setstepmul",
    "isrunning", ((void*)0)};
  static const int VAR_3[] = {128, 132, 135,
    134, 129, 131, 130,
    133};
  int VAR_4 = VAR_3[FUNC_0(VAR_1, 1, "collect", VAR_2)];
  int VAR_5 = (int)FUNC_1(VAR_1, 2, 0);
  int VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
  switch (VAR_4) {
    case 134: {
      int VAR_7 = FUNC_2(VAR_1, VAR_0, 0);
      FUNC_5(VAR_1, (lua_Number)VAR_6 + ((lua_Number)VAR_7/1024));
      return 1;
    }
    case 129: case 133: {
      FUNC_3(VAR_1, VAR_6);
      return 1;
    }
    default: {
      FUNC_4(VAR_1, VAR_6);
      return 1;
    }
  }
}
