
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U8 ;
typedef size_t U32 ;
typedef size_t U16 ;
struct TYPE_12__ {size_t max_unmap_block_descriptors; size_t max_lba_range_entries; size_t current_unmap_block_descriptor_index; int unmap_buffer_sgl_pair; int * virtual_unmap_buffer; int physical_unmap_buffer_high; int physical_unmap_buffer_low; } ;
struct TYPE_10__ {TYPE_3__ unmap_process_state; } ;
struct TYPE_13__ {size_t allocation_length; int state; TYPE_2__* device; int type; TYPE_1__ command_specific_data; } ;
struct TYPE_11__ {int capabilities; size_t logical_block_size; } ;
typedef int TRIM_PAIR ;
typedef TYPE_3__ SATI_UNMAP_PROCESSING_STATE_T ;
typedef TYPE_4__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (void*,size_t,int **,int *,int *) ;
 int* FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,int *,int *) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (TYPE_4__*,void*,size_t,int*) ;
 int FUNC_5 (TYPE_4__*,void*,int ,int ,int ,int ) ;
 size_t FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,void*) ;

SATI_STATUS FUNC_8(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_16,
   void * VAR_17,
   void * VAR_18
)
{
   SATI_UNMAP_PROCESSING_STATE_T * VAR_19;
   U8 * VAR_20;
   U16 VAR_21;
   U32 VAR_22;
   U32 VAR_23;
   U32 VAR_24;
   U8 VAR_25[8];

   VAR_19 = &VAR_16->command_specific_data.unmap_process_state;


   VAR_16->type = VAR_4;


   if ((VAR_16->device->capabilities & VAR_1)
       != VAR_1)
   {

      FUNC_5(
         VAR_16,
         VAR_17,
         VAR_15,
         VAR_12,
         VAR_10,
         VAR_8
      );
      return VAR_2;
   }


   VAR_20 = FUNC_1(VAR_17);
   VAR_21 = (FUNC_3(VAR_20, 7) << 8) | FUNC_3(VAR_20, 8);


   if (VAR_21 == 0)
   {

       return VAR_5;
   }
   if (VAR_21 < VAR_7)
   {

      FUNC_5(
         VAR_16,
         VAR_17,
         VAR_15,
         VAR_12,
         VAR_10,
         VAR_8
      );
      return VAR_2;
   }

   VAR_16->allocation_length = VAR_21;


   for(VAR_23 = 0; VAR_23 < VAR_7; VAR_23++)
   {
      FUNC_4(VAR_16, VAR_17, VAR_23, &VAR_25[VAR_23]);
   }
   VAR_22 = (VAR_25[2] << 8) | VAR_25[3];


   if (VAR_22 == 0)
   {

       return VAR_5;
   }

   if ((U32)(VAR_21 - VAR_7) < VAR_22)
   {

      FUNC_5(
         VAR_16,
         VAR_17,
         VAR_15,
         VAR_12,
         VAR_10,
         VAR_8
      );
      return VAR_2;
   }


   VAR_19->max_unmap_block_descriptors =
       VAR_22/VAR_6;



   VAR_24 = FUNC_6(VAR_16);


   VAR_19->max_lba_range_entries =
       (VAR_24*VAR_16->device->logical_block_size)/sizeof(TRIM_PAIR);


   FUNC_0(
      VAR_17,
      VAR_24*VAR_16->device->logical_block_size,
      &(VAR_19->virtual_unmap_buffer),
      &(VAR_19->physical_unmap_buffer_low),
      &(VAR_19->physical_unmap_buffer_high));


   if (VAR_19->virtual_unmap_buffer == ((void*)0))
   {

      FUNC_5(
         VAR_16,
         VAR_17,
         VAR_14,
         VAR_13,
         VAR_11,
         VAR_9
      );
      return VAR_2;
   }



   FUNC_2(VAR_17,
                        VAR_18,
                        ((void*)0),
                        &(VAR_19->unmap_buffer_sgl_pair));


   VAR_19->current_unmap_block_descriptor_index =
      VAR_7;
   FUNC_7(VAR_16,VAR_17);



   VAR_16->state = VAR_3;

   return VAR_0;
}
