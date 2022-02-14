
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ current_state_id; } ;
struct TYPE_5__ {TYPE_2__ state_machine; } ;
struct TYPE_7__ {int core_object; void* internal_request_entries; TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_CONTROLLER_MODE ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_7,
   SCI_CONTROLLER_MODE VAR_8
)
{
   SCIF_SAS_CONTROLLER_T * VAR_9 = (SCIF_SAS_CONTROLLER_T*) VAR_7;
   SCI_STATUS VAR_10 = VAR_6;

   if (
         (VAR_9->parent.state_machine.current_state_id
          == VAR_3)
      || (VAR_9->parent.state_machine.current_state_id
          == VAR_2)
      )
   {
      switch (VAR_8)
      {
      case 128:
         VAR_9->internal_request_entries =
            FUNC_0(VAR_9->internal_request_entries, VAR_0);
         FUNC_2(VAR_9);
      break;

      case 129:
         VAR_9->internal_request_entries =
            FUNC_0(VAR_9->internal_request_entries, VAR_1);
         FUNC_2(VAR_9);
      break;

      default:
         VAR_10 = VAR_4;
      break;
      }
   }
   else
      VAR_10 = VAR_5;

   if (VAR_10 != VAR_6)
   {
      return VAR_10;
   }
   else
   {


      return FUNC_1(VAR_9->core_object, VAR_8);
   }
}
