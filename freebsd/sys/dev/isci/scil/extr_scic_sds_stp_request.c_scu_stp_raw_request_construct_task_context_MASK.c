
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_11__ {int parent; } ;
struct TYPE_8__ {int fis_type; } ;
struct TYPE_9__ {TYPE_1__ stp; } ;
struct TYPE_10__ {int transfer_length_bytes; TYPE_2__ type; int task_type; int priority; scalar_t__ control_frame; } ;
typedef TYPE_3__ SCU_TASK_CONTEXT_T ;
typedef TYPE_4__ SCIC_SDS_STP_REQUEST_T ;
typedef int SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;

void FUNC_1(
   SCIC_SDS_STP_REQUEST_T * VAR_3,
   SCU_TASK_CONTEXT_T * VAR_4
)
{
   FUNC_0(&VAR_3->parent, VAR_4);

   VAR_4->control_frame = 0;
   VAR_4->priority = VAR_1;
   VAR_4->task_type = VAR_2;
   VAR_4->type.stp.fis_type = VAR_0;
   VAR_4->transfer_length_bytes = sizeof(SATA_FIS_REG_H2D_T) - sizeof(U32);
}
