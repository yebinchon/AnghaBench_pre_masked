
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int lua_State ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(lua_State *VAR_1, struct stat *VAR_2)
{
 char VAR_3[20];





 FUNC_1(VAR_3, sizeof(VAR_3), "%o", VAR_2->st_mode & ~VAR_0);
 FUNC_0(VAR_1, VAR_3);
}
