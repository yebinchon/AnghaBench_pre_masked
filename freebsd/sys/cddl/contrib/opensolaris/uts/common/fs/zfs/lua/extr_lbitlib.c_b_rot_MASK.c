
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int b_uint ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1, int VAR_2) {
  b_uint VAR_3 = FUNC_0(VAR_1, 1);
  VAR_2 &= (VAR_0 - 1);
  VAR_3 = FUNC_2(VAR_3);
  if (VAR_2 != 0)
    VAR_3 = (VAR_3 << VAR_2) | (VAR_3 >> (VAR_0 - VAR_2));
  FUNC_1(VAR_1, FUNC_2(VAR_3));
  return 1;
}
