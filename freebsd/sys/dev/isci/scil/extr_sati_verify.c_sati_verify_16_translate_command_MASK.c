
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_7__ {int type; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,void*,void*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,void*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,void*,void*) ;

SATI_STATUS FUNC_6(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
)
{
   SATI_STATUS VAR_6;
   U8 * VAR_7 = FUNC_0(VAR_4);
   U32 VAR_8 = (FUNC_2(VAR_7, 10) << 24) |
                                (FUNC_2(VAR_7, 11) << 16) |
                                (FUNC_2(VAR_7, 12) << 8) |
                                (FUNC_2(VAR_7, 13));

   if(FUNC_1(VAR_3, VAR_4))
   {
      return VAR_0;
   }
   else
   {
      VAR_3->type = VAR_1;


      VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
      if (VAR_6 != VAR_2)
         return VAR_6;


      VAR_6 = FUNC_3(VAR_3,VAR_4,VAR_5,VAR_8,0);
      if (VAR_6 != VAR_2)
         return VAR_6;

      return FUNC_5(VAR_3, VAR_4, VAR_5);
   }
}
