
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ci; int base_ci; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_0, void *VAR_1) {
  FUNC_0(VAR_1);
  for (;;) {
    if (VAR_0->ci == &VAR_0->base_ci)
      return;
    if (!FUNC_2(VAR_0->ci))
      FUNC_1(VAR_0);
    else {
      FUNC_4(VAR_0);
      FUNC_3(VAR_0);
    }
  }
}
