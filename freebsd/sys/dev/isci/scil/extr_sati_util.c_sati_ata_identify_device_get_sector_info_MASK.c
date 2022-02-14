
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int command_set_enabled1; int* max_48bit_lba; int* total_num_sectors; int physical_logical_sector_info; int* words_per_logical_sector; } ;
typedef TYPE_1__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_2,
   U32 * VAR_3,
   U32 * VAR_4,
   U32 * VAR_5
)
{



   if (VAR_2->command_set_enabled1
       & VAR_0)
   {


      *VAR_3 = VAR_2->max_48bit_lba[7] << 24;
      *VAR_3 |= VAR_2->max_48bit_lba[6] << 16;
      *VAR_3 |= VAR_2->max_48bit_lba[5] << 8;
      *VAR_3 |= VAR_2->max_48bit_lba[4];

      *VAR_4 = VAR_2->max_48bit_lba[3] << 24;
      *VAR_4 |= VAR_2->max_48bit_lba[2] << 16;
      *VAR_4 |= VAR_2->max_48bit_lba[1] << 8;
      *VAR_4 |= VAR_2->max_48bit_lba[0];
   }
   else
   {


      *VAR_3 = 0;
      *VAR_4 = VAR_2->total_num_sectors[3] << 24;
      *VAR_4 |= VAR_2->total_num_sectors[2] << 16;
      *VAR_4 |= VAR_2->total_num_sectors[1] << 8;
      *VAR_4 |= VAR_2->total_num_sectors[0];
   }



   if (VAR_2->physical_logical_sector_info
       & VAR_1)
   {
      *VAR_5 = VAR_2->words_per_logical_sector[3] << 24;
      *VAR_5 |= VAR_2->words_per_logical_sector[2] << 16;
      *VAR_5 |= VAR_2->words_per_logical_sector[1] << 8;
      *VAR_5 |= VAR_2->words_per_logical_sector[0];
   }
   else
   {

      *VAR_5 = 512;
   }
}
