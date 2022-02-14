
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int * device; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int SATI_DEVICE_T ;


 int VAR_0 ;



 int FUNC_0 (TYPE_1__*,void*,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,void*,void*) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   SATI_DEVICE_T * VAR_2,
   void * VAR_3,
   void * VAR_4
)
{
   SATI_STATUS VAR_5=VAR_0;
   U8 VAR_6 = FUNC_1(VAR_3);

   VAR_1->device = VAR_2;

   switch (VAR_6)
   {




      case 130:
      case 128:
         VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
      break;

      case 129:

         VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);



         break;
      default:
         VAR_5 = VAR_0;
      break;
   }

   return VAR_5;
}
