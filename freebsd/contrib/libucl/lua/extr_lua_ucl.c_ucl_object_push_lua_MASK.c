
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int lua_State ;




 int FUNC_0 (int *,TYPE_1__ const*) ;
 int FUNC_1 (int *,TYPE_1__ const*,int) ;
 int FUNC_2 (int *,TYPE_1__ const*,int) ;

int
FUNC_3 (lua_State *VAR_0, const ucl_object_t *VAR_1, bool VAR_2)
{
 switch (VAR_1->type) {
 case 128:
  return FUNC_1 (VAR_0, VAR_1, VAR_2);
 case 129:
  return FUNC_0 (VAR_0, VAR_1);
 default:
  return FUNC_2 (VAR_0, VAR_1, VAR_2);
 }
}
