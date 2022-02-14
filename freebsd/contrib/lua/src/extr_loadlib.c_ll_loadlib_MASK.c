
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char const*,char const*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_2) {
  const char *VAR_3 = FUNC_1(VAR_2, 1);
  const char *VAR_4 = FUNC_1(VAR_2, 2);
  int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_5 == 0)
    return 1;
  else {
    FUNC_3(VAR_2);
    FUNC_2(VAR_2, -2);
    FUNC_4(VAR_2, (VAR_5 == VAR_0) ? VAR_1 : "init");
    return 3;
  }
}
