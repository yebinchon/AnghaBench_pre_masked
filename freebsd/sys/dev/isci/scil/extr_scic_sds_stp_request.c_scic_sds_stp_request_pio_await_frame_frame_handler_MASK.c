
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_15__ {int state_machine; } ;
struct TYPE_20__ {TYPE_3__ parent; int started_substate_machine; TYPE_5__* owning_controller; } ;
struct TYPE_19__ {int fis_type; int status; } ;
struct TYPE_18__ {int ending_status; int transfter_count; } ;
struct TYPE_17__ {int uf_control; } ;
struct TYPE_12__ {int status; } ;
struct TYPE_13__ {int sat_protocol; int ending_status; int pio_transfer_bytes; } ;
struct TYPE_14__ {TYPE_1__ pio; } ;
struct TYPE_16__ {TYPE_8__ parent; TYPE_10__ d2h_reg_fis; TYPE_2__ type; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;
typedef TYPE_6__ SATA_FIS_PIO_SETUP_T ;
typedef TYPE_7__ SATA_FIS_HEADER_T ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_10__*,int *,int *) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,void**) ;
 scalar_t__ FUNC_10 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_11(
   SCIC_SDS_REQUEST_T * VAR_11,
   U32 VAR_12
)
{
   SCI_STATUS VAR_13;
   SATA_FIS_HEADER_T * VAR_14;
   U32 * VAR_15;
   SCIC_SDS_STP_REQUEST_T * VAR_16;
   SCIC_SDS_CONTROLLER_T * VAR_17;

   VAR_16 = (SCIC_SDS_STP_REQUEST_T *)VAR_11;



   VAR_17 = VAR_16->parent.owning_controller;

   FUNC_2((
      FUNC_3(VAR_16),
      VAR_3,
      "scic_sds_stp_request_pio_data_in_await_frame_frame_handler(0x%x, 0x%x) enter\n",
      VAR_16, VAR_12
   ));

   VAR_13 = FUNC_10(
      &(VAR_17->uf_control),
      VAR_12,
      (void**) &VAR_14
   );

   if (VAR_13 == VAR_9)
   {
      switch (VAR_14->fis_type)
      {
      case 130:

         FUNC_9(
            &(VAR_17->uf_control),
            VAR_12,
            (void**) &VAR_15
         );




         VAR_16->type.pio.pio_transfer_bytes =
            (U16)((SATA_FIS_PIO_SETUP_T *)(&VAR_15[-1]))->transfter_count;
         VAR_16->type.pio.ending_status =
            (U8)((SATA_FIS_PIO_SETUP_T *)(&VAR_15[-1]))->ending_status;

         FUNC_5(
            &VAR_16->d2h_reg_fis, (U32 *)VAR_14, VAR_15
         );

         VAR_16->d2h_reg_fis.status =
            VAR_16->type.pio.ending_status;


         if (VAR_16->type.pio.sat_protocol == VAR_1)
         {
         FUNC_4(
            &VAR_16->parent.started_substate_machine,
            VAR_5
            );
         }
         else if (VAR_16->type.pio.sat_protocol == VAR_2)
         {

            VAR_13 = FUNC_8 ( VAR_11);
            if (VAR_13 == VAR_9)
            {
               FUNC_4(
                  &VAR_16->parent.started_substate_machine,
                  VAR_6
               );
            }
         }
      break;

      case 128:
         FUNC_4(
            &VAR_16->parent.started_substate_machine,
            VAR_4
            );
      break;

      case 129:
         if ( (VAR_14->status & VAR_0) == 0)
         {
            FUNC_9(
               &(VAR_17->uf_control),
               VAR_12,
               (void**) &VAR_15
            );

            FUNC_5(
               &VAR_16->d2h_reg_fis, (U32 *)VAR_14, VAR_15);

            FUNC_7(
               &VAR_16->parent,
               VAR_10,
               VAR_8
            );

            FUNC_4(
               &VAR_16->parent.parent.state_machine,
               VAR_7
            );
         }
         else
         {


            FUNC_1((
               FUNC_3(VAR_16),
               VAR_3,
               "SCIC PIO Request 0x%x received D2H Register FIS with BSY status 0x%x\n",
               VAR_16, VAR_14->status
            ));
         }
         break;

         default:
         break;
         }


      FUNC_6(
         VAR_17,
         VAR_12
      );
   }
   else
   {
      FUNC_0((
         FUNC_3(VAR_16),
         VAR_3,
         "SCIC IO Request 0x%x could not get frame header for frame index %d, status %x\n",
         VAR_16, VAR_12, VAR_13
      ));
   }

   return VAR_13;
}
