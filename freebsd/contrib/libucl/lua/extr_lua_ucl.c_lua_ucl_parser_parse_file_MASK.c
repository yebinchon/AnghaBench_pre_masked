
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 struct ucl_parser* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct ucl_parser*,char const*) ;
 char* FUNC_5 (struct ucl_parser*) ;

__attribute__((used)) static int
FUNC_6 (lua_State *VAR_0)
{
 struct ucl_parser *VAR_1;
 const char *VAR_2;
 int VAR_3 = 2;

 VAR_1 = FUNC_3 (VAR_0, 1);
 VAR_2 = FUNC_0 (VAR_0, 2);

 if (VAR_1 != ((void*)0) && VAR_2 != ((void*)0)) {
  if (FUNC_4 (VAR_1, VAR_2)) {
   FUNC_1 (VAR_0, 1);
   VAR_3 = 1;
  }
  else {
   FUNC_1 (VAR_0, 0);
   FUNC_2 (VAR_0, FUNC_5 (VAR_1));
  }
 }
 else {
  FUNC_1 (VAR_0, 0);
  FUNC_2 (VAR_0, "invalid arguments");
 }

 return VAR_3;
}
