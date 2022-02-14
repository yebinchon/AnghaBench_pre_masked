
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0)
{
 DIR *VAR_1, **VAR_2;

 VAR_2 = (DIR **)FUNC_1(VAR_0, 1);
 VAR_1 = *VAR_2;
 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_0(VAR_1);
 *VAR_2 = ((void*)0);
 return 0;
}
