
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_9__ {TYPE_1__* device; int protocol; } ;
struct TYPE_8__ {int capabilities; } ;
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
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,void*,void*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,void*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,void*,void*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_6(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_20,
   void * VAR_21,
   void * VAR_22,
   U32 VAR_23,
   U8 * VAR_24
)
{
   SATI_STATUS VAR_25 = VAR_12;
   U8 * VAR_26 = FUNC_0(VAR_21);



   if (VAR_20->device->capabilities & VAR_9)
   {

      if((VAR_20->device->capabilities & VAR_8)==0)
      {

         if (FUNC_1(VAR_26, 1) & VAR_16)
            *VAR_24 = VAR_0;
      }

      FUNC_3(
         VAR_20, VAR_22, VAR_6, VAR_3
      );
      VAR_25 = FUNC_4(
                  VAR_20, VAR_21, VAR_22, VAR_23, VAR_19
               );
      VAR_20->protocol = VAR_13;
   }
   else if (VAR_20->device->capabilities & VAR_7)
   {


      if (FUNC_1(VAR_26, 1) & VAR_16)
      {
         FUNC_5(
            VAR_20,
            VAR_21,
            VAR_18,
            VAR_17,
            VAR_15,
            VAR_14
         );
         return VAR_11;
      }

      VAR_25 = FUNC_2(
                  VAR_20,
                  VAR_21,
                  VAR_22,
                  VAR_23,
                  VAR_5,
                  VAR_2
               );
   }
   else if (VAR_20->device->capabilities & VAR_10)
   {
      VAR_25 = FUNC_2(
                  VAR_20,
                  VAR_21,
                  VAR_22,
                  VAR_23,
                  VAR_4,
                  VAR_1
               );
   }
   else
   {




      FUNC_5(
         VAR_20,
         VAR_21,
         VAR_18,
         VAR_17,
         VAR_15,
         VAR_14
      );
      return VAR_11;
   }

   return VAR_25;
}
