
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ U16 ;
struct TYPE_2__ {scalar_t__* io_request_sequence; int tci_pool; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

SCI_STATUS FUNC_8(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   U16 VAR_5
)
{
   U16 VAR_6;
   U16 VAR_7;

   SCIC_SDS_CONTROLLER_T *VAR_8;
   VAR_8 = (SCIC_SDS_CONTROLLER_T *)VAR_4;

   FUNC_0(VAR_5 != VAR_1);

   FUNC_1((
      FUNC_2(VAR_4),
      VAR_0,
      "scic_controller_free_io_tag(0x%x, 0x%x) enter\n",
      VAR_4, VAR_5
   ));

   VAR_6 = FUNC_7(VAR_5);
   VAR_7 = FUNC_6(VAR_5);

   if (!FUNC_3(VAR_8->tci_pool))
   {
      if (VAR_6 == VAR_8->io_request_sequence[VAR_7])
      {
         FUNC_5(
            VAR_8->io_request_sequence[VAR_7]);

         FUNC_4(VAR_8->tci_pool, VAR_7);

         return VAR_3;
      }
   }

   return VAR_2;
}
