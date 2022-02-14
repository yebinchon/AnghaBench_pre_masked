
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,void*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_7(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_16,
   void * VAR_17,
   void * VAR_18
)
{
   U8 * VAR_19 = FUNC_0(VAR_18);
   U32 VAR_20;
   U32 VAR_21;
   U32 VAR_22;
   SATI_STATUS VAR_23 = VAR_4;

   if(FUNC_4(VAR_19) & VAR_2)
   {
      FUNC_6(
         VAR_16,
         VAR_17,
         VAR_15,
         VAR_13,
         VAR_11 ,
         VAR_7
      );
      VAR_23 = VAR_5;
   }
   else
   {
      switch(VAR_16->type)
      {
         case 128:

            VAR_20 = FUNC_2(VAR_19);
            VAR_21 = FUNC_1(VAR_19);
            if(VAR_20 == VAR_1
               && VAR_21 == VAR_0)
            {
               FUNC_5(
                  VAR_16,
                  VAR_17,
                  VAR_14,
                  VAR_10,
                  VAR_6
               );
               VAR_23 = VAR_3;
            }
            else
            {
               FUNC_5(
                  VAR_16,
                  VAR_17,
                  VAR_14,
                  VAR_11,
                  VAR_7
               );
               VAR_23 = VAR_3;
            }
         break;

         case 129:

            VAR_22 = FUNC_3(VAR_19);

            switch(VAR_22)
            {
                case 130:
                   FUNC_5(
                      VAR_16,
                      VAR_17,
                      VAR_14,
                      VAR_12,
                      VAR_9
                   );
                   VAR_23 = VAR_3;
                break;

                case 131:
                   FUNC_5(
                      VAR_16,
                      VAR_17,
                      VAR_14,
                      VAR_12,
                      VAR_8
                   );
                   VAR_23 = VAR_3;
                break;

                case 132:
                   FUNC_5(
                      VAR_16,
                      VAR_17,
                      VAR_14,
                      VAR_11,
                      VAR_7
                   );
                   VAR_23 = VAR_3;
                break;

                default:
                break;
             }
         break;

         default:
            FUNC_5(
               VAR_16,
               VAR_17,
               VAR_14,
               VAR_11,
               VAR_7
            );
            VAR_23 = VAR_3;
      }
   }

   return VAR_23;
}
