
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {int translated_command; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_2__* device; TYPE_1__ command_specific_data; } ;
struct TYPE_7__ {int state; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * FUNC_1 (void*) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_21,
   void * VAR_22,
   void * VAR_23
)
{
   U8 * VAR_24 = FUNC_2(VAR_23);
   U8 * VAR_25 = FUNC_1(VAR_22);

   if (FUNC_3(VAR_24) & VAR_0)
   {
      switch ( VAR_21->command_specific_data.translated_command )
      {
         case 134:
         case 128:
         case 132:
         case 133:
         case 129:


         case 130:
            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_19,
               VAR_16,
               VAR_12,
               VAR_11
            );
            break;

         case 131:
            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_19,
               VAR_16,
               VAR_14,
               VAR_11
            );
            break;

         default:
            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_19,
               VAR_17,
               VAR_13,
               VAR_10
            );
            break;
      }
      VAR_21->state = VAR_8;
      return VAR_6;
   }
   else
   {
      switch ( VAR_21->command_specific_data.translated_command )
      {
         case 130:

            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_20,
               VAR_18,
               VAR_15,
               VAR_11
            );

            VAR_21->device->state = VAR_3;
            VAR_21->state = VAR_8;
            break;

         case 132:

            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_20,
               VAR_18,
               VAR_15,
               VAR_11
            );
            VAR_21->device->state = VAR_2;
            VAR_21->state = VAR_8;
            break;


         case 131:
         case 129:
         case 128:

            FUNC_4(
               VAR_21,
               VAR_22,
               VAR_20,
               VAR_18,
               VAR_15,
               VAR_11
            );

            if( FUNC_0(VAR_25) == 0 )
            {
               VAR_21->device->state = VAR_5;
            }
            else
            {
               VAR_21->device->state = VAR_4;
            }
            VAR_21->state = VAR_8;
            break;

         default:

            break;
      }

      if (VAR_21->state == VAR_9)
      {
         return VAR_7;
      }
   }
   return VAR_1;
}
