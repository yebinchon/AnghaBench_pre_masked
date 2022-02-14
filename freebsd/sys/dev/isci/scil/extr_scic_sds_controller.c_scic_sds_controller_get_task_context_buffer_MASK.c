
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_3__ {size_t task_context_entries; int * task_context_table; } ;
typedef int SCU_TASK_CONTEXT_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 size_t FUNC_0 (size_t) ;

SCU_TASK_CONTEXT_T * FUNC_1(
   SCIC_SDS_CONTROLLER_T * VAR_0,
   U16 VAR_1
)
{
   U16 VAR_2 = FUNC_0(VAR_1);

   if (VAR_2 < VAR_0->task_context_entries)
   {
      return &VAR_0->task_context_table[VAR_2];
   }

   return ((void*)0);
}
