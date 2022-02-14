
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,void*,int ,int) ;

__attribute__((used)) static
void FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   U32 VAR_3,
   U8 VAR_4,
   BOOL VAR_5
)
{


   if((VAR_5 == VAR_0)
     && ((VAR_4 < 0x20) || (VAR_4 > 0x7E)))
   {
      VAR_4 = 0x20;
   }

   FUNC_0(
      VAR_1, VAR_2, VAR_3, VAR_4
   );
}
