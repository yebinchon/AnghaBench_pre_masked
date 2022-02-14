
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int b_uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_2) {
  b_uint VAR_3 = FUNC_2(VAR_2, 1);
  int VAR_4 = FUNC_1(VAR_2, 2);
  if (VAR_4 < 0 || !(VAR_3 & ((b_uint)1 << (VAR_1 - 1))))
    return FUNC_0(VAR_2, VAR_3, -VAR_4);
  else {
    if (VAR_4 >= VAR_1) VAR_3 = VAR_0;
    else
      VAR_3 = FUNC_4((VAR_3 >> VAR_4) | ~(~(b_uint)0 >> VAR_4));
    FUNC_3(VAR_2, VAR_3);
    return 1;
  }
}
