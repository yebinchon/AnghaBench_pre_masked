
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int logical_block_size; int max_lba_range_entry_blocks; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

U32 FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1
)
{







   return FUNC_0(VAR_0/VAR_1->device->logical_block_size,
              VAR_1->device->max_lba_range_entry_blocks);
}
