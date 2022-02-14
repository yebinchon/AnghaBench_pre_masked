
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;
typedef scalar_t__ l_seeknum ;
typedef int FILE ;





 int FUNC_0 (int *,scalar_t__,int const) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,int,char*,char const* const*) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_0) {
  static const int VAR_1[] = {128, 130, 129};
  static const char *const VAR_2[] = {"set", "cur", "end", ((void*)0)};
  FILE *VAR_3 = FUNC_7(VAR_0);
  int VAR_4 = FUNC_3(VAR_0, 2, "cur", VAR_2);
  lua_Integer VAR_5 = FUNC_5(VAR_0, 3, 0);
  l_seeknum VAR_6 = (l_seeknum)VAR_5;
  FUNC_2(VAR_0, (lua_Integer)VAR_6 == VAR_5, 3,
                  "not an integer in proper range");
  VAR_4 = FUNC_0(VAR_3, VAR_6, VAR_1[VAR_4]);
  if (VAR_4)
    return FUNC_4(VAR_0, 0, ((void*)0));
  else {
    FUNC_6(VAR_0, (lua_Integer)FUNC_1(VAR_3));
    return 1;
  }
}
