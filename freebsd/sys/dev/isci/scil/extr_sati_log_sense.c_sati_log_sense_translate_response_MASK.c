
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int type; } ;
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
 void* FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,void*,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,void*,void*) ;
 int FUNC_5 (TYPE_1__*,void*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,void*,void*) ;

SATI_STATUS FUNC_7(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   void * VAR_10
)
{
   U8 * VAR_11 = FUNC_1(VAR_10);
   SATI_STATUS VAR_12 = VAR_2;

   if(FUNC_3(VAR_11) & VAR_0)
   {
      FUNC_5(
         VAR_8,
         VAR_9,
         VAR_7,
         VAR_6,
         VAR_5 ,
         VAR_4
      );
      VAR_12 = VAR_3;
   }
   else
   {

      void * VAR_13 = FUNC_0(VAR_10);

      if(VAR_13 == ((void*)0))
      {
         return VAR_2;
      }

      switch(VAR_8->type)
      {
         case 130:
            FUNC_2(
                                 VAR_8, VAR_9, VAR_13
            );

            VAR_12 = VAR_1;
            break;

         case 128:
            FUNC_6(VAR_8, VAR_9, VAR_13);
            VAR_12 = VAR_1;
            break;

         case 129:

            FUNC_4(
                                 VAR_8, VAR_9, VAR_10
            );

            VAR_12 = VAR_1;
            break;

         default:
            FUNC_5(
               VAR_8,
               VAR_9,
               VAR_7,
               VAR_6,
               VAR_5 ,
               VAR_4
            );
            VAR_12 = VAR_3;
            break;
      }
   }
   return VAR_12;
}
