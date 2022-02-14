
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
typedef int U16 ;
struct TYPE_10__ {void* type; TYPE_1__* device; } ;
struct TYPE_9__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int FUNC_1 (void*,TYPE_2__*,int ) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,void*,void*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,void*,void*) ;
 int FUNC_6 (TYPE_2__*,void*,void*,int ) ;
 int FUNC_7 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_8(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_15,
   void * VAR_16,
   void * VAR_17
)
{
   U8 * VAR_18 = FUNC_2(VAR_16);
   SATI_STATUS VAR_19 = VAR_4;
   U16 VAR_20;
   U8 VAR_21 = 0;

   if((VAR_15->device->capabilities &
       VAR_3) == 0)
   {
      FUNC_7(
         VAR_15,
         VAR_16,
         VAR_13,
         VAR_12,
         VAR_10,
         VAR_8
      );
      return VAR_5;
   }


   if(FUNC_3(VAR_18, 0) == VAR_14)
   {
      VAR_20 = (FUNC_3(VAR_18, 7) << 8) |
                             (FUNC_3(VAR_18, 8));

      FUNC_4(VAR_15, VAR_16, VAR_17);
   }
   else
   {
      VAR_20 = (FUNC_3(VAR_18, 12) << 8) |
                             (FUNC_3(VAR_18, 13));

      VAR_19 = FUNC_5(VAR_15, VAR_16, VAR_17);

      if( VAR_19 == VAR_5)
      {
         return VAR_19;
      }
   }


   FUNC_6(VAR_15, VAR_16, VAR_17, VAR_21);

   if( VAR_20 != 0 )
   {
      FUNC_7(
         VAR_15,
         VAR_16,
         VAR_13,
         VAR_12,
         VAR_11,
         VAR_9
      );
      return VAR_5;
   }

   switch(FUNC_0(VAR_18))
   {
      case 129 :

         if( (VAR_15->device->capabilities &
              VAR_2) != 0 )
         {
            FUNC_7(
               VAR_15,
               VAR_16,
               VAR_13,
               VAR_12,
               VAR_11,
               VAR_9
            );
            return VAR_5;
         }
         else
         {
            FUNC_1(
               VAR_17,
               VAR_15,
               VAR_1
            );
            VAR_15->type = VAR_6;
            VAR_19 = VAR_7;
         }
         break;

      case 128 :

         FUNC_1(
            VAR_17,
            VAR_15,
            VAR_1
         );
         VAR_15->type = VAR_6;
         VAR_19 = VAR_7;
         break;

      case 130 :

         FUNC_1(
            VAR_17,
            VAR_15,
            VAR_0
         );
         VAR_15->type = VAR_6;
         VAR_19 = VAR_7;
         break;

      default :

         FUNC_7(
            VAR_15,
            VAR_16,
            VAR_13,
            VAR_12,
            VAR_11,
            VAR_9
         );
         return VAR_5;
         break;
   }
   return VAR_19;
}
