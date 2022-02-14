
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,void*,int ) ;
 scalar_t__ FUNC_1 (int *,void*,void*,int ,int *) ;

__attribute__((used)) static
SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3,
   U32 VAR_4,
   U8 VAR_5
)
{
   U8 VAR_6 = 0;
   SATI_STATUS VAR_7;

   VAR_7 = FUNC_1(
               VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6
            );

   if (VAR_7 == VAR_0)
   {
      VAR_7 = FUNC_0(
                  VAR_1, VAR_2, VAR_3, VAR_6
               );
   }

   return VAR_7;
}
