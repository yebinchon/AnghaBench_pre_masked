
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_6__ {int * L; } ;
typedef TYPE_1__ MatchState ;




 int FUNC_0 (TYPE_1__*,int *,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_1__*,char const*,char const*) ;
 int FUNC_12 (TYPE_1__*,int ,char const*,char const*) ;

__attribute__((used)) static void FUNC_13 (MatchState *VAR_0, luaL_Buffer *VAR_1, const char *VAR_2,
                                       const char *VAR_3, int VAR_4) {
  lua_State *VAR_5 = VAR_0->L;
  switch (VAR_4) {
    case 129: {
      int VAR_6;
      FUNC_9(VAR_5, 3);
      VAR_6 = FUNC_11(VAR_0, VAR_2, VAR_3);
      FUNC_4(VAR_5, VAR_6, 1);
      break;
    }
    case 128: {
      FUNC_12(VAR_0, 0, VAR_2, VAR_3);
      FUNC_5(VAR_5, 3);
      break;
    }
    default: {
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
      return;
    }
  }
  if (!FUNC_10(VAR_5, -1)) {
    FUNC_7(VAR_5, 1);
    FUNC_8(VAR_5, VAR_2, VAR_3 - VAR_2);
  }
  else if (!FUNC_6(VAR_5, -1))
    FUNC_2(VAR_5, "invalid replacement value (a %s)", FUNC_3(VAR_5, -1));
  FUNC_1(VAR_1);
}
