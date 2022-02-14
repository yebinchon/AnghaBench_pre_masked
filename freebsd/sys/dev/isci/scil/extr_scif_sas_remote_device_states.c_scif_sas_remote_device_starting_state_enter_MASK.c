
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ operation_status; TYPE_3__* domain; int parent; TYPE_2__* state_handlers; int core_object; int starting_substate_machine; int destination_state; } ;
struct TYPE_9__ {int controller; } ;
struct TYPE_7__ {int (* fail_handler ) (int *) ;} ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static
void FUNC_7(
   SCI_BASE_OBJECT_T *VAR_8
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_8;

   FUNC_1(
      VAR_9,
      VAR_7,
      VAR_4
   );

   FUNC_0((
      FUNC_2(VAR_9),
      VAR_0 | VAR_1,
      "RemoteDevice:0x%x starting/configuring\n",
      VAR_9
   ));

   VAR_9->destination_state =
      VAR_3;

   FUNC_3(&VAR_9->starting_substate_machine);

   VAR_9->operation_status = FUNC_4(
                                    VAR_9->core_object,
                                    VAR_2
                                 );

   if (VAR_9->operation_status != VAR_6)
   {
      VAR_9->state_handlers->parent.fail_handler(&VAR_9->parent);



      FUNC_5(VAR_9->domain->controller,
              VAR_5);
   }
}
