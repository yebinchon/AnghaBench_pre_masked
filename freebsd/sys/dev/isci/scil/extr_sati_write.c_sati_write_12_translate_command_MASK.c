
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,void*,void*,int,int) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3,
   void * VAR_4
)
{
   U8 * VAR_5 = FUNC_0(VAR_3);
   U32 VAR_6 = (FUNC_2(VAR_5, 6) << 24) |
                        (FUNC_2(VAR_5, 7) << 16) |
                        (FUNC_2(VAR_5, 8) << 8) |
                        (FUNC_2(VAR_5, 9));

   if(FUNC_1(VAR_2, VAR_3))
   {
      return VAR_0;
   }
   else
   {
      VAR_2->type = VAR_1;

      return FUNC_3(
                VAR_2, VAR_3, VAR_4, VAR_6, 11
             );
   }
}
