
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;



 int* FUNC_0 (void*) ;
 int FUNC_1 (void*,int,int*) ;

U32 FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   U8* VAR_3 = FUNC_0(VAR_1);
   U8 VAR_4;
   U32 VAR_5 = 0;

   switch(VAR_3[0])
   {
      case 128:
         FUNC_1(VAR_1, 1, &VAR_4);
         VAR_5 = VAR_4+2;
         break;

      case 0x51:
         FUNC_1(VAR_1, 1, &VAR_4);
         VAR_5 = VAR_4+2;
         break;

      default:
         break;
   }

   return VAR_5;
}
