
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_6__ {int frame_type; } ;
struct TYPE_7__ {TYPE_1__ ssp; } ;
struct TYPE_8__ {int ssp_command_iu_length; scalar_t__ transfer_length_bytes; int task_type; TYPE_2__ type; } ;
typedef TYPE_3__ SCU_TASK_CONTEXT_T ;
typedef int SCI_SSP_COMMAND_IU_T ;
typedef int SCI_IO_REQUEST_DATA_DIRECTION ;
typedef int SCIC_SDS_REQUEST_T ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_REQUEST_T *VAR_3,
   SCI_IO_REQUEST_DATA_DIRECTION VAR_4,
   U32 VAR_5
)
{
   SCU_TASK_CONTEXT_T *VAR_6;

   VAR_6 = FUNC_1(VAR_3);

   FUNC_2(VAR_3, VAR_6);

   VAR_6->ssp_command_iu_length = sizeof(SCI_SSP_COMMAND_IU_T) / sizeof(U32);
   VAR_6->type.ssp.frame_type = VAR_0;

   switch (VAR_4)
   {
   case 130:
   case 128:
      VAR_6->task_type = VAR_1;
      break;
   case 129:
      VAR_6->task_type = VAR_2;
      break;
   }

   VAR_6->transfer_length_bytes = VAR_5;

   if (VAR_6->transfer_length_bytes > 0)
   {
      FUNC_0(VAR_3);
   }
}
