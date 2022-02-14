
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {int frame_type; } ;
struct TYPE_6__ {TYPE_2__ ssp; } ;
struct TYPE_8__ {int control_frame; int ssp_command_iu_length; TYPE_1__ type; scalar_t__ transfer_length_bytes; int task_type; int priority; } ;
typedef TYPE_3__ SCU_TASK_CONTEXT_T ;
typedef int SCI_SSP_TASK_IU_T ;
typedef int SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_REQUEST_T *VAR_3
)
{
   SCU_TASK_CONTEXT_T *VAR_4;

   VAR_4 = FUNC_0(VAR_3);

   FUNC_1(VAR_3, VAR_4);

   VAR_4->control_frame = 1;
   VAR_4->priority = VAR_1;
   VAR_4->task_type = VAR_2;
   VAR_4->transfer_length_bytes = 0;
   VAR_4->type.ssp.frame_type = VAR_0;
   VAR_4->ssp_command_iu_length = sizeof(SCI_SSP_TASK_IU_T) / sizeof(U32);
}
