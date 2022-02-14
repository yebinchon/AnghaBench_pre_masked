
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_13__ {int logger; } ;
struct TYPE_9__ {int logger; } ;
struct TYPE_10__ {TYPE_1__ parent; } ;
struct TYPE_12__ {TYPE_2__ parent; } ;
struct TYPE_11__ {int state_machine; TYPE_7__ parent; int destination_state; TYPE_4__* device; int remote_node_index; } ;
typedef TYPE_3__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_4__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int *,TYPE_7__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void FUNC_3(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_3,
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_4,
   U16 VAR_5
      )
{
   FUNC_0 (VAR_4, 0, sizeof(SCIC_SDS_REMOTE_NODE_CONTEXT_T) );

   VAR_4->remote_node_index = VAR_5;
   VAR_4->device = VAR_3;
   VAR_4->destination_state = VAR_1;

   VAR_4->parent.logger = VAR_3->parent.parent.logger;

   FUNC_1(
      &VAR_4->state_machine,
      &VAR_4->parent,
      VAR_2,
      VAR_0
         );

   FUNC_2(&VAR_4->state_machine);



}
