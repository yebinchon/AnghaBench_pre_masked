
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ destination_state; void* user_cookie; int user_callback; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
SCI_STATUS FUNC_0(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_3,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_4,
   void * VAR_5
)
{
   if (VAR_3->destination_state == VAR_0)
   {
      VAR_3->user_callback = VAR_4;
      VAR_3->user_cookie = VAR_5;

      return VAR_2;
   }

   return VAR_1;
}
