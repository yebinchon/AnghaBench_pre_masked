
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_9__ {scalar_t__ lba_offset; scalar_t__ lba_size; scalar_t__ block_lists_size; scalar_t__ size_of_data_processed; } ;
struct TYPE_7__ {TYPE_3__ reassign_blocks_process_state; } ;
struct TYPE_8__ {int state; TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef TYPE_3__ SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static
SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
)
{
   SATI_STATUS VAR_6 = VAR_1;

   U32 VAR_7 = 0;
   U32 VAR_8;
   U32 VAR_9;
   SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T * VAR_10;

   VAR_10 = &VAR_3->command_specific_data.reassign_blocks_process_state;

   VAR_9 = VAR_10->lba_offset;
   VAR_7 = VAR_10->lba_size;


   if(FUNC_1(VAR_10) < VAR_7)
   {
      return VAR_6;
   }


   if(VAR_10->block_lists_size ==
      VAR_10->size_of_data_processed)
   {
      VAR_3->state = VAR_2;
      VAR_6 = VAR_0;
   }

   else
   {
      VAR_8 = VAR_10->block_lists_size
         - VAR_10->size_of_data_processed;

      VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);

   }

   return VAR_6;
}
