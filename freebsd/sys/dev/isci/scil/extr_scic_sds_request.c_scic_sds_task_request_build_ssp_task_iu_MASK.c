
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_6__ {scalar_t__ command_buffer; } ;
struct TYPE_5__ {int task_tag; int task_function; int lun_lower; scalar_t__ lun_upper; } ;
typedef TYPE_1__ SCI_SSP_TASK_IU_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_REQUEST_T *VAR_0
)
{
   SCI_SSP_TASK_IU_T *VAR_1;
   void *VAR_2;

   VAR_1 =
      (SCI_SSP_TASK_IU_T *)VAR_0->command_buffer;

   VAR_2 = FUNC_3(VAR_0);

   VAR_1->lun_upper = 0;
   VAR_1->lun_lower = FUNC_2(VAR_2);

   ((U32 *)VAR_1)[2] = 0;

   VAR_1->task_function =
      FUNC_0(VAR_2);
   VAR_1->task_tag =
      FUNC_1(VAR_2);
}
