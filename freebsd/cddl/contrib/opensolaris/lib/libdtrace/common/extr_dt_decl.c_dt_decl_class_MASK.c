
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ds_class; } ;
typedef TYPE_1__ dt_scope_t ;
typedef scalar_t__ dt_dclass_t ;
struct TYPE_4__ {TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* VAR_2 ;

void
FUNC_1(dt_dclass_t VAR_3)
{
 dt_scope_t *VAR_4 = &VAR_2->pcb_dstack;

 if (VAR_4->ds_class != VAR_0) {
  FUNC_0(VAR_1, "only one storage class allowed "
      "in a declaration\n");
 }

 VAR_4->ds_class = VAR_3;
}
