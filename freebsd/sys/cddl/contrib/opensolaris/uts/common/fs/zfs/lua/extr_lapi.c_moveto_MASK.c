
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_8__ {int func; } ;
typedef int TValue ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_1, TValue *VAR_2, int VAR_3) {
  TValue *VAR_4 = FUNC_2(VAR_1, VAR_3);
  FUNC_0(VAR_1, VAR_4);
  FUNC_4(VAR_1, VAR_4, VAR_2);
  if (VAR_3 < VAR_0)
    FUNC_3(VAR_1, FUNC_1(VAR_1->ci->func), VAR_2);


}
