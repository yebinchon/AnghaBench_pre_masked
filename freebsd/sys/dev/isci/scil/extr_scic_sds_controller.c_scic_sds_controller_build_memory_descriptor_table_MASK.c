
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int completion_queue_entries; int remote_node_entries; int task_context_entries; int uf_control; int * memory_descriptors; } ;
typedef int SCU_TASK_CONTEXT_T ;
typedef int SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_10
)
{
   FUNC_0(
      &VAR_10->memory_descriptors[VAR_3],
      VAR_2,
      (sizeof(U32) * VAR_10->completion_queue_entries),
      (VAR_0 | VAR_1)
   );

   FUNC_0(
      &VAR_10->memory_descriptors[VAR_4],
      VAR_7,
      VAR_10->remote_node_entries * sizeof(SCU_REMOTE_NODE_CONTEXT_T),
      VAR_1
   );

   FUNC_0(
      &VAR_10->memory_descriptors[VAR_5],
      VAR_8,
      VAR_10->task_context_entries * sizeof(SCU_TASK_CONTEXT_T),
      VAR_1
   );




   FUNC_2(
      &VAR_10->uf_control
   );

   FUNC_0(
      &VAR_10->memory_descriptors[VAR_6],
      VAR_9,
      FUNC_1(VAR_10->uf_control),
      VAR_1
   );
}
