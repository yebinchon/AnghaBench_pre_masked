
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_10__ {TYPE_3__* working_request; int rnc; } ;
struct TYPE_9__ {TYPE_2__* state_handlers; } ;
struct TYPE_7__ {scalar_t__ complete_handler; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;
typedef TYPE_4__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,void*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_3,
   U32 VAR_4
)
{
   SCI_STATUS VAR_5;

   VAR_5 = FUNC_0(VAR_3, VAR_4);

   if (VAR_5 == VAR_0)
   {
      if (FUNC_2(VAR_4) == VAR_1
          || FUNC_2(VAR_4) == VAR_2)
      {
         VAR_5 = FUNC_1(
                     VAR_3->rnc,
                     (SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK)
                        VAR_3->working_request->state_handlers->parent.complete_handler,
                     (void *)VAR_3->working_request
                  );
      }
   }

   return VAR_5;
}
