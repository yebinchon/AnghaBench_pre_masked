
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * terminate_requestor; } ;
typedef TYPE_1__ SCIF_SAS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIF_SAS_REQUEST_T * VAR_1
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scif_sas_request_terminate_complete(0x%x) enter\n",
      VAR_1
   ));



   if (VAR_1->terminate_requestor != ((void*)0))
      FUNC_2(VAR_1->terminate_requestor);
}
