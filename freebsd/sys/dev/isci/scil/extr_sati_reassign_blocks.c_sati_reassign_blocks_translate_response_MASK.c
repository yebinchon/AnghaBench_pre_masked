
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_8__ {int ata_command_sent_for_current_lba; int current_lba_processed; int ata_command_status; scalar_t__ lba_size; int size_of_data_processed; } ;
struct TYPE_6__ {TYPE_3__ reassign_blocks_process_state; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef TYPE_3__ SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_12,
   void * VAR_13,
   void * VAR_14
)
{
   U8 * VAR_15 = FUNC_0(VAR_14);
   SATI_REASSIGN_BLOCKS_PROCESSING_STATE_T * VAR_16;

   VAR_16 = &VAR_12->command_specific_data.reassign_blocks_process_state;

   if (FUNC_1(VAR_15) & VAR_0)
   {
      VAR_16->ata_command_status = VAR_3;



      if(VAR_16->ata_command_sent_for_current_lba < 2)
      {
         VAR_12->state = VAR_6;
         VAR_16->size_of_data_processed -= VAR_16->lba_size;
         return VAR_5;
      }
      else
      {
         FUNC_2(
            VAR_12,
            VAR_13,
            VAR_10,
            VAR_9,
            VAR_8,
            VAR_7
         );
      }

      return VAR_2;
   }
   else
   {
      VAR_16->ata_command_status = VAR_4;
      if (VAR_16->ata_command_sent_for_current_lba != 2)
         VAR_16->current_lba_processed = VAR_11;

      if (VAR_12->state == VAR_6)
      {
         return VAR_5;
      }
   }
   return VAR_1;
}
