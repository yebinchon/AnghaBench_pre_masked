
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iv; } ;
struct TYPE_5__ {int type; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;




bool
FUNC_0 (const ucl_object_t *VAR_0, bool *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  return 0;
 }
 switch (VAR_0->type) {
 case 128:
  *VAR_1 = (VAR_0->value.iv == 1);
  break;
 default:
  return 0;
 }

 return 1;
}
