
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_15__ {int uf_control; } ;
struct TYPE_14__ {scalar_t__ fis_type; } ;
struct TYPE_13__ {scalar_t__ transfter_count; } ;
struct TYPE_11__ {int started_substate_machine; TYPE_7__* owning_controller; } ;
struct TYPE_9__ {scalar_t__ device_preferred_cdb_length; } ;
struct TYPE_10__ {TYPE_1__ packet; } ;
struct TYPE_12__ {TYPE_3__ parent; TYPE_2__ type; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_5__ SATA_FIS_PIO_SETUP_T ;
typedef TYPE_6__ SATA_FIS_HEADER_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (int *,int ,void**) ;
 scalar_t__ FUNC_7 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_8(
   SCIC_SDS_REQUEST_T * VAR_4,
   U32 VAR_5
)
{
   SCI_STATUS VAR_6;
   SATA_FIS_HEADER_T * VAR_7;
   U32 * VAR_8;
   SCIC_SDS_STP_REQUEST_T * VAR_9;

   VAR_9 = (SCIC_SDS_STP_REQUEST_T *)VAR_4;

   FUNC_2((
      FUNC_3(VAR_9),
      VAR_1,
      "scic_sds_stp_packet_request_packet_phase_await_pio_setup_frame_handler(0x%x, 0x%x) enter\n",
      VAR_9, VAR_5
   ));

   VAR_6 = FUNC_7(
      &(VAR_9->parent.owning_controller->uf_control),
      VAR_5,
      (void**) &VAR_7
   );

   if (VAR_6 == VAR_3)
   {
      FUNC_0(VAR_7->fis_type == VAR_0);



      FUNC_6(
         &(VAR_9->parent.owning_controller->uf_control),
         VAR_5,
         (void**) &VAR_8
      );




      VAR_9->type.packet.device_preferred_cdb_length =
         (U16)((SATA_FIS_PIO_SETUP_T *)(&VAR_8[-1]))->transfter_count;


      FUNC_5(
         VAR_9->parent.owning_controller, VAR_5
      );

      FUNC_4(
         &VAR_9->parent.started_substate_machine,
         VAR_2
      );
   }
   else
   {
      FUNC_1((
         FUNC_3(VAR_9),
         VAR_1,
         "SCIC IO Request 0x%x could not get frame header for frame index %d, status %x\n",
         VAR_9, VAR_5, VAR_6
      ));
   }

   return VAR_6;
}
