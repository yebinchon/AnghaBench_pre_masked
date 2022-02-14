
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; TYPE_1__* device; } ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (void*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_14,
   void * VAR_15,
   void * VAR_16
)
{
   if (VAR_14->device->state == VAR_2)
   {
      FUNC_1(
         VAR_14,
         VAR_15,
         VAR_13,
         VAR_12,
         VAR_9,
         VAR_6
      );
      return VAR_3;
   }
   else if (VAR_14->device->state
            == VAR_1)
   {
      FUNC_1(
         VAR_14,
         VAR_15,
         VAR_13,
         VAR_12,
         VAR_11,
         VAR_8
      );
      return VAR_3;
   }
   else if (VAR_14->device->state
            == VAR_0)
   {
      FUNC_1(
         VAR_14,
         VAR_15,
         VAR_13,
         VAR_12,
         VAR_10,
         VAR_7
      );
      return VAR_3;
   }


   VAR_14->type = VAR_4;

   FUNC_0(VAR_16, VAR_14);
   return VAR_5;
}
