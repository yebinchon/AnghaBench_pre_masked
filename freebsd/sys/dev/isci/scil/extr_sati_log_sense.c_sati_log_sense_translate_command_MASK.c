
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_10__ {int allocation_length; int type; TYPE_1__* device; } ;
struct TYPE_9__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int ATA_SMART_SELF_TEST_LOG_T ;
typedef int ATA_EXTENDED_SMART_SELF_TEST_LOG_T ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
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



 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (void*,TYPE_2__*,int ,int) ;
 int FUNC_3 (void*,TYPE_2__*,int ,int) ;
 int FUNC_4 (void*,TYPE_2__*,int ) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_2__*,void*,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,void*) ;

SATI_STATUS FUNC_9(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_24,
   void * VAR_25,
   void * VAR_26
)
{
   U8 * VAR_27 = FUNC_5(VAR_25);
   SATI_STATUS VAR_28 = VAR_8;

   if(FUNC_1(VAR_27) == 1 &&
      (FUNC_6(VAR_27, 3) == 0))
   {
      VAR_24->allocation_length = (FUNC_6(VAR_27, 7) << 8) |
                                    (FUNC_6(VAR_27, 8));

      switch(FUNC_0(VAR_27))
      {

         case 128 :
            FUNC_8(VAR_24, VAR_25);
            VAR_24->type = VAR_13;
            VAR_28 = VAR_3;
            break;


         case 129 :

            if((VAR_24->device->capabilities &
               VAR_6) == 0)
            {
               FUNC_7(
                  VAR_24,
                  VAR_25,
                  VAR_23,
                  VAR_22,
                  VAR_19,
                  VAR_16
               );
               VAR_28 = VAR_9;
            }
            else
            {

               if((VAR_24->device->capabilities &
                  VAR_4))
               {

                  FUNC_2(
                                     VAR_26,
                                     VAR_24,
                                     VAR_0,
                                     sizeof(ATA_EXTENDED_SMART_SELF_TEST_LOG_T)
                  );
                  VAR_24->type =
                            VAR_10;
                  VAR_28 = VAR_14;
               }
               else
               {

                  FUNC_3(
                                       VAR_26,
                                       VAR_24,
                                       VAR_1,
                                       sizeof(ATA_SMART_SELF_TEST_LOG_T)
                  );
                  VAR_24->type = VAR_12;
                  VAR_28 = VAR_14;
               }
            }
            break;


         case 130 :
            if(VAR_24->device->capabilities & VAR_7)
            {
               if(VAR_24->device->capabilities & VAR_5)
               {
                  FUNC_4(
                                       VAR_26,
                                       VAR_24,
                                       VAR_2
                  );
                  VAR_24->type =
                                VAR_11;
                  VAR_28 = VAR_14;
               }
               else
               {
                  FUNC_7(
                     VAR_24,
                     VAR_25,
                     VAR_23,
                     VAR_21,
                     VAR_18,
                     VAR_15
                  );

                  VAR_28 = VAR_9;
               }
            }
            else
            {
               FUNC_7(
                  VAR_24,
                  VAR_25,
                  VAR_23,
                  VAR_22,
                  VAR_19,
                  VAR_16
               );

               VAR_28 = VAR_9;
            }
            break;
         default :

            FUNC_7(
               VAR_24,
               VAR_25,
               VAR_23,
               VAR_22,
               VAR_20 ,
               VAR_17
            );
            VAR_28 = VAR_9;
            break;
      }
   }
   return VAR_28;
}
