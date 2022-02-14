
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int metatable; } ;
typedef TYPE_2__ Table ;
struct TYPE_6__ {int lnglen; } ;
struct TYPE_8__ {TYPE_1__ u; int shrlen; } ;
typedef int TValue ;
typedef int StkId ;





 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ) ;
 TYPE_2__* FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int const*,int const*,int const*,int ,int) ;
 int * FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_3__* FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;

void FUNC_10 (lua_State *VAR_1, StkId VAR_2, const TValue *VAR_3) {
  const TValue *VAR_4;
  switch (FUNC_9(VAR_3)) {
    case 128: {
      Table *VAR_5 = FUNC_1(VAR_3);
      VAR_4 = FUNC_0(VAR_1, VAR_5->metatable, VAR_0);
      if (VAR_4) break;
      FUNC_6(VAR_2, FUNC_3(VAR_5));
      return;
    }
    case 129: {
      FUNC_6(VAR_2, FUNC_7(VAR_3)->shrlen);
      return;
    }
    case 130: {
      FUNC_6(VAR_2, FUNC_7(VAR_3)->u.lnglen);
      return;
    }
    default: {
      VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_0);
      if (FUNC_8(VAR_4))
        FUNC_2(VAR_1, VAR_3, "get length of");
      break;
    }
  }
  FUNC_4(VAR_1, VAR_4, VAR_3, VAR_3, VAR_2, 1);
}
