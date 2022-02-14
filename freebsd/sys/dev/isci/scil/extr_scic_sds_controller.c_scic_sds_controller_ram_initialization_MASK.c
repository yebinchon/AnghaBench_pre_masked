
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_17__ {int physical_address; } ;
struct TYPE_16__ {int physical_address; } ;
struct TYPE_20__ {TYPE_2__ address_table; TYPE_1__ headers; } ;
struct TYPE_19__ {TYPE_5__ uf_control; TYPE_3__* memory_descriptors; int * task_context_table; int * remote_node_context_table; int * completion_queue; } ;
struct TYPE_18__ {int physical_address; scalar_t__ virtual_address; } ;
typedef int SCU_TASK_CONTEXT_T ;
typedef int SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_3__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*,TYPE_4__*) ;

void FUNC_8(
   SCIC_SDS_CONTROLLER_T *VAR_7
)
{
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T *VAR_8;



   VAR_8 = &VAR_7->memory_descriptors[VAR_1];
   VAR_7->completion_queue = (U32*) VAR_8->virtual_address;
   FUNC_4(VAR_7, VAR_8->physical_address);



   VAR_8 = &VAR_7->memory_descriptors[VAR_2];
   VAR_7->remote_node_context_table = (SCU_REMOTE_NODE_CONTEXT_T *)
                                                VAR_8->virtual_address;
   FUNC_6(VAR_7, VAR_8->physical_address);


   VAR_8 = &VAR_7->memory_descriptors[VAR_3];
   VAR_7->task_context_table = (SCU_TASK_CONTEXT_T *)
                                         VAR_8->virtual_address;
   FUNC_5(VAR_7, VAR_8->physical_address);

   VAR_8 = &VAR_7->memory_descriptors[VAR_4];
   FUNC_7(
      &VAR_7->uf_control, VAR_8, VAR_7
   );



   FUNC_3(
      VAR_7,
      VAR_7->uf_control.headers.physical_address);
   FUNC_0(
      VAR_7,
      VAR_7->uf_control.address_table.physical_address);


   FUNC_1(
      VAR_7,
      (VAR_5
       | VAR_0
       | VAR_6) );
   FUNC_2(
      VAR_7,
      (VAR_5
       | VAR_0
       | VAR_6) );
}
