
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; } ;
struct TYPE_4__ {scalar_t__ request_count; scalar_t__ destination_state; int core_object; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_4;
   VAR_6->request_count--;


   if (VAR_6->request_count == 0 )
   {
      if (VAR_6->destination_state == VAR_1)
      {



         FUNC_0(
            &VAR_6->parent.state_machine,
            VAR_2
         );
      }
      else
      {


         FUNC_1(
            VAR_6->core_object, VAR_0);
      }
   }

   return VAR_3;
}
