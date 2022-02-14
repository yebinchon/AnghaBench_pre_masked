
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_15__ {int state_machine; } ;
struct TYPE_19__ {TYPE_4__ parent; int started_substate_machine; int saved_rx_frame_index; TYPE_6__* owning_controller; } ;
struct TYPE_18__ {scalar_t__ fis_type; } ;
struct TYPE_17__ {int uf_control; } ;
struct TYPE_12__ {int * sgl_pair; } ;
struct TYPE_13__ {scalar_t__ pio_transfer_bytes; int ending_status; TYPE_1__ request_current; } ;
struct TYPE_14__ {TYPE_2__ pio; } ;
struct TYPE_16__ {TYPE_9__ parent; TYPE_3__ type; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_5__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_6__ SCIC_SDS_CONTROLLER_T ;
typedef TYPE_7__ SATA_FIS_HEADER_T ;
typedef int SATA_FIS_DATA_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_9__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_7 (int *,int ,void**) ;
 scalar_t__ FUNC_8 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_9(
   SCIC_SDS_REQUEST_T * VAR_10,
   U32 VAR_11
)
{
   SCI_STATUS VAR_12;
   SATA_FIS_HEADER_T * VAR_13;
   SATA_FIS_DATA_T * VAR_14;
   SCIC_SDS_STP_REQUEST_T * VAR_15;
   SCIC_SDS_CONTROLLER_T * VAR_16;

   VAR_15 = (SCIC_SDS_STP_REQUEST_T *)VAR_10;



   VAR_16 = VAR_15->parent.owning_controller;

   FUNC_1((
      FUNC_2(VAR_15),
      VAR_2,
      "scic_sds_stp_request_pio_data_in_await_data_frame_handler(0x%x, 0x%x) enter\n",
      VAR_15, VAR_11
   ));

   VAR_12 = FUNC_8(
      &(VAR_16->uf_control),
      VAR_11,
      (void**) &VAR_13
   );

   if (VAR_12 == VAR_7)
   {
      if (VAR_13->fis_type == VAR_1)
      {
         if (VAR_15->type.pio.request_current.sgl_pair == ((void*)0))
         {
            VAR_15->parent.saved_rx_frame_index = VAR_11;
            VAR_15->type.pio.pio_transfer_bytes = 0;
         }
         else
         {
            VAR_12 = FUNC_7(
               &(VAR_16->uf_control),
               VAR_11,
               (void**) &VAR_14
            );

            VAR_12 = FUNC_6(VAR_15, (U8 *)VAR_14);


            FUNC_4(
               VAR_16,
               VAR_11
            );
         }



         if (
               (VAR_12 == VAR_7)
            && (VAR_15->type.pio.pio_transfer_bytes == 0)
            )
         {
            if ((VAR_15->type.pio.ending_status & VAR_0) == 0)
            {
               FUNC_5(
                  &VAR_15->parent,
                  VAR_8,
                  VAR_6
               );

               FUNC_3(
                  &VAR_15->parent.parent.state_machine,
                  VAR_4
               );
            }
            else
            {
               FUNC_3(
                  &VAR_15->parent.started_substate_machine,
                  VAR_3
               );
            }
         }
      }
      else
      {
         FUNC_0((
            FUNC_2(VAR_15),
            VAR_2,
            "SCIC PIO Request 0x%x received frame %d with fis type 0x%02x when expecting a data fis.\n",
            VAR_15, VAR_11, VAR_13->fis_type
         ));

         FUNC_5(
            &VAR_15->parent,
            VAR_9,
            VAR_5
         );

         FUNC_3(
            &VAR_15->parent.parent.state_machine,
            VAR_4
         );


         FUNC_4(
            VAR_16,
            VAR_11
         );
      }
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_15),
         VAR_2,
         "SCIC IO Request 0x%x could not get frame header for frame index %d, status %x\n",
         VAR_15, VAR_11, VAR_12
      ));
   }

   return VAR_12;
}
