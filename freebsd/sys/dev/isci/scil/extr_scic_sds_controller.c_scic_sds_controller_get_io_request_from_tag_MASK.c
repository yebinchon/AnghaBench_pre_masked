
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_3__ {size_t task_context_entries; scalar_t__* io_request_table; size_t* io_request_sequence; } ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;

SCIC_SDS_REQUEST_T *FUNC_2(
   SCIC_SDS_CONTROLLER_T *VAR_1,
   U16 VAR_2
)
{
   U16 VAR_3;
   U16 VAR_4;

   VAR_3 = FUNC_0(VAR_2);

   if (VAR_3 < VAR_1->task_context_entries)
   {
      if (VAR_1->io_request_table[VAR_3] != VAR_0)
      {
         VAR_4 = FUNC_1(VAR_2);

         if (VAR_4 == VAR_1->io_request_sequence[VAR_3])
         {
            return VAR_1->io_request_table[VAR_3];
         }
      }
   }

   return VAR_0;
}
