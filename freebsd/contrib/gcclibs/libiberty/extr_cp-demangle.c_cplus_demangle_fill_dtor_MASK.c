
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; struct demangle_component* name; } ;
struct TYPE_4__ {TYPE_1__ s_dtor; } ;
struct demangle_component {TYPE_2__ u; int type; } ;
typedef enum gnu_v3_dtor_kinds { ____Placeholder_gnu_v3_dtor_kinds } gnu_v3_dtor_kinds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0 (struct demangle_component *VAR_3,
                          enum gnu_v3_dtor_kinds VAR_4,
                          struct demangle_component *VAR_5)
{
  if (VAR_3 == ((void*)0)
      || VAR_5 == ((void*)0)
      || (VAR_4 < VAR_2
   && VAR_4 > VAR_1))
    return 0;
  VAR_3->type = VAR_0;
  VAR_3->u.s_dtor.kind = VAR_4;
  VAR_3->u.s_dtor.name = VAR_5;
  return 1;
}
