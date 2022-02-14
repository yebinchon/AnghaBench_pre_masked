
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {int metatable; } ;
struct TYPE_8__ {int metatable; } ;
typedef int TValue ;
 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,int const*,int const*,int const*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int * FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 TYPE_4__* FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*,int const*) ;
 int FUNC_16 (int const*) ;
 TYPE_2__* FUNC_17 (int const*) ;

int FUNC_18 (lua_State *VAR_1, const TValue *VAR_2, const TValue *VAR_3) {
  const TValue *VAR_4;
  FUNC_10(FUNC_15(VAR_2, VAR_3));
  switch (FUNC_16(VAR_2)) {
    case 132: return 1;
    case 131: return FUNC_11(FUNC_12(VAR_2), FUNC_12(VAR_3));
    case 136: return FUNC_0(VAR_2) == FUNC_0(VAR_3);
    case 134: return FUNC_13(VAR_2) == FUNC_13(VAR_3);
    case 135: return FUNC_3(VAR_2) == FUNC_3(VAR_3);
    case 130: return FUNC_2(FUNC_14(VAR_2), FUNC_14(VAR_3));
    case 133: return FUNC_9(FUNC_14(VAR_2), FUNC_14(VAR_3));
    case 128: {
      if (FUNC_17(VAR_2) == FUNC_17(VAR_3)) return 1;
      else if (VAR_1 == ((void*)0)) return 0;
      VAR_4 = FUNC_5(VAR_1, FUNC_17(VAR_2)->metatable, FUNC_17(VAR_3)->metatable, VAR_0);
      break;
    }
    case 129: {
      if (FUNC_6(VAR_2) == FUNC_6(VAR_3)) return 1;
      else if (VAR_1 == ((void*)0)) return 0;
      VAR_4 = FUNC_5(VAR_1, FUNC_6(VAR_2)->metatable, FUNC_6(VAR_3)->metatable, VAR_0);
      break;
    }
    default:
      FUNC_10(FUNC_7(VAR_2));
      return FUNC_4(VAR_2) == FUNC_4(VAR_3);
  }
  if (VAR_4 == ((void*)0)) return 0;
  FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3, VAR_1->top, 1);
  return !FUNC_8(VAR_1->top);
}
