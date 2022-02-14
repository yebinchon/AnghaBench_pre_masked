
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  int VAR_1 = FUNC_0(VAR_0, 1);
  int VAR_2 = FUNC_2(VAR_0, 2, VAR_1);
  if (VAR_2 != VAR_1)
    FUNC_1(VAR_0, 1 <= VAR_2 && VAR_2 <= VAR_1 + 1, 1, "position out of bounds");
  FUNC_4(VAR_0, 1, VAR_2);
  for ( ; VAR_2 < VAR_1; VAR_2++) {
    FUNC_4(VAR_0, 1, VAR_2+1);
    FUNC_5(VAR_0, 1, VAR_2);
  }
  FUNC_3(VAR_0);
  FUNC_5(VAR_0, 1, VAR_2);
  return 1;
}
