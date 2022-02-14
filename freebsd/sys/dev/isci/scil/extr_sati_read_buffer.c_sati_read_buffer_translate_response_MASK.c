
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int state; } ;
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
 void* FUNC_0 (void*) ;
 int* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,void*,int ,void*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_9,
   void * VAR_10,
   void * VAR_11
)
{
   U8 * VAR_12 = FUNC_1(VAR_11);
   U8 VAR_13 = (U8) FUNC_3(VAR_12);
   SATI_STATUS VAR_14 = VAR_1;

   if (VAR_13 & VAR_0)
   {
      FUNC_4(
         VAR_9,
         VAR_10,
         VAR_8,
         VAR_7,
         VAR_6,
         VAR_5
      );

      VAR_14 = VAR_3;
   }
   else
   {
      void * VAR_15 = FUNC_0(VAR_11);

      if(VAR_15 == ((void*)0))
      {
         VAR_14 = VAR_2;
      }
      else
      {

         FUNC_2(
            VAR_9,
            VAR_10,
            0,
            VAR_15,
            512
         );
      }
   }

   VAR_9->state = VAR_4;
   return VAR_14;
}
