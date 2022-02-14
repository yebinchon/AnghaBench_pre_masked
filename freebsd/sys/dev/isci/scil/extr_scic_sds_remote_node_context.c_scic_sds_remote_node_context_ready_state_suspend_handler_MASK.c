
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {int state_machine; int device; scalar_t__ suspension_code; void* user_cookie; int user_callback; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_4,
   U32 VAR_5,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_6,
   void * VAR_7
)
{
   VAR_4->user_callback = VAR_6;
   VAR_4->user_cookie = VAR_7;
   VAR_4->suspension_code = VAR_5;

   if (VAR_5 == VAR_1)
   {
      FUNC_1(
         VAR_4->device,
         VAR_3
            );
   }

   FUNC_0(
      &VAR_4->state_machine,
      VAR_0
         );

   return VAR_2;
}
