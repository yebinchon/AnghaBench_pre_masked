
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_13__ {scalar_t__ mode_page_offset; scalar_t__ mode_pages_size; scalar_t__ size_of_data_processed; } ;
struct TYPE_11__ {TYPE_6__ process_state; } ;
struct TYPE_12__ {TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,scalar_t__,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,void*,void*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,void*,void*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,void*,void*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,void*,void*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,void*,scalar_t__) ;

__attribute__((used)) static
SATI_STATUS FUNC_8(
   SATI_TRANSLATOR_SEQUENCE_T* VAR_2,
   void * VAR_3,
   void * VAR_4
)
{
   SATI_STATUS VAR_5 = VAR_0;

   U8 VAR_6;
   U32 VAR_7 = 0;
   U32 VAR_8;

   U8 VAR_9;
   U32 VAR_10;

   VAR_10 = VAR_2->command_specific_data.process_state.mode_page_offset;

   FUNC_0(VAR_2, VAR_3, VAR_10, &VAR_9);


   if(VAR_2->command_specific_data.process_state.mode_pages_size >
      VAR_2->command_specific_data.process_state.size_of_data_processed)
   {

      VAR_6 = VAR_9 & VAR_1;
      VAR_7 = FUNC_1(VAR_6);
      VAR_8 = VAR_2->command_specific_data.process_state.mode_pages_size
         - VAR_2->command_specific_data.process_state.size_of_data_processed;

      if( VAR_7 == 0 )
      {
         VAR_5 = VAR_0;
      }
      else
      {

         switch(VAR_6)
         {
         case 128:
            VAR_5 = FUNC_7(
                        VAR_2,
                        VAR_3,
                        VAR_7
                     );
            break;

         case 131:
            VAR_5 = FUNC_4(
                        &VAR_2->command_specific_data.process_state,
                        VAR_7
                     );
            break;

         case 133:
            VAR_5 = FUNC_2(
                        VAR_2,
                        VAR_3,
                        VAR_4,
                        VAR_7
                     );
            break;

         case 132:
            VAR_5 = FUNC_3(
                        VAR_2,
                        VAR_3,
                        VAR_4,
                        VAR_7
                     );
            break;

         case 130:
            VAR_5 = FUNC_5(
                        VAR_2,
                        VAR_3,
                        VAR_4,
                        VAR_7
                     );
            break;

         case 129:
            VAR_5 = FUNC_6(
                        VAR_2,
                        VAR_3,
                        VAR_4,
                        VAR_7
                     );

            break;

         default:
            break;
         }

      }
   }

   return VAR_5;
}
