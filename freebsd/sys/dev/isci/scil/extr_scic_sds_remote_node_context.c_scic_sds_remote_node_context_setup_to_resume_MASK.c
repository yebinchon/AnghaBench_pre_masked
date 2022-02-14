
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ destination_state; void* user_cookie; int user_callback; } ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
void FUNC_0(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_2,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_3,
   void * VAR_4
)
{
   if (VAR_2->destination_state != VAR_0)
   {
      VAR_2->destination_state = VAR_1;
      VAR_2->user_callback = VAR_3;
      VAR_2->user_cookie = VAR_4;
   }
}
