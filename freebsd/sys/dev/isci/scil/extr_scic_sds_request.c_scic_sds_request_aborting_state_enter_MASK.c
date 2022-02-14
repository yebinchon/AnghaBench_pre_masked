
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* task_context_buffer; } ;
struct TYPE_4__ {int abort; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_REQUEST_T *VAR_3 = (SCIC_SDS_REQUEST_T *)VAR_2;


   VAR_3->task_context_buffer->abort = 1;

   FUNC_0(
      VAR_3,
      VAR_1,
      VAR_0
   );
}
