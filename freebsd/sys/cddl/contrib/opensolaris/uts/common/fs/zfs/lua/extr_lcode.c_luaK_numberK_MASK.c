
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int r ;
struct TYPE_9__ {int * top; } ;
typedef TYPE_2__ lua_State ;
typedef scalar_t__ lua_Number ;
struct TYPE_10__ {TYPE_1__* ls; } ;
struct TYPE_8__ {TYPE_2__* L; } ;
typedef int TValue ;
typedef TYPE_3__ FuncState ;


 int FUNC_0 (TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

int FUNC_5 (FuncState *VAR_0, lua_Number VAR_1) {
  int VAR_2;
  lua_State *VAR_3 = VAR_0->ls->L;
  TValue VAR_4;
  FUNC_3(&VAR_4, VAR_1);
  if (VAR_1 == 0 || FUNC_2(((void*)0), VAR_1)) {

    FUNC_4(VAR_3, VAR_3->top++, FUNC_1(VAR_3, (char *)&VAR_1, sizeof(VAR_1)));
    VAR_2 = FUNC_0(VAR_0, VAR_3->top - 1, &VAR_4);
    VAR_3->top--;
  }
  else
    VAR_2 = FUNC_0(VAR_0, &VAR_4, &VAR_4);
  return VAR_2;
}
