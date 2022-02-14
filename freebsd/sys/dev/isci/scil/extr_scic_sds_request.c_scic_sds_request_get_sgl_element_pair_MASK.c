
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int * sgl_element_pair_buffer; scalar_t__ task_context_buffer; } ;
struct TYPE_4__ {int sgl_pair_cd; int sgl_pair_ab; } ;
typedef TYPE_1__ SCU_TASK_CONTEXT_T ;
typedef int SCU_SGL_ELEMENT_PAIR_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;



SCU_SGL_ELEMENT_PAIR_T *FUNC_0(
   SCIC_SDS_REQUEST_T *VAR_0,
   U32 VAR_1
)
{
   SCU_TASK_CONTEXT_T *VAR_2;

   VAR_2 = (SCU_TASK_CONTEXT_T *)VAR_0->task_context_buffer;

   if (VAR_1 == 0)
   {
      return &VAR_2->sgl_pair_ab;
   }
   else if (VAR_1 == 1)
   {
      return &VAR_2->sgl_pair_cd;
   }

   return &VAR_0->sgl_element_pair_buffer[VAR_1 - 2];
}
