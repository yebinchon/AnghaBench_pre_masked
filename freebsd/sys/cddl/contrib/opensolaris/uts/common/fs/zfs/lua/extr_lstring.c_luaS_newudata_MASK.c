
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {size_t len; int * env; int * metatable; } ;
struct TYPE_6__ {TYPE_1__ uv; } ;
typedef TYPE_2__ Udata ;
typedef int Table ;
struct TYPE_7__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ,int,int *,int ) ;
 int FUNC_1 (int *) ;

Udata *FUNC_2 (lua_State *VAR_2, size_t VAR_3, Table *VAR_4) {
  Udata *VAR_5;
  if (VAR_3 > VAR_1 - sizeof(Udata))
    FUNC_1(VAR_2);
  VAR_5 = &FUNC_0(VAR_2, VAR_0, sizeof(Udata) + VAR_3, ((void*)0), 0)->u;
  VAR_5->uv.len = VAR_3;
  VAR_5->uv.metatable = ((void*)0);
  VAR_5->uv.env = VAR_4;
  return VAR_5;
}
