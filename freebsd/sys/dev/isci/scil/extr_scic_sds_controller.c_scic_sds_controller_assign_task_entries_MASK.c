
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {scalar_t__ task_context_entries; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

void FUNC_4(
   SCIC_SDS_CONTROLLER_T *VAR_3
)
{
   U32 VAR_4;



   VAR_4 = FUNC_2(VAR_3, 0);

   VAR_4 =
      (
          VAR_4
        | (FUNC_1(VAR_2, 0))
        | (FUNC_1(VAR_0, VAR_3->task_context_entries - 1))
        | (FUNC_0(VAR_1))
      );

   FUNC_3(VAR_3, 0, VAR_4);
}
