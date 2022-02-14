
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int state; int is_translate_response_required; scalar_t__ protocol; int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int * FUNC_4 (void*) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,void*,int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;

SATI_STATUS FUNC_22(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_16,
   void * VAR_17,
   void * VAR_18
)
{
   SATI_STATUS VAR_19;
   U8 * VAR_20;
   U8 * VAR_21;

   VAR_19 = VAR_5;

   VAR_16->type = VAR_7;
   VAR_16->state = VAR_9;

   VAR_20 = FUNC_4(VAR_17);
   VAR_16->protocol = FUNC_2(VAR_20);
   VAR_21 = FUNC_5(VAR_18);
   if (VAR_16->protocol == VAR_0)
   {
      if (FUNC_3(VAR_20) == 0x1)
      {
         VAR_16->protocol = VAR_2;
      }
      else
      {
         VAR_16->protocol = VAR_3;
      }
   }

   if (FUNC_7(VAR_16, VAR_20) != VAR_4
       || FUNC_8(VAR_20)
      )
   {

      FUNC_9(
         VAR_16,
         VAR_17,
         VAR_14,
         VAR_13,
         VAR_12,
         VAR_11
      );
      return VAR_6;
   }

   if (FUNC_1(VAR_20) == 1)
   {
      FUNC_13(VAR_21, FUNC_6(VAR_20, 3));
      FUNC_21(VAR_21, FUNC_6(VAR_20, 5));
      FUNC_17(VAR_21, FUNC_6(VAR_20, 7));
      FUNC_19(VAR_21, FUNC_6(VAR_20, 9));
      FUNC_15(VAR_21, FUNC_6(VAR_20, 11));
   }

   if (FUNC_0(VAR_20) ||
       FUNC_2(VAR_20) == VAR_1)
   {
      VAR_16->is_translate_response_required = VAR_15;
   }

   FUNC_12(VAR_21, FUNC_6(VAR_20, 4));
   FUNC_20(VAR_21, FUNC_6(VAR_20, 6));
   FUNC_16(VAR_21, FUNC_6(VAR_20, 8));
   FUNC_18(VAR_21, FUNC_6(VAR_20, 10));
   FUNC_14(VAR_21, FUNC_6(VAR_20, 12));
   FUNC_11(VAR_21, FUNC_6(VAR_20, 13));
   FUNC_10(VAR_21, FUNC_6(VAR_20, 14));

   VAR_16->state = VAR_8;

   return VAR_10;
}
