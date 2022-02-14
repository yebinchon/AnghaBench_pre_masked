
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;
typedef int TValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*,int const*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int const*,int *) ;
 int FUNC_9 (int const*,int *) ;
 int FUNC_10 (int const*) ;

void FUNC_11 (lua_State *VAR_3, int VAR_4, const TValue *VAR_5, const TValue *VAR_6,
                 TValue *VAR_7) {
  switch (VAR_4) {
    case 135: case 133: case 132:
    case 129: case 128:
    case 134: {
      lua_Integer VAR_8; lua_Integer VAR_9;
      if (FUNC_8(VAR_5, &VAR_8) && FUNC_8(VAR_6, &VAR_9)) {
        FUNC_7(VAR_7, FUNC_1(VAR_3, VAR_4, VAR_8, VAR_9));
        return;
      }
      else break;
    }
    case 131: case 130: {
      lua_Number VAR_10; lua_Number VAR_11;
      if (FUNC_9(VAR_5, &VAR_10) && FUNC_9(VAR_6, &VAR_11)) {
        FUNC_6(VAR_7, FUNC_5(VAR_3, VAR_4, VAR_10, VAR_11));
        return;
      }
      else break;
    }
    default: {
      lua_Number VAR_12; lua_Number VAR_13;
      if (FUNC_10(VAR_5) && FUNC_10(VAR_6)) {
        FUNC_7(VAR_7, FUNC_1(VAR_3, VAR_4, FUNC_2(VAR_5), FUNC_2(VAR_6)));
        return;
      }
      else if (FUNC_9(VAR_5, &VAR_12) && FUNC_9(VAR_6, &VAR_13)) {
        FUNC_6(VAR_7, FUNC_5(VAR_3, VAR_4, VAR_12, VAR_13));
        return;
      }
      else break;
    }
  }

  FUNC_4(VAR_3 != ((void*)0));
  FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7, FUNC_0(VAR_1, (VAR_4 - VAR_0) + VAR_2));
}
