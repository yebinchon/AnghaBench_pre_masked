
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_15__ {scalar_t__ sector_address; scalar_t__ sector_count; } ;
struct TYPE_13__ {scalar_t__ max_lba_range_entries; scalar_t__ current_lba_count; scalar_t__ next_lba; scalar_t__ current_lba; scalar_t__ max_unmap_block_descriptors; int physical_unmap_buffer_high; int physical_unmap_buffer_low; int unmap_buffer_sgl_pair; int * current_dsm_descriptor; int * virtual_unmap_buffer; } ;
struct TYPE_11__ {TYPE_3__ unmap_process_state; } ;
struct TYPE_14__ {int state; TYPE_2__* device; TYPE_1__ command_specific_data; } ;
struct TYPE_12__ {scalar_t__ logical_block_size; } ;
typedef int TRIM_PAIR ;
typedef TYPE_3__ SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_4__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef scalar_t__ SATI_LBA ;
typedef TYPE_5__* PTRIM_PAIR ;
typedef int POINTER_UINT ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,void*,void*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,void*) ;

SATI_STATUS FUNC_7(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   SATI_UNMAP_PROCESSING_STATE_T * VAR_7;
   SATI_LBA VAR_8;
   U32 VAR_9;
   U32 VAR_10;
   U32 VAR_11;
   U32 VAR_12;
   U32 VAR_13;

   VAR_7 = &VAR_4->command_specific_data.unmap_process_state;


   VAR_7->current_dsm_descriptor = VAR_7->virtual_unmap_buffer;
   VAR_9 = 0;


   while ((VAR_9 < VAR_7->max_lba_range_entries) &&
          (VAR_7->current_lba_count > 0)) {

      if (VAR_7->current_lba_count > VAR_1) {



         VAR_8 = VAR_1;
         VAR_7->current_lba_count -= VAR_1;
         VAR_7->next_lba =
             VAR_7->current_lba + VAR_1;
      } else {

         VAR_8 = VAR_7->current_lba_count;
         VAR_7->current_lba_count = 0;
      }


      ((PTRIM_PAIR)(VAR_7->current_dsm_descriptor))->sector_address =
          VAR_7->current_lba;
      ((PTRIM_PAIR)(VAR_7->current_dsm_descriptor))->sector_count =
          VAR_8;


      if (VAR_7->current_lba_count == 0) {

         --VAR_7->max_unmap_block_descriptors;
         if (VAR_7->max_unmap_block_descriptors > 0) {

            FUNC_6(VAR_4,VAR_5);
         }
      } else {

         VAR_7->current_lba = VAR_7->next_lba;
      }


      FUNC_0(VAR_7->current_lba <= VAR_0);


      VAR_9++;
      VAR_7->current_dsm_descriptor =
          (U8 *)(VAR_7->current_dsm_descriptor) + sizeof(TRIM_PAIR);
   }


   VAR_12 = FUNC_3(VAR_4,VAR_9);
   VAR_10 = VAR_12 * VAR_4->device->logical_block_size;
   VAR_13 = FUNC_5(VAR_4);




   VAR_11 = VAR_4->device->logical_block_size;
   VAR_11 -= (U32)((POINTER_UINT)VAR_7->current_dsm_descriptor &
                                (VAR_4->device->logical_block_size-1));


   if (VAR_11 != VAR_4->device->logical_block_size)
   {

       VAR_11 += (VAR_4->device->logical_block_size * (VAR_13 - VAR_12));




       FUNC_1((U8 *)VAR_7->current_dsm_descriptor, 0, VAR_11);
   }



   FUNC_2(VAR_7->unmap_buffer_sgl_pair,
                     VAR_7->physical_unmap_buffer_low,
                     VAR_7->physical_unmap_buffer_high,
                     VAR_10);


   FUNC_4(VAR_4,
                        VAR_5,
                        VAR_6,
                        VAR_12);



   if (VAR_7->current_lba_count == 0)
   {

       VAR_4->state = VAR_2;
   }

   return VAR_3;
}
