
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ top; scalar_t__ stack_last; scalar_t__ stack; TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_5__ {scalar_t__ top; struct TYPE_5__* previous; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ CallInfo ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_0) {
  CallInfo *VAR_1;
  StkId VAR_2 = VAR_0->top;
  for (VAR_1 = VAR_0->ci; VAR_1 != ((void*)0); VAR_1 = VAR_1->previous) {
    FUNC_1(VAR_1->top <= VAR_0->stack_last);
    if (VAR_2 < VAR_1->top) VAR_2 = VAR_1->top;
  }
  return FUNC_0(VAR_2 - VAR_0->stack) + 1;
}
