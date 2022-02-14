
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {TYPE_1__ parent; int core_object; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

SCI_STATUS FUNC_6(
   SCIF_SAS_CONTROLLER_T * VAR_4
)
{
   SCI_STATUS VAR_5;

   FUNC_1((
      FUNC_2(VAR_4),
      VAR_0 | VAR_1,
      "scif_sas_controller_continue_to_stop (0x%x).\n",
      VAR_4
   ));


   VAR_5 = FUNC_5(VAR_4);

   if (VAR_5 == VAR_3)
   {

      VAR_5 = FUNC_4(VAR_4->core_object, 0);

      if (VAR_5 != VAR_3)
      {
         FUNC_0((
            FUNC_2(VAR_4),
            VAR_0 | VAR_1,
            "Controller:0x%x Status:0x%x unable to stop controller.\n",
            VAR_4, VAR_5
         ));

         FUNC_3(
            &VAR_4->parent.state_machine,
            VAR_2
         );
      }
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_4),
         VAR_0 | VAR_1,
         "Controller:0x%x Status:0x%x unable to stop domains.\n",
         VAR_4, VAR_5
      ));

      FUNC_3(
         &VAR_4->parent.state_machine,
         VAR_2
      );
   }

   return VAR_5;
}
