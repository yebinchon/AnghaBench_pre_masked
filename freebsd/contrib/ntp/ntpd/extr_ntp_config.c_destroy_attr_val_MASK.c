
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* s; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ attr_val ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(
 attr_val * VAR_1
 )
{
 if (VAR_1) {
  if (VAR_0 == VAR_1->type)
   FUNC_0(VAR_1->value.s);
  FUNC_0(VAR_1);
 }
}
