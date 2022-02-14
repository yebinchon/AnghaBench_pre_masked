
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int *) ;
 scalar_t__ FUNC_1 (int *,void*,int ) ;
 scalar_t__ FUNC_2 (int *,void*) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3,
   U8 VAR_4
)
{
   SATI_STATUS VAR_5;




   VAR_5 = FUNC_2(VAR_1, VAR_2);
   if (VAR_5 != VAR_0)
      return VAR_5;




   VAR_5 = FUNC_1(VAR_1,VAR_2,VAR_4);
   if (VAR_5 != VAR_0)
      return VAR_5;

   FUNC_0(VAR_3, VAR_1);

   return VAR_0;
}
