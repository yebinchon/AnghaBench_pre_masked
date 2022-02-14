
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int internal_io_timer; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(
   SCIF_SAS_CONTROLLER_T * VAR_1,
   SCIF_SAS_INTERNAL_IO_REQUEST_T * VAR_2,
   SCI_STATUS VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scif_sas_internal_io_request_complete(0x%x, 0x%x, 0x%x) enter\n",
       VAR_1, VAR_2, VAR_3
   ));

   FUNC_2(VAR_1, VAR_2->internal_io_timer);
   FUNC_3(VAR_1, VAR_2);
}
