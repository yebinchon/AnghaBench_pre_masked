
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sv; } ;
struct TYPE_5__ {scalar_t__ len; int flags; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char,scalar_t__) ;

bool
FUNC_1 (const ucl_object_t *VAR_2)
{
 if (VAR_2->len > VAR_0 || (VAR_2->flags & VAR_1)) {

  if (FUNC_0 (VAR_2->value.sv, '\n', VAR_2->len) != ((void*)0)) {
   return 1;
  }
 }

 return 0;
}
