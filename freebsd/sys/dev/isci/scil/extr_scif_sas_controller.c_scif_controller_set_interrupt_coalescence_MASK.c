
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
typedef scalar_t__ U16 ;
struct TYPE_3__ {int core_object; scalar_t__ saved_interrupt_coalesce_timeout; scalar_t__ saved_interrupt_coalesce_number; } ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   U32 VAR_2,
   U32 VAR_3
)
{
   SCIF_SAS_CONTROLLER_T * VAR_4 = (SCIF_SAS_CONTROLLER_T * )VAR_1;





   if (FUNC_2(VAR_4))
   {
      U32 VAR_5;
      U32 VAR_6;
      SCI_STATUS VAR_7;


      FUNC_0 (
         VAR_4->core_object, &VAR_5, &VAR_6);



      VAR_7 = FUNC_1(
                       VAR_4->core_object, VAR_2, VAR_3);

      if ( VAR_7 == VAR_0 )
      {
         VAR_4->saved_interrupt_coalesce_number = (U16)VAR_2;
         VAR_4->saved_interrupt_coalesce_timeout = VAR_3;
      }


      FUNC_1(
         VAR_4->core_object, VAR_5, VAR_6);

      return VAR_7;
   }
   else
   {


      return FUNC_1(
                VAR_4->core_object, VAR_2, VAR_3);
   }
}
