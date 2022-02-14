
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_context_buffer; int io_tag; } ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_3,
   SCIC_SDS_REQUEST_T *VAR_4
)
{
   VAR_0 *VAR_2;

   VAR_2 = FUNC_2(
                            VAR_3, VAR_4->io_tag
                         );

   FUNC_1(
      VAR_2,
      VAR_4->task_context_buffer,
      FUNC_0(VAR_0, VAR_1)
   );




   VAR_4->task_context_buffer = VAR_2;
}
