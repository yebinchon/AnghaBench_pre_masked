
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int za_lua_type; int * za_name; } ;
typedef TYPE_1__ zcp_arg_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,char const*,TYPE_1__ const*,TYPE_1__ const*,char*,...) ;

__attribute__((used)) static void
FUNC_16(lua_State *VAR_1, const char *VAR_2,
    const zcp_arg_t *VAR_3, const zcp_arg_t *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_3[VAR_5].za_name != ((void*)0); VAR_5++) {




  FUNC_5(VAR_1, VAR_5 + 1);
  FUNC_1(VAR_1, 1);

  VAR_6 = FUNC_12(VAR_1, -1);
  if (VAR_6 == VAR_0) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "too few arguments");
   FUNC_14("unreachable code");
  } else if (VAR_6 != VAR_3[VAR_5].za_lua_type) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "arg %d wrong type (is '%s', expected '%s')",
       VAR_5 + 1, FUNC_13(VAR_1, VAR_6),
       FUNC_13(VAR_1, VAR_3[VAR_5].za_lua_type));
   FUNC_14("unreachable code");
  }




  FUNC_5(VAR_1, VAR_5 + 1);
  FUNC_6(VAR_1);
  FUNC_9(VAR_1, 1);
 }

 for (VAR_5 = 0; VAR_4[VAR_5].za_name != ((void*)0); VAR_5++) {





  FUNC_0(VAR_1, 1, VAR_4[VAR_5].za_name);

  VAR_6 = FUNC_12(VAR_1, -1);
  if (VAR_6 != VAR_0 && VAR_6 != VAR_4[VAR_5].za_lua_type) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "kwarg '%s' wrong type (is '%s', expected '%s')",
       VAR_4[VAR_5].za_name, FUNC_13(VAR_1, VAR_6),
       FUNC_13(VAR_1, VAR_4[VAR_5].za_lua_type));
   FUNC_14("unreachable code");
  }




  FUNC_6(VAR_1);
  FUNC_8(VAR_1, 1, VAR_4[VAR_5].za_name);
 }





 FUNC_6(VAR_1);
 if (FUNC_4(VAR_1, 1)) {
  if (FUNC_2(VAR_1, -2) && FUNC_10(VAR_1, -2) > 0) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "too many positional arguments");
  } else if (FUNC_3(VAR_1, -2)) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "invalid kwarg '%s'", FUNC_11(VAR_1, -2));
  } else {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4,
       "kwarg keys must be strings");
  }
  FUNC_14("unreachable code");
 }

 FUNC_7(VAR_1, 1);
}
