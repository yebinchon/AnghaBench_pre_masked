
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;


 int FUNC_0 (double) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int ) ;
 double FUNC_3 (int ) ;

__attribute__((used)) static lua_Number FUNC_4 (const char **VAR_0, lua_Number VAR_1, int *VAR_2) {
  for (; FUNC_2(FUNC_1(**VAR_0)); (*VAR_0)++) {
    VAR_1 = (VAR_1 * FUNC_0(16.0)) + FUNC_0(FUNC_3(FUNC_1(**VAR_0)));
    (*VAR_2)++;
  }
  return VAR_1;
}
