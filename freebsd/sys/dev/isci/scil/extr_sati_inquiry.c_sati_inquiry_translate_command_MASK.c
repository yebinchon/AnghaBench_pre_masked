
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int allocation_length; int type; int state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
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
 int FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_6(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_16,
   void * VAR_17,
   void * VAR_18
)
{
   U8 * VAR_19 = FUNC_2(VAR_17);





   if ( ((FUNC_3(VAR_19, 1) & VAR_13) == 0)
      && (FUNC_3(VAR_19, 2) != 0) )
   {
      FUNC_5(
         VAR_16,
         VAR_17,
         VAR_15,
         VAR_14,
         VAR_12,
         VAR_11
      );
      return VAR_1;
   }


   VAR_16->allocation_length = (FUNC_3(VAR_19, 3) << 8) |
                                 (FUNC_3(VAR_19, 4));



   if (FUNC_3(VAR_19, 1) & VAR_13)
   {

      switch (FUNC_3(VAR_19, 2))
      {
         case 129:
            VAR_16->type = VAR_8;
            FUNC_4(VAR_16, VAR_17);
            return VAR_0;
         break;

         case 128:
            VAR_16->type = VAR_6;
         break;

         case 130:
            VAR_16->type = VAR_4;
         break;

         case 132:

            if(VAR_16->state == VAR_9)
            {
               FUNC_0(
                  VAR_18,
                  VAR_16
               );
               VAR_16->type = VAR_5;
            }
            else
            {
               VAR_16->type = VAR_2;
            }
         break;

         case 131:
            VAR_16->type = VAR_3;
         break;

         default:
            FUNC_5(
               VAR_16,
               VAR_17,
               VAR_15,
               VAR_14,
               VAR_12,
               VAR_11
            );
            return VAR_1;
         break;
      }
   }
   else
   {
      VAR_16->type = VAR_7;
   }

   FUNC_1(VAR_18, VAR_16);

   return VAR_10;
}
