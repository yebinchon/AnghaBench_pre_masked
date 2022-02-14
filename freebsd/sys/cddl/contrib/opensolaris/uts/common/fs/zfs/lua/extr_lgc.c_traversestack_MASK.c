
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_7__ {int stacksize; TYPE_3__* ci; TYPE_3__ base_ci; int * stack; int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int lu_mem ;
struct TYPE_8__ {scalar_t__ gcstate; } ;
typedef TYPE_2__ global_State ;
typedef int TValue ;
typedef int * StkId ;
typedef TYPE_3__ CallInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static lu_mem FUNC_2 (global_State *VAR_1, lua_State *VAR_2) {
  int VAR_3 = 0;
  StkId VAR_4 = VAR_2->stack;
  if (VAR_4 == ((void*)0))
    return 1;
  for (; VAR_4 < VAR_2->top; VAR_4++)
    FUNC_0(VAR_1, VAR_4);
  if (VAR_1->gcstate == VAR_0) {
    StkId VAR_5 = VAR_2->stack + VAR_2->stacksize;
    for (; VAR_4 < VAR_5; VAR_4++)
      FUNC_1(VAR_4);
  }
  else {
    CallInfo *VAR_6;
    for (VAR_6 = &VAR_2->base_ci; VAR_6 != VAR_2->ci; VAR_6 = VAR_6->next)
      VAR_3++;
  }
  return sizeof(lua_State) + sizeof(TValue) * VAR_2->stacksize +
         sizeof(CallInfo) * VAR_3;
}
