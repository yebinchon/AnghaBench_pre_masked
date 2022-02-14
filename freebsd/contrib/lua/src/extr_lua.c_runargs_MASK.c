
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1, char **VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
    int VAR_5 = VAR_2[VAR_4][1];
    FUNC_2(VAR_2[VAR_4][0] == '-');
    if (VAR_5 == 'e' || VAR_5 == 'l') {
      int VAR_6;
      const char *VAR_7 = VAR_2[VAR_4] + 2;
      if (*VAR_7 == '\0') VAR_7 = VAR_2[++VAR_4];
      FUNC_2(VAR_7 != ((void*)0));
      VAR_6 = (VAR_5 == 'e')
               ? FUNC_1(VAR_1, VAR_7, "=(command line)")
               : FUNC_0(VAR_1, VAR_7);
      if (VAR_6 != VAR_0) return 0;
    }
  }
  return 1;
}
