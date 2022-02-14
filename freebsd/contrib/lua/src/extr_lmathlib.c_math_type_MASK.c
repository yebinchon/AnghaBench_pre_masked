
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  if (FUNC_4(VAR_1, 1) == VAR_0) {
      if (FUNC_1(VAR_1, 1))
        FUNC_2(VAR_1, "integer");
      else
        FUNC_2(VAR_1, "float");
  }
  else {
    FUNC_0(VAR_1, 1);
    FUNC_3(VAR_1);
  }
  return 1;
}
