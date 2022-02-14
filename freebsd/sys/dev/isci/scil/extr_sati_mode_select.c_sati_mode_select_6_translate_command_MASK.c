
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,void*,void*,int) ;
 int FUNC_3 (int *,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_10,
   void * VAR_11,
   void * VAR_12
)
{
   SATI_STATUS VAR_13=VAR_0;
   U8 * VAR_14 = FUNC_0(VAR_11);


   if ((FUNC_1(VAR_14, 1) & VAR_7) == !VAR_6)
   {
      FUNC_3(
         VAR_10,
         VAR_11,
         VAR_9,
         VAR_8,
         VAR_4,
         VAR_2
      );
      VAR_13 = VAR_1;
      return VAR_13;
   }

   VAR_13=FUNC_2(
             VAR_10,
             VAR_11,
             VAR_12,
             6
          );

   if(VAR_13 == VAR_1)
   {
      FUNC_3(
         VAR_10,
         VAR_11,
         VAR_9,
         VAR_8,
         VAR_5,
         VAR_3
      );
   }
   return VAR_13;

}
