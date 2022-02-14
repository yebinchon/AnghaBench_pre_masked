
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_10__ {int uf_control; } ;
struct TYPE_9__ {scalar_t__ fis_type; } ;
struct TYPE_8__ {TYPE_5__* owning_controller; } ;
struct TYPE_7__ {int d2h_reg_fis; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;
typedef TYPE_3__ SATA_FIS_HEADER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int *,int ,void**) ;
 scalar_t__ FUNC_5 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{
   SCI_STATUS VAR_5;
   SATA_FIS_HEADER_T * VAR_6;
   U32 * VAR_7;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_1,
      "scic_sds_stp_pio_request_data_in_await_frame_frame_handler(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   VAR_5 = FUNC_5(
      &VAR_3->owning_controller->uf_control,
      VAR_4,
      (void**) &VAR_6
   );

   if (
         (VAR_5 == VAR_2)
      && (VAR_6->fis_type == VAR_0)
      )
   {
      FUNC_4(
         &VAR_3->owning_controller->uf_control,
         VAR_4,
         (void**) &VAR_7
      );

      FUNC_2(
         &((SCIC_SDS_STP_REQUEST_T *)VAR_3)->d2h_reg_fis,
         (U32 *)VAR_6,
         VAR_7
      );
   }

   FUNC_3(
      VAR_3->owning_controller, VAR_4);

   return VAR_5;
}
