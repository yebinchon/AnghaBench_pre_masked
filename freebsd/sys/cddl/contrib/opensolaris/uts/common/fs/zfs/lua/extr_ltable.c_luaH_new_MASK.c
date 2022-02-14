
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ sizearray; int * array; int flags; int * metatable; } ;
typedef TYPE_1__ Table ;
struct TYPE_6__ {TYPE_1__ h; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *,int ,int,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

Table *FUNC_3 (lua_State *VAR_1) {
  Table *VAR_2 = &FUNC_1(VAR_1, VAR_0, sizeof(Table), ((void*)0), 0)->h;
  VAR_2->metatable = ((void*)0);
  VAR_2->flags = FUNC_0(~0);
  VAR_2->array = ((void*)0);
  VAR_2->sizearray = 0;
  FUNC_2(VAR_1, VAR_2, 0);
  return VAR_2;
}
