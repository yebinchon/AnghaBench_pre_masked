
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_3__ {int (* stop_handler ) (int *,int ) ;} ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   U32 VAR_5
)
{
   SCIF_SAS_CONTROLLER_T * VAR_6 = (SCIF_SAS_CONTROLLER_T*) VAR_4;


   if (VAR_4 == VAR_3)
      return VAR_2;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scif_controller_stop(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));

   return VAR_6->state_handlers->
          stop_handler(&VAR_6->parent, VAR_5);

}
