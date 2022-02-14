
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {scalar_t__ block_lists_size; scalar_t__ size_of_data_processed; } ;
typedef TYPE_1__ SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T ;



__attribute__((used)) static
U32 FUNC_0(
   SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T * VAR_0
)
{
   U32 VAR_1;

   if(VAR_0->block_lists_size >= VAR_0->size_of_data_processed)
   {
      VAR_1 = VAR_0->block_lists_size -
         VAR_0->size_of_data_processed;
   }
   else
   {
      VAR_1 = 0;
   }

   return VAR_1;
}
