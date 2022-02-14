
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_4__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_BASE_REQUEST_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_REQUEST_T * VAR_1
)
{
   SCIF_SAS_REQUEST_T * VAR_2 = (SCIF_SAS_REQUEST_T *) VAR_1;

   FUNC_0(
      &VAR_1->state_machine, VAR_0
   );

   return VAR_2->status;
}
