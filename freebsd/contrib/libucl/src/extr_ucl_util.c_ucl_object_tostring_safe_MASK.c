
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int flags; } ;
typedef TYPE_1__ ucl_object_t ;


 int VAR_0 ;

 char* FUNC_0 (TYPE_1__ const*) ;

bool
FUNC_1 (const ucl_object_t *VAR_1, const char **VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  return 0;
 }

 switch (VAR_1->type) {
 case 128:
  if (!(VAR_1->flags & VAR_0)) {
   *VAR_2 = FUNC_0 (VAR_1);
  }
  break;
 default:
  return 0;
 }

 return 1;
}
