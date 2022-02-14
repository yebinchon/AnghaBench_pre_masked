
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
struct TYPE_5__ {scalar_t__ gcstate; scalar_t__ GCestimate; int gcmajorinc; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  FUNC_5(VAR_3->gcstate == VAR_1);
  if (VAR_3->GCestimate == 0) {
    FUNC_3(VAR_2, 0);
    VAR_3->GCestimate = FUNC_2(VAR_3);
  }
  else {
    lu_mem VAR_4 = VAR_3->GCestimate;
    FUNC_4(VAR_2, FUNC_1(VAR_0));
    VAR_3->gcstate = VAR_1;
    if (FUNC_2(VAR_3) > (VAR_4 / 100) * VAR_3->gcmajorinc)
      VAR_3->GCestimate = 0;
    else
      VAR_3->GCestimate = VAR_4;

  }
  FUNC_6(VAR_3, FUNC_2(VAR_3));
  FUNC_5(VAR_3->gcstate == VAR_1);
}
