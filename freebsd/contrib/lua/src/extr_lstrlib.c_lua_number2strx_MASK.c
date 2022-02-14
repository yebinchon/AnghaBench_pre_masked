
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,int ) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (char) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, char *VAR_2, int VAR_3,
                            const char *VAR_4, lua_Number VAR_5) {
  int VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
  if (VAR_4[VAR_0] == 'A') {
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
      VAR_2[VAR_7] = FUNC_2(FUNC_3(VAR_2[VAR_7]));
  }
  else if (VAR_4[VAR_0] != 'a')
    return FUNC_0(VAR_1, "modifiers for format '%%a'/'%%A' not implemented");
  return VAR_6;
}
