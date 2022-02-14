
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int gckind; int GCestimate; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;

void FUNC_5 (lua_State *VAR_4, int VAR_5) {
  global_State *VAR_6 = FUNC_0(VAR_4);
  if (VAR_5 == VAR_6->gckind) return;
  if (VAR_5 == VAR_1) {

    FUNC_4(VAR_4, FUNC_1(VAR_0));
    VAR_6->GCestimate = FUNC_3(VAR_6);
    VAR_6->gckind = VAR_1;
  }
  else {


    VAR_6->gckind = VAR_2;
    FUNC_2(VAR_4);
    FUNC_4(VAR_4, ~VAR_3);
  }
}
