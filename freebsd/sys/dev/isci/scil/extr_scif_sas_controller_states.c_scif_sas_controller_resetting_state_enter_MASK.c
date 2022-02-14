
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {scalar_t__ operation_status; TYPE_1__ parent; int core_object; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T * VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T *)VAR_6;

   FUNC_1(
      VAR_7,
      VAR_5,
      VAR_3
   );


   VAR_7->operation_status = FUNC_4(
                                        VAR_7->core_object
                                     );
   if (VAR_7->operation_status == VAR_4)
   {

      FUNC_3(
         &VAR_7->parent.state_machine,
         VAR_2
      );
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_7),
         VAR_0,
         "Controller: unable to successfully reset controller.\n"
      ));

      FUNC_3(
         &VAR_7->parent.state_machine,
         VAR_1
      );
   }
}
