
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ud; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;
struct ucl_lua_funcdata {int dummy; } ;


 scalar_t__ VAR_0 ;

struct ucl_lua_funcdata*
FUNC_0 (const ucl_object_t *VAR_1)
{
 if (VAR_1 == ((void*)0) || VAR_1->type != VAR_0) {
  return ((void*)0);
 }

 return (struct ucl_lua_funcdata*)VAR_1->value.ud;
}
