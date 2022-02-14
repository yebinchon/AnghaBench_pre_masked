
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ task_context_buffer; scalar_t__ response_buffer; } ;
struct TYPE_12__ {int * data; } ;
struct TYPE_9__ {scalar_t__ address_modifier; int length; int address_lower; int address_upper; } ;
struct TYPE_11__ {int B; TYPE_1__ A; } ;
struct TYPE_10__ {int transfer_length_bytes; TYPE_3__ sgl_pair_ab; } ;
typedef TYPE_2__ SCU_TASK_CONTEXT_T ;
typedef TYPE_3__ SCU_SGL_ELEMENT_PAIR_T ;
typedef TYPE_4__ SCI_SSP_RESPONSE_IU_T ;
typedef int SCI_PHYSICAL_ADDRESS ;
typedef TYPE_5__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_5__*,char*,int *) ;
 int FUNC_4 (TYPE_5__*) ;

void FUNC_5(
   SCIC_SDS_REQUEST_T * VAR_0
)
{
   void *VAR_1;
   SCU_SGL_ELEMENT_PAIR_T *VAR_2 = ((void*)0);
   SCU_TASK_CONTEXT_T *VAR_3;
   SCI_PHYSICAL_ADDRESS VAR_4;

   SCI_SSP_RESPONSE_IU_T * VAR_5 =
      (SCI_SSP_RESPONSE_IU_T *)VAR_0->response_buffer;
   VAR_1 = (void*)&VAR_5->data[0];

   VAR_3 = (SCU_TASK_CONTEXT_T *)VAR_0->task_context_buffer;
   VAR_2 = &VAR_3->sgl_pair_ab;

   FUNC_3(
      FUNC_4(VAR_0),
      VAR_0,
      ((char *)VAR_1),
      &VAR_4
   );

   VAR_2->A.address_upper = FUNC_2(VAR_4);
   VAR_2->A.address_lower = FUNC_1(VAR_4);
   VAR_2->A.length = VAR_3->transfer_length_bytes;
   VAR_2->A.address_modifier = 0;

   FUNC_0(VAR_2->B);
}
