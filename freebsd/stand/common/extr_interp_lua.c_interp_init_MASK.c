
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct interp_lua_softc {int * luap; } ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ func; int name; } ;
typedef TYPE_1__ luaL_Reg ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *,int ,scalar_t__,int) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int) ;
 struct interp_lua_softc VAR_3 ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,int) ;

void
FUNC_9(void)
{
 lua_State *VAR_4;
 struct interp_lua_softc *VAR_5 = &VAR_3;
 const char *VAR_6;
 const luaL_Reg *VAR_7;

 FUNC_8("script.lang", "lua", 1);
 FUNC_0("creating context");

 VAR_4 = FUNC_4(VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  FUNC_7("problem initializing the Lua interpreter\n");
  FUNC_1();
 }
 VAR_5->luap = VAR_4;


 for (VAR_7 = VAR_2; VAR_7->func; VAR_7++) {
  FUNC_3(VAR_4, VAR_7->name, VAR_7->func, 1);
  FUNC_5(VAR_4, 1);
 }

 VAR_6 = VAR_0;
 if (FUNC_2(VAR_6) != 0) {
                const char *VAR_8 = FUNC_6(VAR_4, -1);
                VAR_8 = VAR_8 == ((void*)0) ? "unknown" : VAR_8;
                FUNC_7("Startup error in %s:\nLUA ERROR: %s.\n", VAR_6, VAR_8);
                FUNC_5(VAR_4, 1);
 }
}
