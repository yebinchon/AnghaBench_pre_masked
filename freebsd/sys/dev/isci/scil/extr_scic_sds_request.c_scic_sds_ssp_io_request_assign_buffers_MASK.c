
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ was_tag_assigned_by_user; int task_context_buffer; int sgl_element_pair_buffer; int response_buffer; int command_buffer; } ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(
   SCIC_SDS_REQUEST_T *VAR_1
)
{
   VAR_1->command_buffer =
      FUNC_1(VAR_1);
   VAR_1->response_buffer =
      FUNC_2(VAR_1);
   VAR_1->sgl_element_pair_buffer =
      FUNC_3(VAR_1);
   VAR_1->sgl_element_pair_buffer =
      FUNC_0(VAR_1->sgl_element_pair_buffer);

   if (VAR_1->was_tag_assigned_by_user == VAR_0)
   {
      VAR_1->task_context_buffer =
         FUNC_4(VAR_1);
   }
}
