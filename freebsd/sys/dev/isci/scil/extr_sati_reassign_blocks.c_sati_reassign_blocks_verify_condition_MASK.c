
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U8 ;
typedef size_t U32 ;
struct TYPE_7__ {size_t lba_offset; size_t lba_size; int ata_command_status; int ata_command_sent_for_current_lba; } ;
struct TYPE_8__ {TYPE_1__ reassign_blocks_process_state; } ;
struct TYPE_9__ {TYPE_2__ command_specific_data; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,void*,size_t,size_t*) ;
 int FUNC_1 (TYPE_3__*,void*,void*) ;
 int FUNC_2 (size_t*,void*) ;
 int FUNC_3 (size_t*,void*) ;

__attribute__((used)) static
SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3,
   void * VAR_4
)
{
   U8 VAR_5[8] = {0,0,0,0,0,0,0,0};
   U32 VAR_6;
   U8 VAR_7;
   U32 VAR_8;
   SATI_STATUS VAR_9 = VAR_0;

   VAR_6 = VAR_2->command_specific_data.reassign_blocks_process_state.lba_offset;
   VAR_7 = VAR_2->command_specific_data.reassign_blocks_process_state.lba_size;

   for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   {
      FUNC_0(VAR_2, VAR_3, VAR_6+VAR_8, &VAR_5[VAR_8]);
   }

   if (VAR_7 == 4)
      FUNC_2(VAR_5, VAR_4);
   else
      FUNC_3(VAR_5, VAR_4);

   VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4);
   VAR_2->command_specific_data.reassign_blocks_process_state.ata_command_sent_for_current_lba++;
   VAR_2->command_specific_data.reassign_blocks_process_state.ata_command_status = VAR_1;
   return VAR_9;
}
