
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef scalar_t__ U32 ;
struct TYPE_9__ {int command_set_supported0; int command_set_enabled0; } ;
struct TYPE_8__ {int number_data_bytes_set; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_2__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (TYPE_1__*,void*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,void*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,void*,scalar_t__,scalar_t__) ;

U32 FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_8,
   U32 VAR_9
)
{
   U8 * VAR_10 = FUNC_0(VAR_7);
   U8 VAR_11 = FUNC_1(VAR_10, 2) >> VAR_5;
   U32 VAR_12;

   VAR_12 = FUNC_3(
                    VAR_6,
                    VAR_7,
                    VAR_9,
                    VAR_11,
                    VAR_2
                 );



   if (VAR_11 == VAR_4)
   {
      U8 VAR_13;

      FUNC_2(VAR_6, VAR_7, VAR_9+2, &VAR_13);


      if ( (VAR_8->command_set_supported0
                & VAR_1)
         && (VAR_8->command_set_enabled0
                & VAR_0) )
      {

         VAR_13 &= ~VAR_3;
      }
      else
      {


         VAR_13 |= VAR_3;
      }

      FUNC_4(VAR_6, VAR_7, VAR_9+2, VAR_13);




      VAR_6->number_data_bytes_set--;
   }

   return VAR_12;
}
