
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* U8 ;
typedef int U32 ;
struct TYPE_7__ {TYPE_1__* task_context_buffer; } ;
struct TYPE_6__ {void* task_type; int transfer_length_bytes; } ;
typedef TYPE_1__ SCU_TASK_CONTEXT_T ;
typedef scalar_t__ SCI_IO_REQUEST_DATA_DIRECTION ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_REQUEST_T * VAR_3,
   U8 VAR_4,
   U32 VAR_5,
   SCI_IO_REQUEST_DATA_DIRECTION VAR_6
)
{
   SCU_TASK_CONTEXT_T * VAR_7 = VAR_3->task_context_buffer;


   FUNC_0(VAR_3, VAR_7);


   VAR_7->transfer_length_bytes = VAR_5;

   if ( VAR_6 == VAR_0 )
   {





      VAR_7->task_type = VAR_4 + (VAR_2
                                                     - VAR_1);
   }
   else
   {


      VAR_7->task_type = VAR_4;
   }
}
