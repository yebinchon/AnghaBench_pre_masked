
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int b_uint ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static b_uint FUNC_3 (lua_State *VAR_0) {
  int VAR_1, VAR_2 = FUNC_1(VAR_0);
  b_uint VAR_3 = ~(b_uint)0;
  for (VAR_1 = 1; VAR_1 <= VAR_2; VAR_1++)
    VAR_3 &= FUNC_0(VAR_0, VAR_1);
  return FUNC_2(VAR_3);
}
