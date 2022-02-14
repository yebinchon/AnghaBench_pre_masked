
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_8__ {int type; TYPE_1__* device; int allocation_length; } ;
struct TYPE_7__ {int state; int capabilities; int unit_attention_ascq; int unit_attention_asc; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (void*,TYPE_2__*) ;
 int FUNC_1 (void*,TYPE_2__*,int ) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_18,
   void * VAR_19,
   void * VAR_20
)
{
   U8 * VAR_21 = FUNC_2(VAR_19);


   switch(VAR_18->device->state)
   {
      case 132:
         FUNC_4(
            VAR_18,
            VAR_19,
            VAR_17,
            VAR_14,
            VAR_11,
            VAR_8
         );
         return VAR_1;
      break;

      case 128:
         FUNC_4(
            VAR_18,
            VAR_19,
            VAR_17,
            VAR_16,
            VAR_18->device->unit_attention_asc,
            VAR_18->device->unit_attention_ascq
         );
         return VAR_1;
      break;

      case 131:
         FUNC_4(
            VAR_18,
            VAR_19,
            VAR_17,
            VAR_15,
            VAR_13,
            VAR_7
         );
         return VAR_1;
      break;

      case 130:
         FUNC_4(
            VAR_18,
            VAR_19,
            VAR_17,
            VAR_15,
            VAR_13,
            VAR_10
         );
         return VAR_1;
      break;

      case 129:
         FUNC_4(
            VAR_18,
            VAR_19,
            VAR_17,
            VAR_15,
            VAR_12,
            VAR_9
         );
         return VAR_1;
      break;

      default:
      break;
   }

   VAR_18->allocation_length = FUNC_3(VAR_21, 4);


   if(VAR_18->device->capabilities & VAR_3)
   {
       if(VAR_18->device->capabilities & VAR_2)
       {
            FUNC_1(
                           VAR_20,
                           VAR_18,
                           VAR_0
            );

            VAR_18->type = VAR_5;
            return VAR_6;
        }
   }
   FUNC_0(VAR_20, VAR_18);
   VAR_18->type = VAR_4;
   return VAR_6;
}
