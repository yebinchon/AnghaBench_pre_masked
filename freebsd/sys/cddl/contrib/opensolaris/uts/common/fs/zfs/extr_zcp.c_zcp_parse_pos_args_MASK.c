
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int za_lua_type; int * za_name; } ;
typedef TYPE_1__ zcp_arg_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char const*,TYPE_1__ const*,TYPE_1__ const*,char*,...) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_1, const char *VAR_2, const zcp_arg_t *VAR_3,
    const zcp_arg_t *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_3[VAR_5].za_name != ((void*)0); VAR_5++) {
  VAR_6 = FUNC_2(VAR_1, VAR_5 + 1);
  if (VAR_6 == VAR_0) {
   FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
       "too few arguments");
   FUNC_4("unreachable code");
  } else if (VAR_6 != VAR_3[VAR_5].za_lua_type) {
   FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
       "arg %d wrong type (is '%s', expected '%s')",
       VAR_5 + 1, FUNC_3(VAR_1, VAR_6),
       FUNC_3(VAR_1, VAR_3[VAR_5].za_lua_type));
   FUNC_4("unreachable code");
  }
 }
 if (FUNC_0(VAR_1) != VAR_5) {
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
      "too many positional arguments");
  FUNC_4("unreachable code");
 }

 for (VAR_5 = 0; VAR_4[VAR_5].za_name != ((void*)0); VAR_5++) {
  FUNC_1(VAR_1);
 }
}
