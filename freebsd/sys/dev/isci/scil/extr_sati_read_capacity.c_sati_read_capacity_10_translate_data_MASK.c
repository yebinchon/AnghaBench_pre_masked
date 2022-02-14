
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef scalar_t__ U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,void*,int,int) ;

void FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   U32 VAR_3 = 0;
   U32 VAR_4 = 0;
   U32 VAR_5 = 0;



   FUNC_0(
      (ATA_IDENTIFY_DEVICE_DATA_T*)VAR_1,
      &VAR_4,
      &VAR_3,
      &VAR_5
   );





   if ((VAR_3 == 0) && (VAR_4 == 0))
      VAR_4 -= 1;
   VAR_3 -= 1;

   if(VAR_4 != 0)
   {
      FUNC_1(VAR_0, VAR_2, 0, 0xFF);
      FUNC_1(VAR_0, VAR_2, 1, 0xFF);
      FUNC_1(VAR_0, VAR_2, 2, 0xFF);
      FUNC_1(VAR_0, VAR_2, 3, 0xFF);
   }
   else
   {


      FUNC_1(VAR_0, VAR_2, 0, (U8)((VAR_3 >> 24) & 0xFF));
      FUNC_1(VAR_0, VAR_2, 1, (U8)((VAR_3 >> 16) & 0xFF));
      FUNC_1(VAR_0, VAR_2, 2, (U8)((VAR_3 >> 8) & 0xFF));
      FUNC_1(VAR_0, VAR_2, 3, (U8)(VAR_3 & 0xFF));
   }

   FUNC_1(VAR_0, VAR_2, 4, (U8)((VAR_5 >> 24) & 0xFF));
   FUNC_1(VAR_0, VAR_2, 5, (U8)((VAR_5 >> 16) & 0xFF));
   FUNC_1(VAR_0, VAR_2, 6, (U8)((VAR_5 >> 8) & 0xFF));
   FUNC_1(VAR_0, VAR_2, 7, (U8)(VAR_5 & 0xFF));
}
