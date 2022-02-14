
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp_lua_softc {int luap; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*) ;
 struct interp_lua_softc VAR_0 ;

int
FUNC_2(const char *VAR_1)
{
 struct interp_lua_softc *VAR_2 = &VAR_0;

 FUNC_0("loading file %s", VAR_1);

 return (FUNC_1(VAR_2->luap, VAR_1));
}
