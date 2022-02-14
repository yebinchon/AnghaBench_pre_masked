
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;
typedef int U32 ;
typedef size_t U16 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,void*,int ,int ,int ) ;
 size_t FUNC_1 (scalar_t__) ;

U32 FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   U32 VAR_6,
   U8 VAR_7,
   U8 VAR_8
)
{
   U16 VAR_9 = FUNC_1(VAR_8);
   U32 VAR_10 = VAR_3[VAR_9];



   if (VAR_7 == VAR_0)
   {

      FUNC_0(
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_1[VAR_9],
         VAR_10
      );
   }
   else
   {

      FUNC_0(
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_2[VAR_9],
         VAR_10
      );
   }

   return VAR_10;
}
