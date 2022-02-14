
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp_lua_softc {int * luap; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 struct interp_lua_softc VAR_3 ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int*,char***,char const*) ;
 int FUNC_10 (char*,...) ;

int
FUNC_11(const char *VAR_4)
{
 int VAR_5, VAR_6;
 char **VAR_7;
 lua_State *VAR_8;
 struct interp_lua_softc *VAR_9 = &VAR_3;
 int VAR_10, VAR_11;

 VAR_8 = VAR_9->luap;
 FUNC_0("executing line...");
 if ((VAR_10 = FUNC_3(VAR_8, VAR_4)) != 0) {
                FUNC_6(VAR_8, 1);






  VAR_2 = ((void*)0);
  if (FUNC_9(&VAR_5, &VAR_7, VAR_4) == 0) {
   FUNC_4(VAR_8, "cli_execute");
   for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
    FUNC_7(VAR_8, VAR_7[VAR_6]);
   }
   VAR_10 = FUNC_5(VAR_8, VAR_5, 1, 0);
   VAR_11 = FUNC_8(VAR_8, 1);
   FUNC_6(VAR_8, 1);
   if (VAR_10 != 0 || VAR_11 != 0) {
    VAR_10 = FUNC_2(VAR_5, VAR_7);
   }
   if (VAR_10 != 0) {
    if (VAR_2 != ((void*)0))
     FUNC_10("%s\n", VAR_2);
    else
     FUNC_10("Command failed\n");
    VAR_10 = VAR_0;
   }
   FUNC_1(VAR_7);
  } else {
   FUNC_10("Failed to parse \'%s\'\n", VAR_4);
   VAR_10 = VAR_0;
  }
 }

 return (VAR_10 == 0 ? VAR_1 : VAR_0);
}
