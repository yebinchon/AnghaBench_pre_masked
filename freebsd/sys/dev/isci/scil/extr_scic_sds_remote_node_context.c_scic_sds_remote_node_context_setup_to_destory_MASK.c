
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* user_cookie; int user_callback; int destination_state; } ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 int VAR_0 ;

__attribute__((used)) static
void FUNC_0(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_1,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_2,
   void * VAR_3
)
{
   VAR_1->destination_state = VAR_0;
   VAR_1->user_callback = VAR_2;
   VAR_1->user_cookie = VAR_3;
}
