
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int errfunc; scalar_t__ nny; int allowhook; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_12__ {int old_errfunc; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
struct TYPE_15__ {TYPE_2__ u; int callstatus; int extra; } ;
typedef int StkId ;
typedef TYPE_4__ CallInfo ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0, int VAR_1) {
  StkId VAR_2;
  CallInfo *VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 == ((void*)0)) return 0;

  VAR_2 = FUNC_4(VAR_0, VAR_3->extra);
  FUNC_3(VAR_0, VAR_2);
  FUNC_5(VAR_0, VAR_1, VAR_2);
  VAR_0->ci = VAR_3;
  VAR_0->allowhook = FUNC_1(VAR_3->callstatus);
  VAR_0->nny = 0;
  FUNC_2(VAR_0);
  VAR_0->errfunc = VAR_3->u.c.old_errfunc;
  return 1;
}
