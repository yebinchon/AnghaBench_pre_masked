
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_15__ {void* translated_command; } ;
struct TYPE_16__ {void* state; int type; TYPE_2__ command_specific_data; TYPE_1__* device; } ;
struct TYPE_14__ {int capabilities; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 int VAR_15 ;
 int FUNC_6 (void*,TYPE_3__*) ;
 int FUNC_7 (void*,TYPE_3__*) ;
 int FUNC_8 (void*,TYPE_3__*) ;
 int FUNC_9 (void*,TYPE_3__*) ;
 int FUNC_10 (void*,TYPE_3__*) ;
 int FUNC_11 (void*,TYPE_3__*) ;
 int FUNC_12 (void*,TYPE_3__*,int ) ;
 int FUNC_13 (void*,TYPE_3__*) ;
 int * FUNC_14 (void*) ;
 int FUNC_15 (TYPE_3__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_16(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_16,
   void * VAR_17,
   void * VAR_18
)
{
   U8 * VAR_19 = FUNC_14(VAR_17);

   switch ( FUNC_3(VAR_19) )
   {
      case 128:
         if ( FUNC_5(VAR_19) == 0
             && FUNC_1(VAR_19) == 0 )
         {
            if ( FUNC_2(VAR_19) == 1 )
            {

               FUNC_13(VAR_18, VAR_16);
               VAR_16->command_specific_data.translated_command = VAR_6;
            }
            else
            {
               if ( VAR_16->state != VAR_10 )
               {

                  FUNC_6(VAR_18, VAR_16);
                  VAR_16->command_specific_data.translated_command = VAR_0;


                  VAR_16->state = VAR_10;
               }
               else
               {


                  FUNC_13(VAR_18, VAR_16);
                  VAR_16->command_specific_data.translated_command = VAR_6;

               }
            }
         }
         else if ( FUNC_5(VAR_19) == 0
                  && FUNC_1(VAR_19) == 1 )
         {

            if (VAR_16->device->capabilities & VAR_7)
            {

               FUNC_10(VAR_18, VAR_16);
               VAR_16->command_specific_data.translated_command = VAR_3;
            }
            else
            {
               FUNC_15(
                  VAR_16,
                  VAR_17,
                  VAR_15,
                  VAR_14,
                  VAR_13,
                  VAR_12
               );
               return VAR_8;
            }
         }
         else if ( FUNC_5(VAR_19) == 1
                  && FUNC_1(VAR_19) == 0 )
         {

            FUNC_11(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_4;
         }
         else if ( FUNC_5(VAR_19) == 1
                  && FUNC_1(VAR_19) == 1 )
         {
            FUNC_15(
               VAR_16,
               VAR_17,
               VAR_15,
               VAR_14,
               VAR_13,
               VAR_12
            );
            return VAR_8;
         }

         break;

      case 133:

         if( VAR_16->state != VAR_10 )
         {
            FUNC_7(VAR_18, VAR_16);
            VAR_16->state = VAR_10;
            VAR_16->command_specific_data.translated_command = VAR_1;
         }
         else
         {
            FUNC_11(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_4;
         }
         break;


      case 131:

         if( FUNC_2(VAR_19) == 0 &&
             VAR_16->state != VAR_10 )
         {
            FUNC_6(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_0;
            VAR_16->state = VAR_10;
         }
         else
         {
            if( FUNC_4(VAR_19) == 0 )
            {
               FUNC_8(VAR_18, VAR_16);
            }
            else
            {
               FUNC_9(VAR_18, VAR_16);
            }
            VAR_16->command_specific_data.translated_command = VAR_2;
         }
         break;


      case 129:
         if( FUNC_2(VAR_19) == 0 &&
            VAR_16->state != VAR_10 )
         {
            FUNC_6(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_0;
            VAR_16->state = VAR_10;
         }
         else
         {
            FUNC_13(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_6;
         }
         break;


      case 132:

         if( FUNC_2(VAR_19) == 0 &&
            VAR_16->state != VAR_10 )
         {
            FUNC_6(VAR_18, VAR_16);
            VAR_16->command_specific_data.translated_command = VAR_0;
            VAR_16->state = VAR_10;
         }
         else
         {
            FUNC_12(VAR_18, VAR_16, 0);
            VAR_16->command_specific_data.translated_command = VAR_5;
         }
         break;

      case 130:
      default:
         FUNC_15(
            VAR_16,
            VAR_17,
            VAR_15,
            VAR_14,
            VAR_13,
            VAR_12
         );
         return VAR_8;
         break;
   }

   if ( FUNC_0(VAR_19) == 1 )
   {

      ;
   }
   VAR_16->type = VAR_9;
   return VAR_11;
}
