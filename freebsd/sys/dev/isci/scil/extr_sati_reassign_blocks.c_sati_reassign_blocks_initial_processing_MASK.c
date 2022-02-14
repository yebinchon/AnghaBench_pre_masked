
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_6__ {int lba_size; int lba_offset; int block_lists_size; int ata_command_status; int current_lba_processed; scalar_t__ size_of_data_processed; scalar_t__ ata_command_sent_for_current_lba; } ;
struct TYPE_7__ {TYPE_1__ reassign_blocks_process_state; } ;
struct TYPE_8__ {int allocation_length; TYPE_2__ command_specific_data; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_3__*,void*,int,int*) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   U32 VAR_7;
   U8 VAR_8;
   U8 VAR_9;
   U8 VAR_10;
   U8 VAR_11;
   U32 VAR_12;
   U8 VAR_13[4]={0,0,0,0};

   U8 * VAR_14 = FUNC_0(VAR_5);



   if ((FUNC_1(VAR_14, 1) & VAR_2) == 0)
   {
      VAR_8=0;
      VAR_11 = 4;
   }
   else
   {
      VAR_8=1;
      VAR_11 = 8;
   }


   if ((FUNC_1(VAR_14, 1) & VAR_3) == 0)
   {
      VAR_9=0;
   }
   else
   {
      VAR_9=1;
   }

   VAR_4->allocation_length = 4;


   for(VAR_7 = 0; VAR_7 < 4; VAR_7++)
   {
      FUNC_2(VAR_4, VAR_5, VAR_7, &VAR_13[VAR_7]);
   }

   VAR_10 = 4;

   if (VAR_9==0)
   {

      VAR_12 = (VAR_13[2]<<8) + VAR_13[3] + VAR_10;
   }
   else
   {

      VAR_12 = (VAR_13[0]<<24) + (VAR_13[1]<<16) +
         (VAR_13[2]<<8) + VAR_13[3] + VAR_10;
   }

   VAR_4->allocation_length = VAR_12;


   VAR_4->command_specific_data.reassign_blocks_process_state.lba_size = VAR_11;
   VAR_4->command_specific_data.reassign_blocks_process_state.lba_offset = VAR_10;
   VAR_4->command_specific_data.reassign_blocks_process_state.ata_command_sent_for_current_lba = 0;
   VAR_4->command_specific_data.reassign_blocks_process_state.block_lists_size = VAR_12 - VAR_10;
   VAR_4->command_specific_data.reassign_blocks_process_state.size_of_data_processed = 0;
   VAR_4->command_specific_data.reassign_blocks_process_state.current_lba_processed = VAR_0;
   VAR_4->command_specific_data.reassign_blocks_process_state.ata_command_status = VAR_1;
}
