
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int type; int allocation_length; } ;
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
 int FUNC_0 (void*,TYPE_1__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_9,
   void * VAR_10,
   void * VAR_11
)
{
   U8 * VAR_12 = FUNC_1(VAR_10);






   if (
         (
            (FUNC_2(VAR_12, 2) != 0)
         || (FUNC_2(VAR_12, 3) != 0)
         || (FUNC_2(VAR_12, 4) != 0)
         || (FUNC_2(VAR_12, 5) != 0)
         )
         || ((FUNC_2(VAR_12, 8) & VAR_6)
              == 1)
      )
   {
      FUNC_3(
         VAR_9,
         VAR_10,
         VAR_8,
         VAR_7,
         VAR_4,
         VAR_3
      );
      return VAR_0;
   }


   VAR_9->allocation_length = VAR_5;
   VAR_9->type = VAR_1;

   FUNC_0(VAR_11, VAR_9);
   return VAR_2;
}
