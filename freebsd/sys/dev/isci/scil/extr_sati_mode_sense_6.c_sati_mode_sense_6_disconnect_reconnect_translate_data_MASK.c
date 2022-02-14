
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int) ;
 int FUNC_2 (int *,void*,int *,int ) ;

void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3
)
{
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_4 = (ATA_IDENTIFY_DEVICE_DATA_T*)
      VAR_2;

   U8 VAR_5 = (U8) FUNC_1(VAR_3, 6)
      + VAR_0 ;

   U32 VAR_6 = FUNC_0(
                         VAR_1, VAR_4, VAR_3, VAR_5
                      );

   FUNC_2(
      VAR_1, VAR_3, VAR_4, VAR_6
   );
}
