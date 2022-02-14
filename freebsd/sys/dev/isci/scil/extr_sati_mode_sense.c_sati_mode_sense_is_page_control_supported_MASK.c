
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*,int ,int ,int ,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_7,
   void * VAR_8
)
{
   U8 * VAR_9 = FUNC_0(VAR_8);

   switch (FUNC_1(VAR_9, 2) >> VAR_4)
   {
      case 130:
      case 129:
      case 131:
         return VAR_1;
      break;

      default:
      case 128:
         FUNC_2(
            VAR_7,
            VAR_8,
            VAR_6,
            VAR_5,
            VAR_3,
            VAR_2
         );
         return VAR_0;
      break;
   }
}
