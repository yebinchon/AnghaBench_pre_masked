
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* state_handlers; } ;
struct TYPE_8__ {int (* reset_handler ) (int *) ;} ;
struct TYPE_9__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__* SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;

SCI_STATUS FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_2
)
{
   SCI_STATUS VAR_3 = VAR_1;
   SCIC_SDS_CONTROLLER_T *VAR_4;
   VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_2(VAR_2),
      VAR_0,
      "scic_controller_reset(0x%x) enter\n",
      VAR_2
   ));

   if (VAR_4->state_handlers->parent.reset_handler != ((void*)0))
   {
      VAR_3 = VAR_4->state_handlers->parent.reset_handler(
                  (SCI_BASE_CONTROLLER_T *)VAR_2
               );
   }
   else
   {
      FUNC_1((
         FUNC_2(VAR_4),
         VAR_0,
         "SCIC Controller reset operation requested in invalid state %d\n",
         FUNC_3(
            FUNC_4(VAR_4))
      ));
   }

   return VAR_3;
}
