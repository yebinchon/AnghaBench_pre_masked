
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ata_command_sent_for_current_lba; scalar_t__ ata_command_status; scalar_t__ lba_size; int size_of_data_processed; int lba_offset; } ;
struct TYPE_7__ {TYPE_3__ reassign_blocks_process_state; } ;
struct TYPE_8__ {TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef TYPE_3__ SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,void*,void*) ;
 int FUNC_1 (TYPE_2__*,void*,void*) ;

__attribute__((used)) static
SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
   )
{
   SATI_STATUS VAR_6 = VAR_0;
   SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T * VAR_7;

   VAR_7 = &VAR_3->command_specific_data.reassign_blocks_process_state;

   if((VAR_7->ata_command_sent_for_current_lba == 0)&&
      (VAR_7->ata_command_status == VAR_1))
   {
      VAR_7->size_of_data_processed += VAR_7->lba_size;
      VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
   }
   else if((VAR_7->ata_command_sent_for_current_lba == 0)&&
      (VAR_7->ata_command_status == VAR_2))
   {

      VAR_7->size_of_data_processed += VAR_7->lba_size;
      VAR_7->lba_offset += VAR_7->lba_size;
      VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
   }
   else if((VAR_7->ata_command_sent_for_current_lba == 1)&&
      (VAR_7->ata_command_status == VAR_1))
   {
      VAR_7->size_of_data_processed += VAR_7->lba_size;
      VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
   }
   else if((VAR_7->ata_command_sent_for_current_lba == 2) &&
      (VAR_7->ata_command_status == VAR_2))
   {
      VAR_7->size_of_data_processed += VAR_7->lba_size;
      VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
   }
   else
   {
      VAR_6 = VAR_0;
   }

   return VAR_6;
}
