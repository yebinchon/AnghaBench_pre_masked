
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int lua_State ;


 char* FUNC_0 (int *,int,scalar_t__*) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0)
{
 ssize_t VAR_1, VAR_2;
 const char *VAR_3 = FUNC_0(VAR_0, 1, &VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1)
  FUNC_1((unsigned char)*(VAR_3++));

 return 1;
}
