
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* state_handlers; } ;
struct TYPE_7__ {int (* remote_device_started_handler ) (TYPE_2__*,int *) ;} ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;

void FUNC_5(
   SCIC_SDS_CONTROLLER_T * VAR_1,
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2
)
{
   if (VAR_1->state_handlers->remote_device_started_handler != ((void*)0))
   {
      VAR_1->state_handlers->remote_device_started_handler(
         VAR_1, VAR_2
      );
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_1),
         VAR_0,
         "SCIC Controller 0x%x remote device started event from device 0x%x in unexpected state %d\n",
         VAR_1,
         VAR_2,
         FUNC_2(
            FUNC_3(VAR_1))
      ));
   }
}
