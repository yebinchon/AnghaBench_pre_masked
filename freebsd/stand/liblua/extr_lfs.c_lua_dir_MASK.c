
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int DIR ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_2)
{
 const char *VAR_3;
 DIR *VAR_4;

 if (FUNC_2(VAR_2) != 1) {
  FUNC_5(VAR_2);
  return 1;
 }

 VAR_3 = FUNC_0(VAR_2, 1);
 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_2);
  return 1;
 }

 FUNC_4(VAR_2, VAR_1);
 *(DIR **)FUNC_3(VAR_2, sizeof(DIR **)) = VAR_4;
 FUNC_1(VAR_2, VAR_0);
 FUNC_6(VAR_2, -2);
 return 2;
}
