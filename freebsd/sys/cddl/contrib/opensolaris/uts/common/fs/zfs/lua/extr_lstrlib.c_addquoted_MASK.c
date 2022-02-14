
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char const) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char const) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_0, luaL_Buffer *VAR_1, int VAR_2) {
  size_t VAR_3;
  const char *VAR_4 = FUNC_4(VAR_0, VAR_2, &VAR_3);
  FUNC_2(VAR_1, '"');
  while (VAR_3--) {
    if (*VAR_4 == '"' || *VAR_4 == '\\' || *VAR_4 == '\n') {
      FUNC_2(VAR_1, '\\');
      FUNC_2(VAR_1, *VAR_4);
    }
    else if (*VAR_4 == '\0' || FUNC_0(FUNC_6(*VAR_4))) {
      char VAR_5[10];
      if (!FUNC_1(FUNC_6(*(VAR_4+1))))
        FUNC_5(VAR_5, "\\%d", (int)FUNC_6(*VAR_4));
      else
        FUNC_5(VAR_5, "\\%03d", (int)FUNC_6(*VAR_4));
      FUNC_3(VAR_1, VAR_5);
    }
    else
      FUNC_2(VAR_1, *VAR_4);
    VAR_4++;
  }
  FUNC_2(VAR_1, '"');
}
