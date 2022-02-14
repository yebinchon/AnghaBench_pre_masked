
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct STP_TASK_CONTEXT {int dummy; } ;
typedef int U8 ;
typedef int U32 ;
struct TYPE_17__ {int user_request; TYPE_10__* command_buffer; } ;
struct TYPE_13__ {int device_preferred_cdb_length; } ;
struct TYPE_14__ {TYPE_2__ packet; } ;
struct TYPE_16__ {TYPE_3__ type; } ;
struct TYPE_11__ {int fis_type; } ;
struct TYPE_12__ {TYPE_10__ stp; } ;
struct TYPE_15__ {int sata_direction; int ssp_command_iu_length; int task_phase; scalar_t__ transfer_length_bytes; scalar_t__ stp_retry_count; TYPE_1__ type; int task_type; } ;
typedef TYPE_4__ SCU_TASK_CONTEXT_T ;
typedef TYPE_5__ SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_6__ SCIC_SDS_REQUEST_T ;
typedef int SATA_FIS_REG_H2D_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (TYPE_10__*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*) ;

void FUNC_9(
   SCIC_SDS_REQUEST_T * VAR_5,
   SCU_TASK_CONTEXT_T * VAR_6
)
{
   void * VAR_7;
   U32 VAR_8;
   SCIC_SDS_STP_REQUEST_T * VAR_9 = (SCIC_SDS_STP_REQUEST_T *)VAR_5;



   if ( FUNC_3(VAR_5->user_request)
           == VAR_1 )
   {
      VAR_6->task_type = VAR_4;
      VAR_6->sata_direction = 0;
   }
   else
   {
      VAR_6->task_type = VAR_3;
      VAR_6->sata_direction = 1;
   }


   FUNC_2(&(VAR_6->type.stp), 0, sizeof(struct STP_TASK_CONTEXT));
   VAR_6->type.stp.fis_type = VAR_0;



   FUNC_2(VAR_5->command_buffer, 0, sizeof(SATA_FIS_REG_H2D_T));

   VAR_7 =
      FUNC_6(VAR_5->user_request);

   VAR_8 =
      FUNC_7(VAR_5->user_request);

   FUNC_1(((U8 *)VAR_5->command_buffer+sizeof(U32)), VAR_7, VAR_8);

   VAR_8 =
      FUNC_0(VAR_8, VAR_9->type.packet.device_preferred_cdb_length);

   VAR_6->ssp_command_iu_length =
      ((VAR_8 % 4) == 0) ?
       (VAR_8 / 4) : ((VAR_8 / 4) + 1);


   VAR_6->task_phase = 0x1;


   VAR_6->stp_retry_count = 0;

   if (FUNC_5(VAR_5->user_request))
   {

      VAR_6->transfer_length_bytes =
         FUNC_4(VAR_5->user_request);



   }
   else
   {

      VAR_6->transfer_length_bytes = (VAR_2 + 2);

      FUNC_8(VAR_5);
   }
}
