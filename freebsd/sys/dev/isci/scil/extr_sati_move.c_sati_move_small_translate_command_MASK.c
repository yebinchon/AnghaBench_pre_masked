
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U8 ;
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
 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,void*,void*) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (TYPE_2__*,void*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,void*,void*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,void*,int ,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;

SATI_STATUS FUNC_9(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_15,
   void * VAR_16,
   void * VAR_17
)
{


   if (VAR_15->device->capabilities & VAR_7)
   {
      FUNC_5(
         VAR_15, VAR_17, VAR_5, VAR_2
      );
      FUNC_4(VAR_16, VAR_17);
      VAR_15->protocol = VAR_10;
   }
   else if (VAR_15->device->capabilities & VAR_6)
   {
      U8 * VAR_18 = FUNC_0(VAR_16);

      FUNC_6(
         VAR_15, VAR_16, VAR_17, VAR_4, VAR_1
      );




      if (FUNC_2(VAR_18, 4) == 0)
      {
         U8 * VAR_19 = FUNC_1(VAR_17);
         FUNC_8(VAR_19, 1);
      }
   }
   else if (VAR_15->device->capabilities & VAR_8)
   {
      FUNC_6(
         VAR_15, VAR_16, VAR_17, VAR_3, VAR_0
      );
   }
   else
   {




      FUNC_7(
         VAR_15,
         VAR_16,
         VAR_14,
         VAR_13,
         VAR_12,
         VAR_11
      );
      return VAR_9;
   }

   return FUNC_3(VAR_15, VAR_16, VAR_17);
}
