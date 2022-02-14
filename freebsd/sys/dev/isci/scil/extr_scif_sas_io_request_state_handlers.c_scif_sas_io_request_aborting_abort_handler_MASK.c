
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int core_object; TYPE_3__* device; } ;
struct TYPE_10__ {TYPE_4__ parent; } ;
struct TYPE_8__ {int core_object; TYPE_2__* domain; } ;
struct TYPE_7__ {TYPE_1__* controller; } ;
struct TYPE_6__ {int core_object; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_IO_REQUEST_T ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_REQUEST_T * VAR_0
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_1 = (SCIF_SAS_IO_REQUEST_T *) VAR_0;

   return FUNC_0(
             VAR_1->parent.device->domain->controller->core_object,
             VAR_1->parent.device->core_object,
             VAR_1->parent.core_object
          );
}
