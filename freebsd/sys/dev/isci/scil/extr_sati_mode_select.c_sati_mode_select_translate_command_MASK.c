
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_9__ {scalar_t__ ata_command_sent_for_cmp; int current_mode_page_processed; } ;
struct TYPE_10__ {TYPE_1__ process_state; } ;
struct TYPE_11__ {scalar_t__ state; int allocation_length; TYPE_2__ command_specific_data; } ;
typedef TYPE_3__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,void*,int,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_3__*,void*,void*,int,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,void*,void*) ;
 int FUNC_8 (TYPE_3__*,void*,int ,int ,int ,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_9(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_10,
   void * VAR_11,
   void * VAR_12,
   U32 VAR_13
)
{
   SATI_STATUS VAR_14 = VAR_1;
   U32 VAR_15;
   U32 VAR_16;
   U32 VAR_17;
   U16 VAR_18;
   U8 VAR_19[8]={0,0,0,0,0,0,0,0};
   U8 * VAR_20 = FUNC_0(VAR_11);


   if(VAR_0 == (VAR_13 == 6 || VAR_13 == 10))
   {
      return VAR_14;
   }

   if(VAR_10->state == VAR_4)
   {
      VAR_10->command_specific_data.process_state.ata_command_sent_for_cmp = 0;
      VAR_10->state = VAR_5;
   }


   if ( VAR_10->command_specific_data.process_state.ata_command_sent_for_cmp == 0 )
   {
      if (VAR_13 == 6)
      {

         VAR_18 = FUNC_1(VAR_20, 4);
      }
      else
      {

         VAR_18 = (FUNC_1(VAR_20, 7) << 8) + FUNC_1(VAR_20, 8);
      }

      VAR_10->allocation_length = VAR_18;


      for( VAR_17 = 0; VAR_17 < 8; VAR_17++ )
      {
         FUNC_2(VAR_10, VAR_11, VAR_17, &VAR_19[VAR_17]);
      }


      if ( FUNC_3(VAR_19, VAR_13) != 0 )
      {
         FUNC_8(
            VAR_10,
            VAR_11,
            VAR_9,
            VAR_8,
            VAR_7,
            VAR_6
         );
         return VAR_14;
      }

      VAR_16 = FUNC_4(
                                   VAR_19,
                                   VAR_13
                                );

      VAR_15 = FUNC_5(
                            VAR_16,
                            VAR_13
                         );

      if(VAR_15 > VAR_18)
      {
         VAR_10->state = VAR_2;
         VAR_14 = VAR_1;
      }
      else
      {
         FUNC_6(
            VAR_10,
            VAR_11,
            VAR_12,
            VAR_18,
            VAR_15
         );

      }
    }


   if(VAR_10->command_specific_data.process_state.current_mode_page_processed)
   {
      VAR_10->command_specific_data.process_state.ata_command_sent_for_cmp = 0;
      VAR_10->command_specific_data.process_state.current_mode_page_processed = VAR_0;
   }

   VAR_14 = FUNC_7(VAR_10, VAR_11, VAR_12);

   if(VAR_10->command_specific_data.process_state.current_mode_page_processed != VAR_0)
   {

      VAR_10->state = VAR_2;
   }
   else
   {
      VAR_10->state = VAR_3;
   }

   if(VAR_14 == VAR_1)
   {
      VAR_10->state = VAR_2;
      FUNC_8(
         VAR_10,
         VAR_11,
         VAR_9,
         VAR_8,
         VAR_7,
         VAR_6
      );
   }

   return VAR_14;
}
