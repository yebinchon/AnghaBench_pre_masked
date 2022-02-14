
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int nuse; } ;
struct TYPE_10__ {TYPE_1__ strt; } ;
struct TYPE_9__ {int tt; } ;
struct TYPE_8__ {int nupvalues; } ;
struct TYPE_7__ {int nupvalues; } ;
typedef int GCObject ;


 TYPE_5__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20 (lua_State *VAR_0, GCObject *VAR_1) {
  switch (FUNC_1(VAR_1)->tt) {
    case 133: FUNC_11(VAR_0, FUNC_4(VAR_1)); break;
    case 135: {
      FUNC_14(VAR_0, VAR_1, FUNC_17(FUNC_3(VAR_1)->nupvalues));
      break;
    }
    case 136: {
      FUNC_14(VAR_0, VAR_1, FUNC_16(FUNC_2(VAR_1)->nupvalues));
      break;
    }
    case 129: FUNC_12(VAR_0, FUNC_9(VAR_1)); break;
    case 131: FUNC_13(VAR_0, FUNC_5(VAR_1)); break;
    case 130: FUNC_10(VAR_0, FUNC_6(VAR_1)); break;
    case 128: FUNC_14(VAR_0, VAR_1, FUNC_19(FUNC_8(VAR_1))); break;
    case 132:
      FUNC_0(VAR_0)->strt.nuse--;

    case 134: {
      FUNC_14(VAR_0, VAR_1, FUNC_18(FUNC_7(VAR_1)));
      break;
    }
    default: FUNC_15(0);
  }
}
