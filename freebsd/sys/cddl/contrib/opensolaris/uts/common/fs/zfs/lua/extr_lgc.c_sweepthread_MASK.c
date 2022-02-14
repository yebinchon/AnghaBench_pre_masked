
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int openupval; int * stack; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_10__ {scalar_t__ gckind; } ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_1, lua_State *VAR_2) {
  if (VAR_2->stack == ((void*)0)) return;
  FUNC_3(VAR_1, &VAR_2->openupval);
  FUNC_2(VAR_2);

  if (FUNC_0(VAR_1)->gckind != VAR_0)
    FUNC_1(VAR_2);
}
