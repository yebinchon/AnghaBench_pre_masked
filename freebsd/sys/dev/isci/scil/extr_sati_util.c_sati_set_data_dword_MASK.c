
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;


 int FUNC_0 (int *,void*,int,int) ;

void FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   U32 VAR_2,
   U32 VAR_3
)
{


   FUNC_0(VAR_0, VAR_1, VAR_2, (U8)VAR_3 & 0xFF);
       VAR_2++;
   FUNC_0(VAR_0, VAR_1, VAR_2, (U8)(VAR_3 >> 8) & 0xFF);
       VAR_2++;
   FUNC_0(VAR_0, VAR_1, VAR_2, (U8)(VAR_3 >> 16) & 0xFF);
       VAR_2++;
   FUNC_0(VAR_0, VAR_1, VAR_2, (U8)(VAR_3 >> 24) & 0xFF);
}
