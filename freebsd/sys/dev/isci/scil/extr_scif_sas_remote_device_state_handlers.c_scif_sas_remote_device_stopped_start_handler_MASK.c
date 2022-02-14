
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {int operation_status; int domain; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_REMOTE_DEVICE_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_4;

   FUNC_2(
      &VAR_5->parent.state_machine, VAR_3
   );


   if (FUNC_3(&VAR_5->parent.state_machine)
       == VAR_2)
   {
      FUNC_0((
         FUNC_1(VAR_5),
         VAR_1 | VAR_0,
         "Domain:0x%x Device:0x%x Status:0x%x failed to start\n",
         VAR_5->domain, VAR_5, VAR_5->operation_status
      ));
   }

   return VAR_5->operation_status;
}
