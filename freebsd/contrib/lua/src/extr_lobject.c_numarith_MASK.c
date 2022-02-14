
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static lua_Number FUNC_9 (lua_State *VAR_0, int VAR_1, lua_Number VAR_2,
                                                  lua_Number VAR_3) {
  switch (VAR_1) {
    case 135: return FUNC_1(VAR_0, VAR_2, VAR_3);
    case 129: return FUNC_7(VAR_0, VAR_2, VAR_3);
    case 131: return FUNC_5(VAR_0, VAR_2, VAR_3);
    case 134: return FUNC_2(VAR_0, VAR_2, VAR_3);
    case 130: return FUNC_6(VAR_0, VAR_2, VAR_3);
    case 133: return FUNC_3(VAR_0, VAR_2, VAR_3);
    case 128: return FUNC_8(VAR_0, VAR_2);
    case 132: {
      lua_Number VAR_4;
      FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4);
      return VAR_4;
    }
    default: FUNC_0(0); return 0;
  }
}
