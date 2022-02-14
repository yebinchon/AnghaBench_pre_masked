
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int completion_queue_entries; int remote_node_entries; int task_context_entries; int uf_control; int * memory_descriptors; } ;
typedef int SCU_TASK_CONTEXT_T ;
typedef int SCU_REMOTE_NODE_CONTEXT_T ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ) ;

SCI_STATUS FUNC_2(
   SCIC_SDS_CONTROLLER_T *VAR_13
)
{
   BOOL VAR_14;

   VAR_14 = FUNC_0(
      &VAR_13->memory_descriptors[VAR_6],
      VAR_5,
      (sizeof(U32) * VAR_13->completion_queue_entries),
      (VAR_2 | VAR_3)
   );

   if (VAR_14 == VAR_0)
      return VAR_1;

   VAR_14 = FUNC_0(
      &VAR_13->memory_descriptors[VAR_7],
      VAR_10,
      VAR_13->remote_node_entries * sizeof(SCU_REMOTE_NODE_CONTEXT_T),
      VAR_3
   );

   if (VAR_14 == VAR_0)
      return VAR_1;

   VAR_14 = FUNC_0(
      &VAR_13->memory_descriptors[VAR_8],
      VAR_11,
      VAR_13->task_context_entries * sizeof(SCU_TASK_CONTEXT_T),
      VAR_3
   );

   if (VAR_14 == VAR_0)
      return VAR_1;

   VAR_14 = FUNC_0(
      &VAR_13->memory_descriptors[VAR_9],
      VAR_12,
      FUNC_1(VAR_13->uf_control),
      VAR_3
   );

   if (VAR_14 == VAR_0)
      return VAR_1;

   return VAR_4;
}
