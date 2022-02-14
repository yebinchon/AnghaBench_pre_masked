
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U16 ;
struct TYPE_6__ {int capabilities1; int command_set_supported1; int command_set_supported0; int command_set_enabled0; int serial_ata_capabilities; int queue_depth; int general_config_bits; int command_set_supported2; int physical_logical_sector_info; int command_set_supported_extention; int nominal_media_rotation_rate; int* words_per_logical_sector; int data_set_management; scalar_t__ max_lba_range_entry_blocks; int additional_supported; int max_num_blocks_per_microcode; int min_num_blocks_per_microcode; } ;
struct TYPE_5__ {int capabilities; int logical_block_size; scalar_t__ max_lba_range_entry_blocks; int max_blocks_per_microcode_command; int min_blocks_per_microcode_command; int ncq_depth; } ;
typedef TYPE_1__ SATI_DEVICE_T ;
typedef TYPE_2__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

void FUNC_1(
   SATI_DEVICE_T * VAR_30,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_31
)
{
   U16 VAR_32 = 0;

   if (VAR_31->capabilities1 & VAR_0)
      VAR_32 |= VAR_28;

   if (VAR_31->command_set_supported1
       & VAR_7)
   {
      VAR_32 |= VAR_13;
   }

   if (VAR_31->command_set_supported0
       & VAR_6)
   {
      VAR_32 |= VAR_25;
   }

   if (VAR_31->command_set_enabled0
       & VAR_6)
   {
       VAR_32 |= VAR_23;
   }


   if (VAR_31->serial_ata_capabilities
       & VAR_11)
   {
      if (VAR_30->capabilities & VAR_19)
      {
         VAR_32 |= VAR_19;
         VAR_32 |= VAR_20;
         VAR_32 |= VAR_15;
         VAR_30->ncq_depth = FUNC_0(
                                 VAR_30->ncq_depth,
                                 (U8) (VAR_31->queue_depth
                                 & VAR_9) + 1
                              );
      }
   }


   if (VAR_30->capabilities & VAR_17)
    VAR_32 |= VAR_17;

   if (VAR_31->general_config_bits & VAR_10)
      VAR_32 |= VAR_22;

   if(VAR_31->command_set_supported2 & VAR_12 )
   {
      VAR_32 |= VAR_29;
   }

   if(VAR_31->physical_logical_sector_info &
      VAR_8)
   {
      VAR_32 |= VAR_18;
   }

   if(VAR_31->command_set_supported_extention &
      VAR_5)
   {
      VAR_32 |= VAR_24;
   }

   if (VAR_31->nominal_media_rotation_rate == 1)
   {
       VAR_32 |= VAR_26;
   }



   if ((VAR_31->physical_logical_sector_info & 0x5000) == 0x5000)
   {
       VAR_30->logical_block_size = (VAR_31->words_per_logical_sector[3] << 24) |
                                    (VAR_31->words_per_logical_sector[2] << 16) |
                                    (VAR_31->words_per_logical_sector[1] << 8) |
                                    (VAR_31->words_per_logical_sector[0]);
   }
   else
   {
       VAR_30->logical_block_size = 512;
   }





   if (
     (VAR_31->data_set_management & VAR_4)
     && (VAR_31->max_lba_range_entry_blocks > 0)
      )
   {
      VAR_32 |= VAR_16;
      VAR_30->max_lba_range_entry_blocks = VAR_31->max_lba_range_entry_blocks;
   }

   if (VAR_31->additional_supported
       & VAR_2)
   {
      VAR_32 |= VAR_14;
   }

   if (VAR_31->additional_supported
       & VAR_3)
   {
      VAR_32 |= VAR_21;
   }

   if (VAR_31->capabilities1
       & VAR_1)
   {
       VAR_32 |= VAR_27;
   }

   VAR_30->min_blocks_per_microcode_command = VAR_31->min_num_blocks_per_microcode;
   VAR_30->max_blocks_per_microcode_command = VAR_31->max_num_blocks_per_microcode;

   VAR_30->capabilities = VAR_32;
}
