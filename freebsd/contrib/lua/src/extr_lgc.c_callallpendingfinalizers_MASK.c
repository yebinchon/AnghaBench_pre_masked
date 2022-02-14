
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ tobefnz; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_0) {
  global_State *VAR_1 = FUNC_0(VAR_0);
  while (VAR_1->tobefnz)
    FUNC_1(VAR_0, 0);
}
