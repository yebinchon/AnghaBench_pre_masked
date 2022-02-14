
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int * grayagain; } ;
typedef TYPE_1__ global_State ;
struct TYPE_8__ {scalar_t__ tt; } ;
struct TYPE_7__ {int * gclist; } ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int) ;

void FUNC_7 (lua_State *VAR_1, GCObject *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_1);
  FUNC_6(FUNC_4(VAR_2) && !FUNC_5(VAR_3, VAR_2) && FUNC_2(VAR_2)->tt == VAR_0);
  FUNC_1(VAR_2);
  FUNC_3(VAR_2)->gclist = VAR_3->grayagain;
  VAR_3->grayagain = VAR_2;
}
