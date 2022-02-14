
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (void*) ;
 int * FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,void*,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,void*,int ) ;

SATI_STATUS FUNC_8(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_9,
   void * VAR_10,
   void * VAR_11
)
{
   U8 * VAR_12;
   U8 * VAR_13;

   VAR_12 = FUNC_2(VAR_10);
   VAR_13 = FUNC_3(VAR_11);


   if (FUNC_5(VAR_13) & VAR_0)
   {
      FUNC_7(VAR_9, VAR_10, (U8)FUNC_4(VAR_13));
      return VAR_3;
   }

   VAR_9->state = VAR_4;


   if (FUNC_0(VAR_12) ||
       FUNC_1(VAR_12) == VAR_1)
   {
      FUNC_6(
         VAR_9,
         VAR_13,
         VAR_10,
         VAR_8,
         VAR_7,
         VAR_6,
         VAR_5
      );
      return VAR_3;
   }

   return VAR_2;
}
