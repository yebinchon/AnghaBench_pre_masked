
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_6__ {int allocation_length; void* state; int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*,TYPE_1__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,void*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,void*,int,int) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_11,
   void * VAR_12,
   void * VAR_13
)
{
   U8 * VAR_14 = FUNC_1(VAR_12);
   SATI_STATUS VAR_15 = VAR_1;
   U32 VAR_16;
   U32 VAR_17;

   VAR_16 = ((FUNC_2(VAR_14, 6) << 16) |
                        (FUNC_2(VAR_14, 7) << 8) |
                        (FUNC_2(VAR_14, 8)));

   VAR_17 = ((FUNC_2(VAR_14, 3) << 16) |
                    (FUNC_2(VAR_14, 4) << 8) |
                    (FUNC_2(VAR_14, 5)));

   VAR_11->allocation_length = VAR_16;

   switch(FUNC_2(VAR_14, 1))
   {
      case 129:
         if((VAR_16 == 512) && (VAR_17 == 0) &&
            (FUNC_2(VAR_14, 2) == 0))
         {
            FUNC_0(VAR_13, VAR_11);
            VAR_11->type = VAR_3;
            VAR_11->state = VAR_4;
            VAR_15 = VAR_6;
         }
         else
         {
            FUNC_3(
               VAR_11,
               VAR_12,
               VAR_10,
               VAR_9,
               VAR_8,
               VAR_7
            );
            VAR_11->state = VAR_5;
            VAR_15 = VAR_2;
         }
      break;

      case 128:


         if(VAR_16 < 4)
         {
            FUNC_3(
               VAR_11,
               VAR_12,
               VAR_10,
               VAR_9,
               VAR_8,
               VAR_7
            );
            VAR_11->state = VAR_5;
            VAR_15 = VAR_2;
         }
         else
         {

            FUNC_4(VAR_11, VAR_12, 0, 0x09);
            FUNC_4(VAR_11, VAR_12, 1, 0x00);
            FUNC_4(VAR_11, VAR_12, 2, 0x02);
            FUNC_4(VAR_11, VAR_12, 3, 0x00);
            VAR_11->state = VAR_5;
            VAR_15 = VAR_0;
         }
      break;

      default:

         FUNC_3(
            VAR_11,
            VAR_12,
            VAR_10,
            VAR_9,
            VAR_8,
            VAR_7
         );
         VAR_11->state = VAR_5;
         VAR_15 = VAR_2;
   }
   return VAR_15;
}
