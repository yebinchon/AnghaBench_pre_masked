
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stacksize; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (lua_State *VAR_2) {
  int VAR_3 = FUNC_2(VAR_2);
  int VAR_4 = VAR_3 + (VAR_3 / 8) + 2*VAR_0;
  if (VAR_4 > VAR_1) VAR_4 = VAR_1;
  if (VAR_3 > VAR_1 ||
      VAR_4 >= VAR_2->stacksize)
    FUNC_0(VAR_2);
  else
    FUNC_1(VAR_2, VAR_4);
}
