
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_9__ {int uf_control; } ;
struct TYPE_8__ {scalar_t__ fis_type; } ;
struct TYPE_6__ {TYPE_4__* owning_controller; } ;
struct TYPE_7__ {TYPE_1__ parent; int d2h_reg_fis; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_3__ SATA_FIS_HEADER_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *,int ,void**) ;
 scalar_t__ FUNC_6 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{
   SCI_STATUS VAR_5;
   SATA_FIS_HEADER_T * VAR_6;
   U32 * VAR_7;
   SCIC_SDS_STP_REQUEST_T * VAR_8;

   VAR_8 = (SCIC_SDS_STP_REQUEST_T *)VAR_3;

   FUNC_1((
      FUNC_2(VAR_8),
      VAR_1,
      "scic_sds_stp_packet_request_command_phase_await_d2h_frame_handler(0x%x, 0x%x) enter\n",
      VAR_8, VAR_4
   ));

   VAR_5 = FUNC_6(
      &(VAR_8->parent.owning_controller->uf_control),
      VAR_4,
      (void**) &VAR_6
   );

   if (VAR_5 == VAR_2)
   {
      FUNC_0(VAR_6->fis_type == VAR_0);



      FUNC_5(
         &(VAR_8->parent.owning_controller->uf_control),
         VAR_4,
         (void**) &VAR_7
      );

      FUNC_3(
         &VAR_8->d2h_reg_fis, (U32 *)VAR_6, VAR_7
      );


      FUNC_4(
         VAR_8->parent.owning_controller, VAR_4
      );
   }

   return VAR_5;
}
