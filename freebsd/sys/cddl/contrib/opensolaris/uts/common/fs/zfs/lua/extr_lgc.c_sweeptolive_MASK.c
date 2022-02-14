
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int GCObject ;


 int ** FUNC_0 (int *,int **,int) ;

__attribute__((used)) static GCObject **FUNC_1 (lua_State *VAR_0, GCObject **VAR_1, int *VAR_2) {
  GCObject ** VAR_3 = VAR_1;
  int VAR_4 = 0;
  do {
    VAR_4++;
    VAR_1 = FUNC_0(VAR_0, VAR_1, 1);
  } while (VAR_1 == VAR_3);
  if (VAR_2) *VAR_2 += VAR_4;
  return VAR_1;
}
