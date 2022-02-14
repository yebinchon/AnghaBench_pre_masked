
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_10__ {TYPE_2__* state_handlers; } ;
struct TYPE_8__ {int (* stop_handler ) (int *,int ) ;} ;
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
 int FUNC_5 (int *,int ) ;

SCI_STATUS FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   U32 VAR_3
)
{
   SCI_STATUS VAR_4 = VAR_1;
   SCIC_SDS_CONTROLLER_T *VAR_5;
   VAR_5 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_2(VAR_2),
      VAR_0,
      "scic_controller_stop(0x%x, 0x%d) enter\n",
      VAR_2, VAR_3
   ));

   if (VAR_5->state_handlers->parent.stop_handler != ((void*)0))
   {
      VAR_4 = VAR_5->state_handlers->parent.stop_handler(
                  (SCI_BASE_CONTROLLER_T *)VAR_2, VAR_3
               );
   }
   else
   {
      FUNC_1((
         FUNC_2(VAR_5),
         VAR_0,
         "SCIC Controller stop operation requested in invalid state %d\n",
         FUNC_3(
            FUNC_4(VAR_5))
      ));
   }

   return VAR_4;
}
