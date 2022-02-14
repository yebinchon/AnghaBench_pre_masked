
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_12__ {int protocol; scalar_t__ command_buffer; } ;
struct TYPE_10__ {int (* scic_cb_passthru_get_data_direction ) (TYPE_3__*) ;int (* scic_cb_passthru_get_transfer_length ) (TYPE_3__*) ;} ;
struct TYPE_11__ {TYPE_1__ common_callbacks; int (* scic_cb_stp_passthru_get_protocol ) (TYPE_3__*) ;int (* scic_cb_stp_passthru_get_register_fis ) (TYPE_3__*,int **) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef int SCI_IO_REQUEST_DATA_DIRECTION ;
typedef TYPE_2__ SCIC_STP_PASSTHRU_REQUEST_CALLBACKS_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;
typedef int SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int **) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

SCI_STATUS FUNC_8(
   SCI_IO_REQUEST_HANDLE_T VAR_5,
   SCIC_STP_PASSTHRU_REQUEST_CALLBACKS_T *VAR_6
)
{
   SCI_STATUS VAR_7 = VAR_3;
   SCIC_SDS_REQUEST_T * VAR_8;
   U8 VAR_9;
   U8 * VAR_10;
   U32 VAR_11;
   SCI_IO_REQUEST_DATA_DIRECTION VAR_12;

   VAR_8 = (SCIC_SDS_REQUEST_T * )VAR_5;

   FUNC_0((
      FUNC_2(VAR_5),
      VAR_0,
      "scic_io_request_construct_sata_pass_through(0x%x) enter\n",
      VAR_5
   ));

   VAR_6->scic_cb_stp_passthru_get_register_fis(VAR_8, &VAR_10);

   if (VAR_10 == ((void*)0))
   {
      VAR_7 = VAR_2;
   }

   if (VAR_7 == VAR_3)
   {

      FUNC_1 ((U8 *)VAR_8->command_buffer, (U8 *)VAR_10, sizeof(SATA_FIS_REG_H2D_T));


      VAR_9 = VAR_6->scic_cb_stp_passthru_get_protocol(VAR_8);
      VAR_11 = VAR_6->common_callbacks.scic_cb_passthru_get_transfer_length(VAR_8);
      VAR_12 = VAR_6->common_callbacks.scic_cb_passthru_get_data_direction(VAR_8);

      VAR_7 = FUNC_3(
                  VAR_8,
                  VAR_9,
                  VAR_11,
                  VAR_12,
                  VAR_4,
                  VAR_4
               );

      VAR_8->protocol = VAR_1;
   }

   return VAR_7;
}
