
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1, const char *VAR_2) {
  int VAR_3;
  FUNC_1(VAR_1, "require");
  FUNC_2(VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_1, 1, 1);
  if (VAR_3 == VAR_0)
    FUNC_3(VAR_1, VAR_2);
  return FUNC_4(VAR_1, VAR_3);
}
