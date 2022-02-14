
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_8__ {int state_machine; } ;
struct TYPE_12__ {TYPE_1__ parent; TYPE_3__* owning_controller; } ;
struct TYPE_11__ {int fis_type; } ;
struct TYPE_10__ {int uf_control; } ;
struct TYPE_9__ {TYPE_5__ parent; int d2h_reg_fis; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;
typedef TYPE_4__ SATA_FIS_HEADER_T ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (int *,int ,void**) ;
 scalar_t__ FUNC_9 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_10(
   SCIC_SDS_REQUEST_T * VAR_7,
   U32 VAR_8
)
{
   SCI_STATUS VAR_9;
   SATA_FIS_HEADER_T * VAR_10;
   U32 * VAR_11;
   SCIC_SDS_STP_REQUEST_T * VAR_12 = (SCIC_SDS_STP_REQUEST_T *)VAR_7;



   SCIC_SDS_CONTROLLER_T * VAR_13 = VAR_12->parent.owning_controller;

   FUNC_1((
      FUNC_3(VAR_12),
      VAR_0,
      "scic_sds_stp_request_non_data_await_d2h_frame_handler(0x%x, 0x%x) enter\n",
      VAR_12, VAR_8
   ));

   VAR_9 = FUNC_9(
               &(VAR_13->uf_control),
               VAR_8,
               (void**) &VAR_10
            );

   if (VAR_9 == VAR_4)
   {
      switch (VAR_10->fis_type)
      {
      case 128:
         FUNC_8(
            &(VAR_13->uf_control),
            VAR_8,
            (void**) &VAR_11
         );

         FUNC_5(
            &VAR_12->d2h_reg_fis, (U32 *)VAR_10, VAR_11
         );


         FUNC_7(
            &VAR_12->parent,
            VAR_5,
            VAR_2
         );
         break;

      default:
         FUNC_2((
            FUNC_3(VAR_12),
            VAR_0,
            "IO Request:0x%x Frame Id:%d protocol violation occurred\n",
            VAR_12, VAR_8
         ));

         FUNC_7(
            &VAR_12->parent,
            VAR_6,
            VAR_3
         );
         break;
      }

      FUNC_4(
         &VAR_12->parent.parent.state_machine,
         VAR_1
      );


      FUNC_6(
         VAR_13, VAR_8
      );
   }
   else
   {
      FUNC_0((
         FUNC_3(VAR_12),
         VAR_0,
         "SCIC IO Request 0x%x could not get frame header for frame index %d, status %x\n",
         VAR_12, VAR_8, VAR_9
      ));
   }

   return VAR_9;
}
