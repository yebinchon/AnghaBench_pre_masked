
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_9__ {int state_machine; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_10__ {TYPE_2__ parent; int core_object; TYPE_1__ hprq; int * domains; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_9(
   SCI_BASE_CONTROLLER_T * VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T *)VAR_6;
   SCI_STATUS VAR_8;
   U32 VAR_9;

   FUNC_1(*(
      FUNC_2(VAR_7),
      VAR_0 | VAR_1,
      "scif_sas_controller_reset_initialize_handler(0x%x) enter\n",
      VAR_6
   ));

   FUNC_3(
      &VAR_7->parent.state_machine,
      VAR_3
   );

   FUNC_6(VAR_7);


   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
      FUNC_8(&VAR_7->domains[VAR_9]);

   FUNC_5(VAR_7, &VAR_7->hprq.lock);


   VAR_8 = FUNC_4(VAR_7->core_object);
   if (VAR_8 == VAR_5)
   {
      FUNC_3(
         &VAR_7->parent.state_machine,
         VAR_2
      );
   }

   if (VAR_8 != VAR_5)
   {

      FUNC_7(VAR_7);

      FUNC_0((
         FUNC_2(VAR_7),
         VAR_0 | VAR_1,
         "Controller:0x%x Status:0x%x unable to successfully initialize.\n",
         VAR_7, VAR_8
      ));
   }

   return VAR_8;
}
