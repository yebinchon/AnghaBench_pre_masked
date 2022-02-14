
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_4__ {int type; int state; } ;
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
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_13,
   void * VAR_14,
   void * VAR_15
)
{
   U8 * VAR_16 = FUNC_0(VAR_15);
   U8 VAR_17 = (U8) FUNC_1(VAR_16);
   SATI_STATUS VAR_18 = VAR_2;

   if (VAR_17 & VAR_0)
   {
      FUNC_2(
         VAR_13,
         VAR_14,
         VAR_11,
         VAR_9,
         VAR_8,
         VAR_6
      );
      VAR_18 = VAR_3;
   }
   else
   {
      switch(VAR_13->type)
      {
         case 128:
            FUNC_2(
               VAR_13,
               VAR_14,
               VAR_12,
               VAR_10,
               VAR_7,
               VAR_5
            );
            VAR_18 = VAR_1;
         break;

         default:
            VAR_18 = VAR_1;
         break;
      }
   }

   VAR_13->state = VAR_4;
   return VAR_18;
}
