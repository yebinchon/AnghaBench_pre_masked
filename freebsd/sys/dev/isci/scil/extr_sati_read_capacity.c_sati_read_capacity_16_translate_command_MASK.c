
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int allocation_length; int type; } ;
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
 int FUNC_0 (void*,TYPE_1__*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,void*,int ,int ,int ,int ) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_8,
   void * VAR_9,
   void * VAR_10
)
{
   U8 * VAR_11 = FUNC_1(VAR_9);






   if (
         (
            (FUNC_2(VAR_11, 2) != 0)
         || (FUNC_2(VAR_11, 3) != 0)
         || (FUNC_2(VAR_11, 4) != 0)
         || (FUNC_2(VAR_11, 5) != 0)
         || (FUNC_2(VAR_11, 6) != 0)
         || (FUNC_2(VAR_11, 7) != 0)
         || (FUNC_2(VAR_11, 8) != 0)
         || (FUNC_2(VAR_11, 9) != 0)
         )
         || ((FUNC_2(VAR_11, 14) & VAR_5)
              == 1)
      )
   {
      FUNC_3(
         VAR_8,
         VAR_9,
         VAR_7,
         VAR_6,
         VAR_4,
         VAR_3
      );
      return VAR_0;
   }


   VAR_8->allocation_length = (FUNC_2(VAR_11, 10) << 24) |
                                 (FUNC_2(VAR_11, 11) << 16) |
                                 (FUNC_2(VAR_11, 12) << 8) |
                                 (FUNC_2(VAR_11, 13));

   VAR_8->type = VAR_1;

   FUNC_0(VAR_10, VAR_8);
   return VAR_2;
}
