
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int type; } ;
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
 int FUNC_0 (TYPE_1__*,void*,void*) ;
 void* FUNC_1 (void*) ;
 int* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (TYPE_1__*,void*,int ) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   void * VAR_10
)
{
   SATI_STATUS VAR_11 = VAR_4;
   U8 * VAR_12 = FUNC_2(VAR_10);
   U8 VAR_13;





   VAR_13 = (U8) FUNC_3(VAR_12);
   if (VAR_13 & VAR_0)
   {
      FUNC_4(
         VAR_8,
         VAR_9,
         VAR_7
      );
      return VAR_4;
   }



   switch (VAR_8->type)
   {
      case 128:
         if (VAR_13 & VAR_1)
         {
            FUNC_4(
               VAR_8, VAR_9, VAR_7);
         }
         else
         {
            FUNC_4(
               VAR_8, VAR_9, VAR_6);
         }

         VAR_11 = VAR_2;
      break;


      case 129:
         if (VAR_13 & VAR_1)
         {
            FUNC_4(
               VAR_8, VAR_9, VAR_7);
         }
         else
         {
            void * VAR_14 = FUNC_1(VAR_10);

            if(VAR_14 == ((void*)0))
            {
               VAR_11 = VAR_3;
            }
            else
            {
               VAR_11 = FUNC_0(
                           VAR_8,
                           VAR_14,
                           VAR_9
                        );
            }
         }
      break;


      default:
         VAR_11 = VAR_5;
      break;
   }

   return VAR_11;
}
