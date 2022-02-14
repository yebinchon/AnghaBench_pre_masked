
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int state; int protocol; int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int * FUNC_2 (void*) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,void*,int ,int ,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

SATI_STATUS FUNC_15(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_14,
   void * VAR_15,
   void * VAR_16
)
{
   SATI_STATUS VAR_17;
   U8 * VAR_18;
   U8 * VAR_19;

   VAR_17 = VAR_4;

   VAR_14->type = VAR_6;
   VAR_14->state = VAR_8;

   VAR_18 = FUNC_2(VAR_15);
   VAR_14->protocol = FUNC_0 (VAR_18);
   VAR_19 = FUNC_3(VAR_16);
   if (VAR_14->protocol == VAR_0)
   {
      if (FUNC_1(VAR_18) == 0x1)
      {
         VAR_14->protocol = VAR_1;
      }
      else
      {
         VAR_14->protocol = VAR_2;
      }
   }

   if (FUNC_5(VAR_14, VAR_18) != VAR_3
       || FUNC_6(VAR_18)
      )
   {

      FUNC_7(
         VAR_14,
         VAR_15,
         VAR_13,
         VAR_12,
         VAR_11,
         VAR_10
      );
      return VAR_5;
   }

   FUNC_10(VAR_19, FUNC_4(VAR_18, 3));
   FUNC_14(VAR_19, FUNC_4(VAR_18, 4));
   FUNC_12(VAR_19, FUNC_4(VAR_18, 5));
   FUNC_13(VAR_19, FUNC_4(VAR_18, 6));
   FUNC_11(VAR_19, FUNC_4(VAR_18, 7));
   FUNC_9(VAR_19, FUNC_4(VAR_18, 8));
   FUNC_8(VAR_19, FUNC_4(VAR_18, 9));

   VAR_14->state = VAR_7;

   return VAR_9;
}
