
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int b_uint ;


 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
  int VAR_1;
  b_uint VAR_2 = FUNC_1(VAR_0, 1);
  b_uint VAR_3 = FUNC_1(VAR_0, 2);
  int VAR_4 = FUNC_0(VAR_0, 3, &VAR_1);
  int VAR_5 = FUNC_3(VAR_1);
  VAR_3 &= VAR_5;
  VAR_2 = (VAR_2 & ~(VAR_5 << VAR_4)) | (VAR_3 << VAR_4);
  FUNC_2(VAR_0, VAR_2);
  return 1;
}
