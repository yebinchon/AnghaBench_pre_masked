
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_7__ {scalar_t__ current_unmap_block_descriptor_index; int current_lba_count; int current_lba; scalar_t__ next_lba; } ;
struct TYPE_6__ {TYPE_2__ unmap_process_state; } ;
struct TYPE_8__ {TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int SATI_LBA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,void*,scalar_t__,int*) ;

SATI_STATUS FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3
)
{
   SATI_UNMAP_PROCESSING_STATE_T * VAR_4;
   U32 VAR_5;
   U8 VAR_6[16];

   VAR_4 = &VAR_2->command_specific_data.unmap_process_state;


   for(VAR_5 = VAR_4->current_unmap_block_descriptor_index;
       VAR_5 < VAR_4->current_unmap_block_descriptor_index +
               VAR_1;
       VAR_5++)
   {
      FUNC_0(VAR_2,
         VAR_3,
         VAR_5,
         &VAR_6[VAR_5-VAR_4->current_unmap_block_descriptor_index]);
   }


   VAR_4->current_lba_count = (VAR_6[8] << 24) |
                                            (VAR_6[9] << 16) |
                                            (VAR_6[10] << 8) |
                                            (VAR_6[11]);
   VAR_4->current_lba = ((SATI_LBA)(VAR_6[0]) << 56) |
                                            ((SATI_LBA)(VAR_6[1]) << 48) |
                                            ((SATI_LBA)(VAR_6[2]) << 40) |
                                            ((SATI_LBA)(VAR_6[3]) << 32) |
                                            ((SATI_LBA)(VAR_6[4]) << 24) |
                                            ((SATI_LBA)(VAR_6[5]) << 16) |
                                            ((SATI_LBA)(VAR_6[6]) << 8) |
                                            ((SATI_LBA)(VAR_6[7]));
   VAR_4->next_lba = 0;


   VAR_4->current_unmap_block_descriptor_index += VAR_1;

   return VAR_0;
}
