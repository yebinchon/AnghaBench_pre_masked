
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_4__ {int (* abort_handler ) (int *) ;} ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   void * VAR_1
)
{
   SCIF_SAS_REQUEST_T * VAR_2 = (SCIF_SAS_REQUEST_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scif_sas_internal_io_request_timeout_handler(0x%x) enter\n",
      VAR_1
   ));

   VAR_2->state_handlers->abort_handler(&VAR_2->parent);
}
