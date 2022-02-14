
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int*,char***,int ) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
 int VAR_1, VAR_2;
 char **VAR_3;

 if (FUNC_4(&VAR_1, &VAR_3, FUNC_1(VAR_0, 1)) == 0) {
  for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
   FUNC_3(VAR_0, VAR_3[VAR_2]);
  }
  FUNC_0(VAR_3);
  return VAR_2;
 }

 FUNC_2(VAR_0);
 return 1;
}
