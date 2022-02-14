
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ destination_state; int user_cookie; int user_callback; TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* resume_handler ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_2__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_1
)
{
   if (VAR_1->destination_state == VAR_0)
   {
      VAR_1->state_handlers->resume_handler(
         VAR_1, VAR_1->user_callback, VAR_1->user_cookie
            );
   }
}
