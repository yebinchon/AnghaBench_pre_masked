
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_10__ {TYPE_3__ parent; } ;
struct TYPE_8__ {TYPE_1__* domain; } ;
struct TYPE_7__ {int * controller; } ;
typedef TYPE_4__ SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int *,TYPE_4__*) ;

void FUNC_1(
   SCIF_SAS_TASK_REQUEST_T * VAR_0
)
{
   SCIF_SAS_CONTROLLER_T * VAR_1 =
      VAR_0->parent.device->domain->controller;
   FUNC_0(VAR_1, VAR_0);
}
