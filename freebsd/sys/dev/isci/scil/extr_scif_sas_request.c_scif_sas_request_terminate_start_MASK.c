
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* device; TYPE_1__* terminate_requestor; } ;
struct TYPE_11__ {int core_object; TYPE_3__* domain; } ;
struct TYPE_10__ {TYPE_2__* controller; } ;
struct TYPE_9__ {int core_object; } ;
struct TYPE_8__ {int affected_request_count; } ;
typedef int SCI_STATUS ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_5__ SCIF_SAS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_REQUEST_T * VAR_1,
   SCI_IO_REQUEST_HANDLE_T VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scif_sas_request_terminate_start(0x%x) enter\n",
      VAR_1
   ));



   if (VAR_1->terminate_requestor != ((void*)0))
      VAR_1->terminate_requestor->affected_request_count++;

   return FUNC_2(
             VAR_1->device->domain->controller->core_object,
             VAR_1->device->core_object,
             VAR_2
          );
}
