
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Unsigned ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (luaL_Buffer *VAR_3, lua_Unsigned VAR_4,
                     int VAR_5, int VAR_6, int VAR_7) {
  char *VAR_8 = FUNC_1(VAR_3, VAR_6);
  int VAR_9;
  VAR_8[VAR_5 ? 0 : VAR_6 - 1] = (char)(VAR_4 & VAR_0);
  for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
    VAR_4 >>= VAR_1;
    VAR_8[VAR_5 ? VAR_9 : VAR_6 - 1 - VAR_9] = (char)(VAR_4 & VAR_0);
  }
  if (VAR_7 && VAR_6 > VAR_2) {
    for (VAR_9 = VAR_2; VAR_9 < VAR_6; VAR_9++)
      VAR_8[VAR_5 ? VAR_9 : VAR_6 - 1 - VAR_9] = (char)VAR_0;
  }
  FUNC_0(VAR_3, VAR_6);
}
