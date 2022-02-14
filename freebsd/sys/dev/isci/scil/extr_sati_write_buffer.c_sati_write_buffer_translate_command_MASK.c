
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_8__ {int allocation_length; void* state; void* type; TYPE_1__* device; } ;
struct TYPE_7__ {int max_blocks_per_microcode_command; int min_blocks_per_microcode_command; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int FUNC_0 (void*,TYPE_2__*,int ,int,int) ;
 int FUNC_1 (void*,TYPE_2__*) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_14,
   void * VAR_15,
   void * VAR_16
)
{
   U8 * VAR_17 = FUNC_2(VAR_15);
   SATI_STATUS VAR_18 = VAR_3;
   U32 VAR_19;
   U32 VAR_20;
   U32 VAR_21;

   VAR_19 = ((FUNC_3(VAR_17, 6) << 16) |
                        (FUNC_3(VAR_17, 7) << 8) |
                        (FUNC_3(VAR_17, 8)));

   VAR_21 = ((FUNC_3(VAR_17, 3) << 16) |
                    (FUNC_3(VAR_17, 4) << 8) |
                    (FUNC_3(VAR_17, 5)));

   VAR_14->allocation_length = VAR_19;
   VAR_20 = VAR_19 / VAR_2;

   switch(FUNC_3(VAR_17, 1))
   {
      case 128:
         if((VAR_19 == VAR_2) &&
            (VAR_21 == 0) &&
            (FUNC_3(VAR_17, 2) == 0))
         {
            FUNC_1(VAR_16, VAR_14);
            VAR_14->type = VAR_7;
            VAR_14->state = VAR_5;
            VAR_18 = VAR_9;
         }
         else
         {
            FUNC_4(
               VAR_14,
               VAR_15,
               VAR_13,
               VAR_12,
               VAR_11,
               VAR_10
            );

            VAR_14->state = VAR_6;
            VAR_18 = VAR_4;
         }
      break;

      case 130:

         FUNC_0(
            VAR_16,
            VAR_14,
            VAR_0,
            VAR_19,
            VAR_21
         );

         VAR_14->type = VAR_8;
         VAR_14->state = VAR_5;
         VAR_18 = VAR_9;
      break;

      case 129:
         if(((VAR_19 & 0x000001FF) == 0) &&
            ((VAR_21 & 0x000001FF) == 0) &&
            (VAR_20 <= VAR_14->device->max_blocks_per_microcode_command) &&
            ((VAR_20 >= VAR_14->device->min_blocks_per_microcode_command) ||
            (VAR_19 == 0)))
         {
            FUNC_0(
               VAR_16,
               VAR_14,
               VAR_1,
               VAR_19,
               VAR_21
            );

            VAR_14->type = VAR_8;
            VAR_14->state = VAR_5;
            VAR_18 = VAR_9;
         }
         else
         {
            FUNC_4(
               VAR_14,
               VAR_15,
               VAR_13,
               VAR_12,
               VAR_11,
               VAR_10
            );

            VAR_14->state = VAR_6;
            VAR_18 = VAR_4;
         }
      break;

      default:
         FUNC_4(
            VAR_14,
            VAR_15,
            VAR_13,
            VAR_12,
            VAR_11,
            VAR_10
         );

         VAR_14->state = VAR_6;
         VAR_18 = VAR_4;
      break;
   }
   return VAR_18;
}
