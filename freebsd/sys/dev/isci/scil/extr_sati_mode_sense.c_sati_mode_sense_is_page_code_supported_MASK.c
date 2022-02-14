
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {int type; TYPE_1__* device; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;







 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,void*,int ,int ,int ,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_25,
   void * VAR_26,
   U8 VAR_27
)
{
   U8 * VAR_28 = FUNC_0(VAR_26);

   switch (FUNC_1(VAR_28, 2) & VAR_22)
   {
      case 133:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_10;
         else
            VAR_25->type = VAR_3;
      break;

      case 134:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_9;
         else
            VAR_25->type = VAR_2;
      break;

      case 128:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_15;
         else
            VAR_25->type = VAR_8;
      break;

      case 131:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_12;
         else
            VAR_25->type = VAR_5;
      break;

      case 132:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_11;
         else
            VAR_25->type = VAR_4;
      break;

      case 129:
         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_14;
         else
            VAR_25->type = VAR_7;
      break;

      case 130:


         if ((VAR_25->device->capabilities | VAR_0)
             == 0)
         {


            if (FUNC_1(VAR_28, 0) == VAR_21)
            {
               FUNC_2(
                  VAR_25,
                  VAR_26,
                  VAR_24,
                  VAR_23,
                  VAR_19,
                  VAR_17
               );
            }
            else
            {
               FUNC_2(
                  VAR_25,
                  VAR_26,
                  VAR_24,
                  VAR_23,
                  VAR_20,
                  VAR_18
               );
            }

            return VAR_1;
         }

         if (FUNC_1(VAR_28, 0) == VAR_21)
            VAR_25->type = VAR_13;
         else
            VAR_25->type = VAR_6;
      break;

      default:
         FUNC_2(
            VAR_25,
            VAR_26,
            VAR_24,
            VAR_23,
            VAR_19,
            VAR_17
         );
         return VAR_1;
      break;
   }

   return VAR_16;
}
