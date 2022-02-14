
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ block_lists_size; scalar_t__ size_of_data_processed; scalar_t__ current_lba_processed; scalar_t__ ata_command_sent_for_current_lba; } ;
struct TYPE_8__ {TYPE_3__ reassign_blocks_process_state; } ;
struct TYPE_9__ {scalar_t__ state; int type; TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;
typedef TYPE_3__ SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*,void*) ;
 int FUNC_2 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_9,
   void * VAR_10,
   void * VAR_11
)
{
   SATI_STATUS VAR_12 = VAR_1;
   SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T * VAR_13;

   VAR_13 = &VAR_9->command_specific_data.reassign_blocks_process_state;

   VAR_9->type = VAR_2;


   if ( VAR_9->state != VAR_4 )
   {
      FUNC_0(
         VAR_9,
         VAR_10,
         VAR_11
      );
   }


   if(VAR_13->current_lba_processed)
   {
      VAR_13->ata_command_sent_for_current_lba = 0;
      VAR_13->current_lba_processed = VAR_0;
   }

   VAR_12 = FUNC_1(VAR_9, VAR_10, VAR_11);

   if(VAR_13->block_lists_size ==
      VAR_13->size_of_data_processed)
   {

      VAR_9->state = VAR_3;
   }
   else
   {
      VAR_9->state = VAR_4;
   }

   if(VAR_12 == VAR_1)
   {
      VAR_9->state = VAR_3;
      FUNC_2(
         VAR_9,
         VAR_10,
         VAR_8,
         VAR_7,
         VAR_6,
         VAR_5
      );
   }

   return VAR_12;
}
