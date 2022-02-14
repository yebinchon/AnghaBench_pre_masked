
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int * tmname; } ;
struct TYPE_6__ {TYPE_1__* p; } ;
struct TYPE_5__ {int * code; } ;
typedef size_t TMS ;
typedef TYPE_1__ Proto ;
typedef int Instruction ;
typedef int CallInfo ;


 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char const* FUNC_5 (TYPE_1__*,int,int ,char const**) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static const char *FUNC_7 (lua_State *VAR_14, CallInfo *VAR_15, const char **VAR_16) {
  TMS VAR_17;
  Proto *VAR_18 = FUNC_3(VAR_15)->p;
  int VAR_19 = FUNC_4(VAR_15);
  Instruction VAR_20 = VAR_18->code[VAR_19];
  switch (FUNC_2(VAR_20)) {
    case 146:
    case 130:
      return FUNC_5(VAR_18, VAR_19, FUNC_1(VAR_20), VAR_16);
    case 129: {
      *VAR_16 = "for iterator";
       return "for iterator";
    }

    case 134:
    case 141:
    case 142: VAR_17 = VAR_4; break;
    case 132:
    case 133: VAR_17 = VAR_10; break;
    case 143: VAR_17 = VAR_3; break;
    case 147: VAR_17 = VAR_0; break;
    case 131: VAR_17 = VAR_12; break;
    case 136: VAR_17 = VAR_9; break;
    case 144: VAR_17 = VAR_2; break;
    case 137: VAR_17 = VAR_8; break;
    case 135: VAR_17 = VAR_11; break;
    case 128: VAR_17 = VAR_13; break;
    case 139: VAR_17 = VAR_6; break;
    case 138: VAR_17 = VAR_7; break;
    case 140: VAR_17 = VAR_5; break;
    case 145: VAR_17 = VAR_1; break;
    default:
      return ((void*)0);
  }
  *VAR_16 = FUNC_6(FUNC_0(VAR_14)->tmname[VAR_17]);
  return "metamethod";
}
