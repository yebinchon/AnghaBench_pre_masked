
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct STP_TASK_CONTEXT {int dummy; } ;
typedef int U8 ;
typedef int U32 ;
struct TYPE_10__ {int fis_type; } ;
struct TYPE_9__ {TYPE_6__* command_buffer; int user_request; } ;
struct TYPE_7__ {TYPE_6__ stp; } ;
struct TYPE_8__ {int transfer_length_bytes; TYPE_1__ type; } ;
typedef TYPE_2__ SCU_TASK_CONTEXT_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;
typedef int SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(
   SCIC_SDS_REQUEST_T * VAR_1,
   SCU_TASK_CONTEXT_T * VAR_2
)
{
   void * VAR_3 =
      FUNC_2(VAR_1->user_request);

   U32 VAR_4 =
      FUNC_3(VAR_1->user_request);

   FUNC_1(VAR_1->command_buffer, 0, sizeof(SATA_FIS_REG_H2D_T));
   FUNC_0( ((U8 *)VAR_1->command_buffer+sizeof(U32)), VAR_3, VAR_4);

   FUNC_1(&(VAR_2->type.stp), 0, sizeof(struct STP_TASK_CONTEXT));
   VAR_2->type.stp.fis_type = VAR_0;



   VAR_2->transfer_length_bytes = 12;
}
